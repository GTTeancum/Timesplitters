// The part of raylib the shared runtime uses, implemented for the Xbox.
//
// The runtime treats raylib as its platform layer (window, frame drawing,
// gamepads, audio stream, timing). On the Xbox:
//   - the "window" is the 640x480 video mode; textures live in system memory
//     and DrawTexturePro scales them into the framebuffer in software;
//   - shaders are unavailable (id 0), which the runtime already handles;
//   - gamepads and the audio stream go through nxdk's SDL2;
//   - keyboard queries report nothing pressed.
#include "raylib.h"
#include "xbox_log.h"

#include <SDL.h>
#include <hal/video.h>
#include <xboxkrnl/xboxkrnl.h>

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <unordered_map>
#include <vector>

namespace
{
    constexpr int kScreenWidth = 640;
    constexpr int kScreenHeight = 480;

    // Textures don't own pixels (memory): they point at the caller's RGBA8
    // rows, which the runtime keeps alive until its next upload.
    struct TextureData
    {
        int width = 0, height = 0;
        const uint32_t *pixels = nullptr;
        int stride = 0, rows = 0; // of the pixels pointed at
    };

    std::unordered_map<unsigned, TextureData> g_textures;

    struct BlitInfo
    {
        int width = 0, height = 0, litPercent = 0;
    } g_lastBlit;
    unsigned g_nextTextureId = 1;
    bool g_windowReady = false;
    int g_targetFps = 0;
    uint64_t g_timerStart = 0, g_timerFrequency = 1;
    uint64_t g_lastFrameCounter = 0;

    SDL_GameController *g_pads[4] = {};
    void (*g_frameHook)() = nullptr;

    uint32_t *frameBuffer() { return reinterpret_cast<uint32_t *>(XVideoGetFB()); }

    uint32_t toFramebuffer(uint32_t rgba)
    {
        // RGBA8 in memory (r first) -> X8R8G8B8.
        const uint32_t r = rgba & 0xFFu, g = (rgba >> 8) & 0xFFu, b = (rgba >> 16) & 0xFFu;
        return 0xFF000000u | (r << 16) | (g << 8) | b;
    }

    void refreshPads()
    {
        SDL_GameControllerUpdate();
        for (int i = 0; i < 4; ++i)
        {
            if (g_pads[i] && !SDL_GameControllerGetAttached(g_pads[i]))
            {
                SDL_GameControllerClose(g_pads[i]);
                g_pads[i] = nullptr;
            }
        }
        const int count = SDL_NumJoysticks();
        for (int j = 0; j < count; ++j)
        {
            if (!SDL_IsGameController(j))
                continue;
            SDL_JoystickID id = SDL_JoystickGetDeviceInstanceID(j);
            bool open = false;
            for (auto *pad : g_pads)
                open = open || (pad && SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(pad)) == id);
            if (open)
                continue;
            for (auto *&slot : g_pads)
            {
                if (!slot)
                {
                    slot = SDL_GameControllerOpen(j);
                    break;
                }
            }
        }
    }

    // One audio stream (the SPU2 mix) played through SDL.
    struct StreamState
    {
        AudioCallback callback = nullptr;
        SDL_AudioDeviceID device = 0;
        unsigned channels = 2;
    };
    std::unordered_map<rAudioBuffer *, StreamState> g_streams;
    int g_streamBufferFrames = 1024;

    void sdlAudioCallback(void *userdata, Uint8 *stream, int len)
    {
        auto *state = static_cast<StreamState *>(userdata);
        const unsigned frames = static_cast<unsigned>(len) / (2u * state->channels);
        if (state->callback)
            state->callback(stream, frames);
        else
            std::memset(stream, 0, static_cast<size_t>(len));
    }
}

// ------------------------------------------------------------------ window
void InitWindow(int, int, const char *)
{
    XVideoSetMode(kScreenWidth, kScreenHeight, 32, REFRESH_DEFAULT);
    std::memset(frameBuffer(), 0, kScreenWidth * kScreenHeight * 4);
    SDL_Init(SDL_INIT_GAMECONTROLLER);
    g_timerFrequency = KeQueryPerformanceFrequency();
    g_timerStart = KeQueryPerformanceCounter();
    g_windowReady = true;
    refreshPads();
}

void CloseWindow(void) { g_windowReady = false; }
bool IsWindowReady(void) { return g_windowReady; }
bool WindowShouldClose(void) { return false; }
void SetConfigFlags(unsigned int) {}
void SetTargetFPS(int fps) { g_targetFps = fps; }
void ToggleBorderlessWindowed(void) {}
bool IsWindowState(unsigned int) { return false; }
void SetWindowSize(int, int) {}
void SetWindowPosition(int, int) {}
int GetCurrentMonitor(void) { return 0; }
int GetMonitorWidth(int) { return kScreenWidth; }
int GetMonitorHeight(int) { return kScreenHeight; }
int GetScreenWidth(void) { return kScreenWidth; }
int GetScreenHeight(void) { return kScreenHeight; }
void SetClipboardText(const char *) {}

double GetTime(void)
{
    return double(KeQueryPerformanceCounter() - g_timerStart) / double(g_timerFrequency);
}

// ----------------------------------------------------------------- drawing
void BeginDrawing(void) {}

void xboxSetFrameHook(void (*hook)()) { g_frameHook = hook; }

void EndDrawing(void)
{
    if (g_frameHook)
        g_frameHook();
    xboxLogDrawOverlay(); // development aid: the log is otherwise invisible
    XVideoFlushFB();
    // Pace to the target rate on the vertical blank, like raylib's SetTargetFPS.
    if (g_targetFps > 0)
    {
        const uint64_t frame = g_timerFrequency / static_cast<uint64_t>(g_targetFps);
        if (KeQueryPerformanceCounter() - g_lastFrameCounter < frame)
            XVideoWaitForVBlank();
        g_lastFrameCounter = KeQueryPerformanceCounter();
    }
    refreshPads();
}

void ClearBackground(Color color)
{
    const uint32_t value = 0xFF000000u | (uint32_t(color.r) << 16) | (uint32_t(color.g) << 8) | color.b;
    uint32_t *fb = frameBuffer();
    std::fill(fb, fb + kScreenWidth * kScreenHeight, value);
}

void DrawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2, float, Color)
{
    const auto it = g_textures.find(texture.id);
    if (it == g_textures.end() || !it->second.pixels || it->second.rows <= 0)
        return;
    const TextureData &tex = it->second;
    // Development aid (xboxLastBlit): how much of the frame isn't black.
    {
        int lit = 0, sampled = 0;
        for (int y = 0; y < tex.rows; y += 16)
            for (int x = 0; x < tex.stride; x += 16, ++sampled)
                lit += (tex.pixels[size_t(y) * tex.stride + x] & 0x00FFFFFFu) != 0;
        g_lastBlit = {tex.stride, tex.rows, sampled ? lit * 100 / sampled : 0};
    }
    const int x0 = std::max(0, int(std::floor(dest.x))), y0 = std::max(0, int(std::floor(dest.y)));
    const int x1 = std::min(kScreenWidth, int(std::ceil(dest.x + dest.width)));
    const int y1 = std::min(kScreenHeight, int(std::ceil(dest.y + dest.height)));
    if (x1 <= x0 || y1 <= y0 || dest.width <= 0.0f || dest.height <= 0.0f)
        return;
    // Nearest-neighbour, 16.16 fixed-point steps through the source.
    const int32_t stepU = int32_t(source.width / dest.width * 65536.0f);
    const int32_t stepV = int32_t(source.height / dest.height * 65536.0f);
    const int32_t startU = int32_t((source.x + (x0 - dest.x) * source.width / dest.width) * 65536.0f);
    int32_t v = int32_t((source.y + (y0 - dest.y) * source.height / dest.height) * 65536.0f);
    uint32_t *fb = frameBuffer();
    for (int y = y0; y < y1; ++y, v += stepV)
    {
        const int sy = std::clamp(v >> 16, 0, tex.rows - 1);
        const uint32_t *row = tex.pixels + size_t(sy) * tex.stride;
        uint32_t *out = fb + size_t(y) * kScreenWidth;
        int32_t u = startU;
        for (int x = x0; x < x1; ++x, u += stepU)
            out[x] = toFramebuffer(row[std::clamp(u >> 16, 0, tex.stride - 1)]);
    }
}

void DrawLine(int, int, int, int, Color) {}
void DrawTriangle(Vector2, Vector2, Vector2, Color) {}

// ---------------------------------------------------------------- textures
Texture2D LoadTextureFromImage(Image image)
{
    TextureData data;
    data.width = image.width;
    data.height = image.height;
    const unsigned id = g_nextTextureId++;
    g_textures[id] = std::move(data);
    return Texture2D{id, image.width, image.height, 1, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8};
}

void UpdateTexture(Texture2D texture, const void *pixels)
{
    const auto it = g_textures.find(texture.id);
    if (it == g_textures.end())
        return;
    it->second.pixels = static_cast<const uint32_t *>(pixels);
    it->second.stride = it->second.width;
    it->second.rows = it->second.height;
}

void UpdateTextureRec(Texture2D texture, Rectangle rec, const void *pixels)
{
    const auto it = g_textures.find(texture.id);
    if (it == g_textures.end())
        return;
    it->second.pixels = static_cast<const uint32_t *>(pixels);
    it->second.stride = int(rec.width);
    it->second.rows = int(rec.height);
}

void UnloadTexture(Texture2D texture) { g_textures.erase(texture.id); }
void SetTextureFilter(Texture2D, int) {}

// ------------------------------------------------------------------ images
Image GenImageColor(int width, int height, Color color)
{
    auto *pixels = static_cast<uint32_t *>(std::malloc(size_t(width) * height * 4u));
    const uint32_t value = uint32_t(color.r) | (uint32_t(color.g) << 8) | (uint32_t(color.b) << 16) |
                           (uint32_t(color.a) << 24);
    std::fill(pixels, pixels + size_t(width) * height, value);
    return Image{pixels, width, height, 1, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8};
}

void UnloadImage(Image image)
{
    // A texture may still point at these pixels.
    for (auto &entry : g_textures)
        if (entry.second.pixels == image.data)
            entry.second.pixels = nullptr;
    std::free(image.data);
}
void ImageFormat(Image *, int) {}
void ImageCrop(Image *, Rectangle) {}
void ImageResize(Image *, int, int) {}
bool ExportImage(Image, const char *) { return false; }
Image LoadImage(const char *) { return Image{}; }
Image LoadImageFromScreen(void) { return Image{}; }
Image LoadImageFromTexture(Texture2D) { return Image{}; }

// ----------------------------------------------------------------- shaders
Shader LoadShaderFromMemory(const char *, const char *) { return Shader{0, nullptr}; }
int GetShaderLocation(Shader, const char *) { return -1; }
void SetShaderValue(Shader, int, const void *, int) {}
void BeginShaderMode(Shader) {}
void EndShaderMode(void) {}

// ------------------------------------------------------------------- input
bool IsKeyDown(int) { return false; }
bool IsKeyPressed(int) { return false; }

bool IsGamepadAvailable(int gamepad) { return gamepad >= 0 && gamepad < 4 && g_pads[gamepad]; }

bool IsGamepadButtonDown(int gamepad, int button)
{
    if (!IsGamepadAvailable(gamepad))
        return false;
    SDL_GameController *pad = g_pads[gamepad];
    auto down = [pad](SDL_GameControllerButton b) { return SDL_GameControllerGetButton(pad, b) != 0; };
    switch (button)
    {
    case GAMEPAD_BUTTON_LEFT_FACE_UP: return down(SDL_CONTROLLER_BUTTON_DPAD_UP);
    case GAMEPAD_BUTTON_LEFT_FACE_RIGHT: return down(SDL_CONTROLLER_BUTTON_DPAD_RIGHT);
    case GAMEPAD_BUTTON_LEFT_FACE_DOWN: return down(SDL_CONTROLLER_BUTTON_DPAD_DOWN);
    case GAMEPAD_BUTTON_LEFT_FACE_LEFT: return down(SDL_CONTROLLER_BUTTON_DPAD_LEFT);
    case GAMEPAD_BUTTON_RIGHT_FACE_UP: return down(SDL_CONTROLLER_BUTTON_Y);
    case GAMEPAD_BUTTON_RIGHT_FACE_RIGHT: return down(SDL_CONTROLLER_BUTTON_B);
    case GAMEPAD_BUTTON_RIGHT_FACE_DOWN: return down(SDL_CONTROLLER_BUTTON_A);
    case GAMEPAD_BUTTON_RIGHT_FACE_LEFT: return down(SDL_CONTROLLER_BUTTON_X);
    case GAMEPAD_BUTTON_LEFT_TRIGGER_1: return down(SDL_CONTROLLER_BUTTON_LEFTSHOULDER);
    case GAMEPAD_BUTTON_RIGHT_TRIGGER_1: return down(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER);
    case GAMEPAD_BUTTON_LEFT_TRIGGER_2: return SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 8000;
    case GAMEPAD_BUTTON_RIGHT_TRIGGER_2: return SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) > 8000;
    case GAMEPAD_BUTTON_MIDDLE_LEFT: return down(SDL_CONTROLLER_BUTTON_BACK);
    case GAMEPAD_BUTTON_MIDDLE_RIGHT: return down(SDL_CONTROLLER_BUTTON_START);
    case GAMEPAD_BUTTON_LEFT_THUMB: return down(SDL_CONTROLLER_BUTTON_LEFTSTICK);
    case GAMEPAD_BUTTON_RIGHT_THUMB: return down(SDL_CONTROLLER_BUTTON_RIGHTSTICK);
    default: return false;
    }
}

float GetGamepadAxisMovement(int gamepad, int axis)
{
    if (!IsGamepadAvailable(gamepad))
        return 0.0f;
    static const SDL_GameControllerAxis kAxes[] = {SDL_CONTROLLER_AXIS_LEFTX, SDL_CONTROLLER_AXIS_LEFTY,
                                                   SDL_CONTROLLER_AXIS_RIGHTX, SDL_CONTROLLER_AXIS_RIGHTY,
                                                   SDL_CONTROLLER_AXIS_TRIGGERLEFT, SDL_CONTROLLER_AXIS_TRIGGERRIGHT};
    if (axis < 0 || axis > 5)
        return 0.0f;
    const float value = SDL_GameControllerGetAxis(g_pads[gamepad], kAxes[axis]) / 32767.0f;
    // raylib reports triggers as -1 (released) .. 1 (pressed).
    return axis >= 4 ? value * 2.0f - 1.0f : std::clamp(value, -1.0f, 1.0f);
}

// ------------------------------------------------------------------- audio
void InitAudioDevice(void) { SDL_InitSubSystem(SDL_INIT_AUDIO); }
void CloseAudioDevice(void) { SDL_QuitSubSystem(SDL_INIT_AUDIO); }
bool IsAudioDeviceReady(void) { return SDL_WasInit(SDL_INIT_AUDIO) != 0; }
void SetAudioStreamBufferSizeDefault(int size) { g_streamBufferFrames = size; }

AudioStream LoadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels)
{
    AudioStream stream{};
    stream.sampleRate = sampleRate;
    stream.sampleSize = sampleSize;
    stream.channels = channels;
    // The buffer pointer is only a key for this stream's state.
    stream.buffer = reinterpret_cast<rAudioBuffer *>(new char);
    StreamState &state = g_streams[stream.buffer];
    state.channels = channels;
    SDL_AudioSpec want{}, have{};
    want.freq = int(sampleRate);
    want.format = AUDIO_S16LSB; // the runtime asks for 16-bit
    want.channels = Uint8(channels);
    want.samples = Uint16(g_streamBufferFrames);
    want.callback = sdlAudioCallback;
    want.userdata = &state;
    state.device = SDL_OpenAudioDevice(nullptr, 0, &want, &have, 0);
    if (!state.device)
        xboxLogWrite("[TS:audio] SDL_OpenAudioDevice failed\n", 38);
    return stream;
}

void SetAudioStreamCallback(AudioStream stream, AudioCallback callback)
{
    const auto it = g_streams.find(stream.buffer);
    if (it == g_streams.end())
        return;
    SDL_LockAudioDevice(it->second.device);
    it->second.callback = callback;
    SDL_UnlockAudioDevice(it->second.device);
}

void PlayAudioStream(AudioStream stream)
{
    const auto it = g_streams.find(stream.buffer);
    if (it != g_streams.end() && it->second.device)
        SDL_PauseAudioDevice(it->second.device, 0);
}

void StopAudioStream(AudioStream stream)
{
    const auto it = g_streams.find(stream.buffer);
    if (it != g_streams.end() && it->second.device)
        SDL_PauseAudioDevice(it->second.device, 1);
}

void UnloadAudioStream(AudioStream stream)
{
    const auto it = g_streams.find(stream.buffer);
    if (it == g_streams.end())
        return;
    if (it->second.device)
        SDL_CloseAudioDevice(it->second.device);
    delete reinterpret_cast<char *>(stream.buffer);
    g_streams.erase(it);
}

// One-shot sounds (a legacy VAG preview path): not played on the Xbox.
Wave LoadWaveFromMemory(const char *, const unsigned char *, int) { return Wave{}; }
void UnloadWave(Wave) {}
Sound LoadSoundFromWave(Wave) { return Sound{}; }
void UnloadSound(Sound) {}
void PlaySound(Sound) {}
void StopSound(Sound) {}
bool IsSoundPlaying(Sound) { return false; }
void SetSoundVolume(Sound, float) {}
void SetSoundPitch(Sound, float) {}

void xboxLastBlit(int &width, int &height, int &litPercent)
{
    width = g_lastBlit.width;
    height = g_lastBlit.height;
    litPercent = g_lastBlit.litPercent;
}
