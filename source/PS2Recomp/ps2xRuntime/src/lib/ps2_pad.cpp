#include "runtime/ps2_pad.h"
#include "ps2x/exceptions.h"
#if defined(_WIN32)
using XInputWord = uint16_t;
using XInputByte = uint8_t;
using XInputShort = int16_t;
using XInputDword = uint32_t;

struct XINPUT_GAMEPAD
{
    XInputWord wButtons;
    XInputByte bLeftTrigger;
    XInputByte bRightTrigger;
    XInputShort sThumbLX;
    XInputShort sThumbLY;
    XInputShort sThumbRX;
    XInputShort sThumbRY;
};

struct XINPUT_STATE
{
    XInputDword dwPacketNumber;
    XINPUT_GAMEPAD Gamepad;
};

extern "C" __declspec(dllimport) XInputDword __stdcall XInputGetState(XInputDword dwUserIndex, XINPUT_STATE *pState);

constexpr XInputDword kXInputErrorSuccess = 0u;
constexpr XInputWord XINPUT_GAMEPAD_DPAD_UP = 0x0001u;
constexpr XInputWord XINPUT_GAMEPAD_DPAD_DOWN = 0x0002u;
constexpr XInputWord XINPUT_GAMEPAD_DPAD_LEFT = 0x0004u;
constexpr XInputWord XINPUT_GAMEPAD_DPAD_RIGHT = 0x0008u;
constexpr XInputWord XINPUT_GAMEPAD_START = 0x0010u;
constexpr XInputWord XINPUT_GAMEPAD_BACK = 0x0020u;
constexpr XInputWord XINPUT_GAMEPAD_LEFT_THUMB = 0x0040u;
constexpr XInputWord XINPUT_GAMEPAD_RIGHT_THUMB = 0x0080u;
constexpr XInputWord XINPUT_GAMEPAD_LEFT_SHOULDER = 0x0100u;
constexpr XInputWord XINPUT_GAMEPAD_RIGHT_SHOULDER = 0x0200u;
constexpr XInputWord XINPUT_GAMEPAD_A = 0x1000u;
constexpr XInputWord XINPUT_GAMEPAD_B = 0x2000u;
constexpr XInputWord XINPUT_GAMEPAD_X = 0x4000u;
constexpr XInputWord XINPUT_GAMEPAD_Y = 0x8000u;
constexpr int16_t XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE = 7849;
constexpr int16_t XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE = 8689;
#endif
#include "ps2_host_backend.h"
#include "runtime/ps2_host_settings.h"
#include "runtime/ps2_pad_host.h"
#include <algorithm>
#include <atomic>
#include <cctype>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <mutex>
#include <sstream>
#include <stdexcept>
#include <unordered_map>

namespace
{
    constexpr uint8_t kPadAnalogMarker = 0x73;
    constexpr uint8_t kPadStickCenter = 0x80;

    constexpr uint16_t PAD_LEFT = 0x0080u;
    constexpr uint16_t PAD_DOWN = 0x0040u;
    constexpr uint16_t PAD_RIGHT = 0x0020u;
    constexpr uint16_t PAD_UP = 0x0010u;
    constexpr uint16_t PAD_START = 0x0008u;
    constexpr uint16_t PAD_R3 = 0x0004u;
    constexpr uint16_t PAD_L3 = 0x0002u;
    constexpr uint16_t PAD_SELECT = 0x0001u;
    constexpr uint16_t PAD_SQUARE = 0x8000u;
    constexpr uint16_t PAD_CROSS = 0x4000u;
    constexpr uint16_t PAD_CIRCLE = 0x2000u;
    constexpr uint16_t PAD_TRIANGLE = 0x1000u;
    constexpr uint16_t PAD_R1 = 0x0800u;
    constexpr uint16_t PAD_L1 = 0x0400u;
    constexpr uint16_t PAD_R2 = 0x0200u;
    constexpr uint16_t PAD_L2 = 0x0100u;

    uint8_t parseByteValue(const std::string &text, size_t lineNumber)
    {
        size_t consumed = 0;
        const unsigned long value = std::stoul(text, &consumed, 0);
        if (consumed != text.size() || value > 255ul)
        {
            PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": expected byte value 0..255"));
        }
        return static_cast<uint8_t>(value);
    }

    uint32_t parseReadCount(const std::string &text, size_t lineNumber)
    {
        size_t consumed = 0;
        const unsigned long value = std::stoul(text, &consumed, 0);
        if (consumed != text.size() || value == 0ul || value > 1000000ul)
        {
            PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": expected read count 1..1000000"));
        }
        return static_cast<uint32_t>(value);
    }

    double parseSecondsValue(const std::string &text, size_t lineNumber)
    {
        size_t consumed = 0;
        const double value = std::stod(text, &consumed);
        if (consumed != text.size() || !std::isfinite(value) || value < 0.0 || value > 3600.0)
        {
            PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": expected seconds value 0..3600"));
        }
        return value;
    }

    uint32_t parseU32Value(const std::string &text, size_t lineNumber, const char *label)
    {
        size_t consumed = 0;
        const unsigned long value = std::stoul(text, &consumed, 0);
        if (consumed != text.size() || value > 0xFFFFFFFFul)
        {
            PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": expected " + label + " u32 value"));
        }
        return static_cast<uint32_t>(value);
    }

    PSPadBackend::ScriptCompare parseCompare(std::string text, size_t lineNumber)
    {
        std::transform(text.begin(), text.end(), text.begin(), [](unsigned char c)
                       { return static_cast<char>(std::tolower(c)); });
        if (text == "==" || text == "=" || text == "eq")
            return PSPadBackend::ScriptCompare::Equal;
        if (text == "!=" || text == "<>" || text == "ne")
            return PSPadBackend::ScriptCompare::NotEqual;
        if (text == "<" || text == "lt")
            return PSPadBackend::ScriptCompare::Less;
        if (text == "<=" || text == "le")
            return PSPadBackend::ScriptCompare::LessOrEqual;
        if (text == ">" || text == "gt")
            return PSPadBackend::ScriptCompare::Greater;
        if (text == ">=" || text == "ge")
            return PSPadBackend::ScriptCompare::GreaterOrEqual;
        PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": unknown wait_u32 comparison '" + text + "'"));
    }

    bool compareU32(uint32_t left, PSPadBackend::ScriptCompare compare, uint32_t right)
    {
        switch (compare)
        {
        case PSPadBackend::ScriptCompare::Equal:
            return left == right;
        case PSPadBackend::ScriptCompare::NotEqual:
            return left != right;
        case PSPadBackend::ScriptCompare::Less:
            return left < right;
        case PSPadBackend::ScriptCompare::LessOrEqual:
            return left <= right;
        case PSPadBackend::ScriptCompare::Greater:
            return left > right;
        case PSPadBackend::ScriptCompare::GreaterOrEqual:
            return left >= right;
        }
        return false;
    }

    void clearButton(uint16_t &buttons, uint16_t mask)
    {
        buttons = static_cast<uint16_t>(buttons & ~mask);
    }

    uint16_t parseButtonList(std::string text, size_t lineNumber)
    {
        static const std::unordered_map<std::string, uint16_t> kButtons = {
            {"select", PAD_SELECT},
            {"l3", PAD_L3},
            {"r3", PAD_R3},
            {"start", PAD_START},
            {"up", PAD_UP},
            {"right", PAD_RIGHT},
            {"down", PAD_DOWN},
            {"left", PAD_LEFT},
            {"l2", PAD_L2},
            {"r2", PAD_R2},
            {"l1", PAD_L1},
            {"r1", PAD_R1},
            {"triangle", PAD_TRIANGLE},
            {"circle", PAD_CIRCLE},
            {"cross", PAD_CROSS},
            {"x", PAD_CROSS},
            {"square", PAD_SQUARE},
        };

        std::transform(text.begin(), text.end(), text.begin(), [](unsigned char c)
                       { return static_cast<char>(std::tolower(c)); });
        std::replace(text.begin(), text.end(), '+', ',');

        uint16_t buttons = 0xFFFFu;
        std::istringstream parts(text);
        std::string name;
        while (std::getline(parts, name, ','))
        {
            name.erase(std::remove_if(name.begin(), name.end(), [](unsigned char c)
                                      { return std::isspace(c) != 0; }),
                       name.end());
            if (name.empty() || name == "none" || name == "-")
            {
                continue;
            }
            const auto it = kButtons.find(name);
            if (it == kButtons.end())
            {
                PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": unknown pad button '" + name + "'"));
            }
            clearButton(buttons, it->second);
        }
        return buttons;
    }

#if !defined(PLATFORM_XBOX)
    // Mouse movement the window thread saw since player 1's last pad read.
    std::mutex g_mouseMutex;
    float g_mouseDx = 0.0f, g_mouseDy = 0.0f;

    // Typing: the characters typed while the game's text entry runs, and
    // until when it counts as running (a tick of it renews it).
    std::mutex g_typedMutex;
    std::deque<int> g_typed;
    std::atomic<int64_t> g_textEntryUntil{0};

    int64_t steadyMs()
    {
        return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch())
            .count();
    }

    bool textEntryActive()
    {
        return steadyMs() < g_textEntryUntil.load(std::memory_order_relaxed);
    }

    // The mouse on its player's pad: its buttons as R1 (left: fire), L1
    // (right), R2 (middle). Its movement turns the view directly (the
    // playerTick hook in project/game/ts_overrides.cpp takes it with
    // ps2PadTakeMouseLook), not through the stick: a stick turns at a rate,
    // which made the mouse step.
    std::atomic<int64_t> g_menuUntil{0};
    std::atomic<bool> g_testClick{false}; // a TS_TEST_MENU_MOUSE click, as a mouse button press
    // The menu presses the mouse made (ps2PadQueueMenuPress), in turn: each
    // one's pad buttons held down for two reads of the keyboard and mouse
    // device, then one read up, so two clicks are two presses however soon
    // the second comes.
    std::mutex g_menuPressMutex;
    std::deque<uint16_t> g_menuPresses;
    uint16_t g_menuPressNow = 0;
    int g_menuPressReads = 0; // > 0: reads it stays down; < 0: the read up after

    uint16_t menuPressThisRead()
    {
        std::lock_guard<std::mutex> lock(g_menuPressMutex);
        if (g_menuPressReads > 0)
        {
            if (--g_menuPressReads == 0)
                g_menuPressReads = -1;
            return g_menuPressNow;
        }
        if (g_menuPressReads < 0)
        {
            g_menuPressReads = 0;
            return 0;
        }
        if (g_menuPresses.empty())
            return 0;
        g_menuPressNow = g_menuPresses.front();
        g_menuPresses.pop_front();
        g_menuPressReads = 1;
        return g_menuPressNow;
    }
    std::atomic<uint32_t> g_clicks{0}; // mouse button presses so far (ps2PadClickCount)
    std::atomic<int (*)(float, float)> g_promptLookup{nullptr};

    // A left click at (x, y), in 640 x 448 game pixels, on a button prompt:
    // its button is pressed and true returned.
    bool clickedPrompt(float x, float y)
    {
        const auto lookup = g_promptLookup.load(std::memory_order_relaxed);
        const int press = lookup ? lookup(x / 640.0f, y / 448.0f) : -1;
        if (press < 0)
            return false;
        ps2PadQueueMenuPress(static_cast<Ps2MenuPress>(press));
        if (std::getenv("TS_TRACE_MENUS"))
            std::fprintf(stderr, "[TS:menu-mouse] click at %.0f,%.0f on a prompt: press %d\n", x, y, press);
        return true;
    }
    // TS_PAD_SCRIPT_KEYBOARD: the script frame the keyboard device plays
    // (buttons low, high; sticks rx, ry, lx, ly).
    uint8_t g_keyboardScript[6] = {0xFF, 0xFF, kPadStickCenter, kPadStickCenter, kPadStickCenter, kPadStickCenter};
    std::atomic<bool> g_keyboardScriptSet{false};

    void applyMouse(uint8_t *data, uint16_t &buttons)
    {
        if (!hostSettings().mouse || !IsWindowReady())
            return;
        if (steadyMs() < g_menuUntil.load(std::memory_order_relaxed))
        {
            // In the menus the mouse points and clicks (ps2PadTakeMenuPointer).
            std::lock_guard<std::mutex> lock(g_mouseMutex);
            g_mouseDx = g_mouseDy = 0.0f;
            return;
        }
        (void)data;
        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
            clearButton(buttons, PAD_R1);
        if (IsMouseButtonDown(MOUSE_BUTTON_RIGHT))
            clearButton(buttons, PAD_L1);
        if (IsMouseButtonDown(MOUSE_BUTTON_MIDDLE))
            clearButton(buttons, PAD_R2);
    }
#endif

#if defined(_WIN32)
    bool readXInputState(XInputDword user, uint8_t *data, uint16_t &buttons)
    {
        XINPUT_STATE state{};
        if (XInputGetState(user, &state) != kXInputErrorSuccess)
        {
            return false;
        }

        const XInputWord xbuttons = state.Gamepad.wButtons;
        if (xbuttons & XINPUT_GAMEPAD_DPAD_UP)
            clearButton(buttons, PAD_UP);
        if (xbuttons & XINPUT_GAMEPAD_DPAD_DOWN)
            clearButton(buttons, PAD_DOWN);
        if (xbuttons & XINPUT_GAMEPAD_DPAD_LEFT)
            clearButton(buttons, PAD_LEFT);
        if (xbuttons & XINPUT_GAMEPAD_DPAD_RIGHT)
            clearButton(buttons, PAD_RIGHT);
        if (xbuttons & XINPUT_GAMEPAD_START)
            clearButton(buttons, PAD_START);
        if (xbuttons & XINPUT_GAMEPAD_BACK)
            clearButton(buttons, PAD_SELECT);
        if (xbuttons & XINPUT_GAMEPAD_LEFT_THUMB)
            clearButton(buttons, PAD_L3);
        if (xbuttons & XINPUT_GAMEPAD_RIGHT_THUMB)
            clearButton(buttons, PAD_R3);
        if (xbuttons & XINPUT_GAMEPAD_LEFT_SHOULDER)
            clearButton(buttons, PAD_L1);
        if (xbuttons & XINPUT_GAMEPAD_RIGHT_SHOULDER)
            clearButton(buttons, PAD_R1);
        if (xbuttons & XINPUT_GAMEPAD_A)
            clearButton(buttons, PAD_CROSS);
        if (xbuttons & XINPUT_GAMEPAD_B)
            clearButton(buttons, PAD_CIRCLE);
        if (xbuttons & XINPUT_GAMEPAD_X)
            clearButton(buttons, PAD_SQUARE);
        if (xbuttons & XINPUT_GAMEPAD_Y)
            clearButton(buttons, PAD_TRIANGLE);
        if (PSPadBackend::xinputTriggerPressed(state.Gamepad.bLeftTrigger))
            clearButton(buttons, PAD_L2);
        if (PSPadBackend::xinputTriggerPressed(state.Gamepad.bRightTrigger))
            clearButton(buttons, PAD_R2);

        data[6] = PSPadBackend::xinputThumbAxis(state.Gamepad.sThumbLX, XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE, false);
        data[7] = PSPadBackend::xinputThumbAxis(state.Gamepad.sThumbLY, XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE, true);
        data[4] = PSPadBackend::xinputThumbAxis(state.Gamepad.sThumbRX, XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE, false);
        data[5] = PSPadBackend::xinputThumbAxis(state.Gamepad.sThumbRY, XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE, true);
        return true;
    }
#endif

#if !defined(PLATFORM_XBOX)
    // Players' devices (PC). Device 0 is the keyboard and mouse, devices 1-4
    // controllers 0-3 (an XInput controller, else raylib's gamepad of that
    // number). Player 1's lane locks to the first device used; every other
    // device used afterwards locks to the next free lane, which then reads as
    // connected (Pad.cpp sees a controller plugged in), so players 1-4 can be
    // any mix of the keyboard and controllers. A controller unplugged frees
    // its lane. Until a device locks to it, lane 0 reads as an idle pad.
    constexpr int kKeyboardDevice = 0, kDeviceCount = 5;
    constexpr int kStickActive = 48; // a stick this far from centre counts as used

    // One device's state this game frame: the pad's buttons (active low) and
    // sticks as data[4..7] (right x, y, left x, y).
    struct DeviceRead
    {
        bool present = false;
        uint16_t buttons = 0xFFFFu;
        uint8_t sticks[4] = {kPadStickCenter, kPadStickCenter, kPadStickCenter, kPadStickCenter};
        bool clicked = false; // a mouse button (the keyboard and mouse device): counts as using it
    };

    std::mutex g_laneMutex;
    int g_laneDevice[PSPadBackend::kMaxLanes];
    const bool g_laneDeviceCleared = [] {
        for (int &device : g_laneDevice)
            device = -1;
        return true;
    }();
    DeviceRead g_deviceRead[kDeviceCount];
    std::atomic<int> g_lastActiveDevice{-1};

    // Where each device's sticks rest (their first reading while present):
    // a device counts as used by a button, or by a stick moved from there,
    // so one whose axis rests away from the centre (a throttle, a trigger
    // read as a stick, a drifting stick) does not take a player's place.
    struct StickRest
    {
        bool known = false;
        uint8_t sticks[4] = {};
    };
    StickRest g_stickRest[kDeviceCount];

    bool deviceActive(int device, const DeviceRead &read)
    {
        StickRest &rest = g_stickRest[device];
        if (!read.present)
        {
            rest.known = false;
            return false;
        }
        if (!rest.known)
        {
            rest.known = true;
            std::memcpy(rest.sticks, read.sticks, 4);
        }
        if (read.buttons != 0xFFFFu || read.clicked)
            return true;
        for (int i = 0; i < 4; ++i)
            if (std::abs(static_cast<int>(read.sticks[i]) - rest.sticks[i]) > kStickActive)
                return true;
        return false;
    }

    void readControllerDevice(int index, DeviceRead &read)
    {
        // TS_TEST_NO_CONTROLLERS=1 (tests): the PC's real controllers are not read.
        static const bool ignored = [] { const char *v = std::getenv("TS_TEST_NO_CONTROLLERS"); return v && *v == '1'; }();
        if (ignored)
            return;
        uint8_t data[8];
        data[4] = data[5] = data[6] = data[7] = kPadStickCenter;
        uint16_t buttons = 0xFFFFu;
#if defined(_WIN32)
        if (readXInputState(static_cast<XInputDword>(index), data, buttons))
        {
            read.present = true;
            read.buttons = buttons;
            std::memcpy(read.sticks, data + 4, 4);
            return;
        }
#endif
        if (!IsWindowReady() || !IsGamepadAvailable(index))
            return;
        read.present = true;
        static const struct
        {
            int button;
            uint16_t pad;
        } kButtons[] = {
            {GAMEPAD_BUTTON_LEFT_FACE_UP, PAD_UP},          {GAMEPAD_BUTTON_LEFT_FACE_DOWN, PAD_DOWN},
            {GAMEPAD_BUTTON_LEFT_FACE_LEFT, PAD_LEFT},      {GAMEPAD_BUTTON_LEFT_FACE_RIGHT, PAD_RIGHT},
            {GAMEPAD_BUTTON_RIGHT_FACE_DOWN, PAD_CROSS},    {GAMEPAD_BUTTON_RIGHT_FACE_RIGHT, PAD_CIRCLE},
            {GAMEPAD_BUTTON_RIGHT_FACE_LEFT, PAD_SQUARE},   {GAMEPAD_BUTTON_RIGHT_FACE_UP, PAD_TRIANGLE},
            {GAMEPAD_BUTTON_LEFT_TRIGGER_1, PAD_L1},        {GAMEPAD_BUTTON_RIGHT_TRIGGER_1, PAD_R1},
            {GAMEPAD_BUTTON_LEFT_TRIGGER_2, PAD_L2},        {GAMEPAD_BUTTON_RIGHT_TRIGGER_2, PAD_R2},
            {GAMEPAD_BUTTON_MIDDLE_RIGHT, PAD_START},       {GAMEPAD_BUTTON_MIDDLE_LEFT, PAD_SELECT},
            {GAMEPAD_BUTTON_LEFT_THUMB, PAD_L3},            {GAMEPAD_BUTTON_RIGHT_THUMB, PAD_R3},
        };
        for (const auto &b : kButtons)
            if (IsGamepadButtonDown(index, b.button))
                clearButton(read.buttons, b.pad);
        read.sticks[0] = PSPadBackend::analogAxisFromUnit(GetGamepadAxisMovement(index, GAMEPAD_AXIS_RIGHT_X));
        read.sticks[1] = PSPadBackend::analogAxisFromUnit(GetGamepadAxisMovement(index, GAMEPAD_AXIS_RIGHT_Y));
        read.sticks[2] = PSPadBackend::analogAxisFromUnit(GetGamepadAxisMovement(index, GAMEPAD_AXIS_LEFT_X));
        read.sticks[3] = PSPadBackend::analogAxisFromUnit(GetGamepadAxisMovement(index, GAMEPAD_AXIS_LEFT_Y));
    }

    // The keyboard and mouse as a pad. analogSticks: WASD and IJKL are the
    // sticks (the PC game sets it), else WASD is the D-pad too.
    void readKeyboardDevice(DeviceRead &read, bool analogSticks)
    {
        read.present = true;
        if (!IsWindowReady())
            return;
        uint16_t &buttons = read.buttons;
        // A click in the menus presses no pad button (the menu tick hook
        // reads the pointer) but still signs the keyboard and mouse in as a
        // player, so a mouse alone can start the game.
        read.clicked = g_testClick.exchange(false, std::memory_order_relaxed) ||
                       (hostSettings().mouse && (IsMouseButtonDown(MOUSE_BUTTON_LEFT) ||
                                                 IsMouseButtonDown(MOUSE_BUTTON_RIGHT)));
        static bool wasClicked = false;
        if (read.clicked && !wasClicked)
            g_clicks.fetch_add(1u, std::memory_order_relaxed);
        wasClicked = read.clicked;
        buttons &= static_cast<uint16_t>(~menuPressThisRead());
        if (g_keyboardScriptSet.load(std::memory_order_relaxed))
        {
            buttons &= static_cast<uint16_t>(g_keyboardScript[0] | (g_keyboardScript[1] << 8));
            for (int i = 0; i < 4; ++i)
                if (g_keyboardScript[2 + i] != kPadStickCenter)
                    read.sticks[i] = g_keyboardScript[2 + i];
            read.clicked = read.clicked || buttons != 0xFFFFu;
        }
        if (IsKeyDown(KEY_UP) || (!analogSticks && IsKeyDown(KEY_W)))
            clearButton(buttons, PAD_UP);
        if (IsKeyDown(KEY_DOWN) || (!analogSticks && IsKeyDown(KEY_S)))
            clearButton(buttons, PAD_DOWN);
        if (IsKeyDown(KEY_LEFT) || (!analogSticks && IsKeyDown(KEY_A)))
            clearButton(buttons, PAD_LEFT);
        if (IsKeyDown(KEY_RIGHT) || (!analogSticks && IsKeyDown(KEY_D)))
            clearButton(buttons, PAD_RIGHT);
        // In the game's text entry the letter, number and space keys type
        // (the stringeditTick hook), and Enter ends the text: none of them
        // also press the pad button they map to. The arrows still move the
        // on-screen keyboard's cursor (WASD, the sticks, do not), and Esc
        // still cancels.
        if (textEntryActive())
        {
            if (IsKeyDown(KEY_ESCAPE))
                clearButton(buttons, PAD_TRIANGLE);
            // (and the mouse's movement meanwhile is not saved up)
            std::lock_guard<std::mutex> lock(g_mouseMutex);
            g_mouseDx = g_mouseDy = 0.0f;
            return;
        }
        uint8_t data[8];
        data[4] = data[5] = data[6] = data[7] = kPadStickCenter;
        if (analogSticks)
        {
            data[6] = PSPadBackend::keyboardAxis(IsKeyDown(KEY_A), IsKeyDown(KEY_D));
            data[7] = PSPadBackend::keyboardAxis(IsKeyDown(KEY_W), IsKeyDown(KEY_S));
            data[4] = PSPadBackend::keyboardAxis(IsKeyDown(KEY_J), IsKeyDown(KEY_L));
            data[5] = PSPadBackend::keyboardAxis(IsKeyDown(KEY_I), IsKeyDown(KEY_K));
        }
        applyMouse(data, buttons);
        for (int i = 0; i < 4; ++i)
            if (read.sticks[i] != kPadStickCenter && data[4 + i] == kPadStickCenter)
                data[4 + i] = read.sticks[i]; // (a scripted stick, above)
        std::memcpy(read.sticks, data + 4, 4);
        static const struct
        {
            KeyboardKey key, alternate;
            uint16_t pad;
        } kKeys[] = {
            // Enter accepts (the game's Cross in every menu); P pauses
            // (Start). Esc: below.
            {KEY_ENTER, KEY_KP_ENTER, PAD_CROSS}, {KEY_C, KEY_NULL, PAD_CIRCLE},
            {KEY_Z, KEY_NULL, PAD_SQUARE},        {KEY_Q, KEY_NULL, PAD_L1},             {KEY_E, KEY_NULL, PAD_R1},
            {KEY_LEFT_SHIFT, KEY_NULL, PAD_L2},   {KEY_RIGHT_SHIFT, KEY_NULL, PAD_R2},
            {KEY_P, KEY_NULL, PAD_START},         {KEY_TAB, KEY_NULL, PAD_SELECT},
        };
        for (const auto &k : kKeys)
            if (IsKeyDown(k.key) || (k.alternate != KEY_NULL && IsKeyDown(k.alternate)))
                clearButton(buttons, k.pad);
        // Esc goes back in a menu (Triangle) and pauses during play (Start),
        // decided when it goes down: held, it stays the button it began as
        // (so the pause menu it opens does not take it as back).
        static uint16_t escButton = 0;
        if (!IsKeyDown(KEY_ESCAPE))
            escButton = 0;
        else if (!escButton)
            escButton = steadyMs() < g_menuUntil.load(std::memory_order_relaxed) ? PAD_TRIANGLE : PAD_START;
        if (escButton)
            clearButton(buttons, escButton);
    }

    int laneOfDeviceLocked(int device)
    {
        for (int lane = 0; lane < PSPadBackend::kMaxLanes; ++lane)
            if (g_laneDevice[lane] == device)
                return lane;
        return -1;
    }

    // Once a game frame (lane 0's read): every device read once, unplugged
    // controllers' lanes freed, newly used devices locked to free lanes.
    void updateLaneDevices(bool analogSticks)
    {
        std::lock_guard<std::mutex> lock(g_laneMutex);
        for (int device = 0; device < kDeviceCount; ++device)
        {
            g_deviceRead[device] = DeviceRead{};
            if (device == kKeyboardDevice)
                readKeyboardDevice(g_deviceRead[device], analogSticks);
            else
                readControllerDevice(device - 1, g_deviceRead[device]);
        }
        for (int lane = 0; lane < PSPadBackend::kMaxLanes; ++lane)
        {
            const int device = g_laneDevice[lane];
            if (device >= 0 && !g_deviceRead[device].present)
            {
                g_laneDevice[lane] = -1;
                std::cout << "[pad:lanes] player " << lane + 1 << "'s controller is gone; the slot is free\n";
            }
        }
        for (int device = 0; device < kDeviceCount; ++device)
        {
            if (!deviceActive(device, g_deviceRead[device]))
                continue;
            g_lastActiveDevice.store(device, std::memory_order_relaxed);
            if (laneOfDeviceLocked(device) >= 0)
                continue;
            for (int lane = 0; lane < PSPadBackend::kMaxLanes; ++lane)
            {
                if (g_laneDevice[lane] < 0)
                {
                    g_laneDevice[lane] = device;
                    const char *name = device != kKeyboardDevice && IsWindowReady() ? GetGamepadName(device - 1) : nullptr;
                    std::cout << "[pad:lanes] player " << lane + 1 << " plays on "
                              << (device == kKeyboardDevice ? std::string("the keyboard and mouse")
                                                            : "controller " + std::to_string(device))
                              << (name && *name ? std::string(" (") + name + ")" : std::string()) << '\n';
                    if (device != kKeyboardDevice)
                    {
                        const DeviceRead &r = g_deviceRead[device];
                        const StickRest &rest = g_stickRest[device];
                        std::fprintf(stderr, "[pad:lanes] (buttons %04x, sticks %u %u %u %u resting at %u %u %u %u)\n",
                                     r.buttons, r.sticks[0], r.sticks[1], r.sticks[2], r.sticks[3], rest.sticks[0],
                                     rest.sticks[1], rest.sticks[2], rest.sticks[3]);
                    }
                    break;
                }
            }
        }
    }

    // The state of the device locked to a lane this frame, or false.
    bool laneDeviceRead(int lane, DeviceRead &out)
    {
        std::lock_guard<std::mutex> lock(g_laneMutex);
        const int device = lane >= 0 && lane < PSPadBackend::kMaxLanes ? g_laneDevice[lane] : -1;
        if (device < 0)
            return false;
        out = g_deviceRead[device];
        return true;
    }

    bool laneLocked(int lane)
    {
        std::lock_guard<std::mutex> lock(g_laneMutex);
        return lane >= 0 && lane < PSPadBackend::kMaxLanes && g_laneDevice[lane] >= 0;
    }

    int presentDeviceCount()
    {
        std::lock_guard<std::mutex> lock(g_laneMutex);
        int count = 0;
        for (const DeviceRead &read : g_deviceRead)
            count += read.present ? 1 : 0;
        return std::max(count, 1);
    }
#endif
}

bool PSPadBackend::loadScriptText(const std::string &text, std::string *error)
{
    std::vector<ScriptFrame> frames;
    std::istringstream input(text);
    std::string line;
    size_t lineNumber = 0;
    bool modeKnown = false;
    bool timed = false;
    int lanes = 1;
    constexpr size_t kNoRepeat = ~size_t(0);
    size_t repeatStart = kNoRepeat; // first frame of the open repeat block
    uint32_t repeatCount = 0;

    // One lane's "<buttons> [lx ly rx ry]".
    auto parseLane = [](std::istringstream &tokens, ScriptLane &lane, size_t lineNumber)
    {
        std::string buttonsText;
        if (!(tokens >> buttonsText))
        {
            PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": expected buttons token"));
        }
        lane.buttons = parseButtonList(buttonsText, lineNumber);
        std::string value;
        if (tokens >> value)
            lane.lx = parseByteValue(value, lineNumber);
        if (tokens >> value)
            lane.ly = parseByteValue(value, lineNumber);
        if (tokens >> value)
            lane.rx = parseByteValue(value, lineNumber);
        if (tokens >> value)
            lane.ry = parseByteValue(value, lineNumber);
        if (tokens >> value)
        {
            PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": too many fields"));
        }
    };

    PS2X_TRY
    {
        while (std::getline(input, line))
        {
            ++lineNumber;
            if (const size_t comment = line.find('#'); comment != std::string::npos)
            {
                line.resize(comment);
            }
            // More controllers: "<reads> <lane 0> | <lane 1> | ..." (lane 0
            // is the clock; a lane left out of a line is released).
            std::string laneText;
            const size_t firstBar = line.find('|');
            bool moreLanes = firstBar != std::string::npos;
            if (moreLanes)
            {
                laneText = line.substr(firstBar + 1);
                line.resize(firstBar);
            }
            std::istringstream tokens(line);
            std::string readsText;
            if (!(tokens >> readsText))
            {
                if (moreLanes)
                {
                    PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": expected read count before '|'"));
                }
                continue;
            }

            std::string marker = readsText;
            std::transform(marker.begin(), marker.end(), marker.begin(), [](unsigned char c)
                           { return static_cast<char>(std::tolower(c)); });
            // "lanes <n>": connect n controllers even before a frame plays them.
            if (marker == "lanes")
            {
                std::string countText;
                std::string extra;
                if (!(tokens >> countText) || (tokens >> extra) || moreLanes)
                {
                    PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": expected lanes <count>"));
                }
                const uint32_t count = parseU32Value(countText, lineNumber, "lane count");
                if (count < 1u || count > static_cast<uint32_t>(kMaxLanes))
                {
                    PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": lane count must be 1.." + std::to_string(kMaxLanes) + " (TS_PAD_LANES)"));
                }
                lanes = std::max(lanes, static_cast<int>(count));
                continue;
            }
            const bool lineTimed = marker == "at";
            const bool lineWaitU32 = marker == "wait_u32";
            // "repeat <n>" ... "end": the frames in between play n times
            // (blocks do not nest).
            const bool lineRepeat = marker == "repeat";
            const bool lineEnd = marker == "end";
            const bool lineControl = lineWaitU32 || lineRepeat || lineEnd;
            if (lineControl && moreLanes)
            {
                PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": '|' is only allowed on frame lines"));
            }
            if (!modeKnown)
            {
                modeKnown = true;
                timed = lineTimed;
            }
            else if (!lineControl && lineTimed != timed)
            {
                PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": cannot mix timed and read-count pad script frames"));
            }
            if (lineControl && timed)
            {
                PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": " + marker + " is only supported in read-count pad scripts"));
            }

            if (lineRepeat || lineEnd)
            {
                std::string countText;
                std::string extra;
                if ((lineRepeat && !(tokens >> countText)) || (tokens >> extra))
                {
                    PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": expected repeat <count> or end"));
                }
                if (lineRepeat)
                {
                    if (repeatStart != kNoRepeat)
                    {
                        PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": repeat blocks cannot nest"));
                    }
                    repeatCount = parseU32Value(countText, lineNumber, "repeat count");
                    if (repeatCount == 0u || repeatCount > 1000000u)
                    {
                        PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": expected repeat count 1..1000000"));
                    }
                    repeatStart = frames.size();
                    continue;
                }
                if (repeatStart == kNoRepeat)
                {
                    PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": end without repeat"));
                }
                // A block of waits alone would replay forever without a read.
                if (std::none_of(frames.begin() + static_cast<std::ptrdiff_t>(repeatStart), frames.end(), [](const ScriptFrame &f)
                                 { return f.kind == ScriptFrame::Kind::Frame; }))
                {
                    PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": a repeat block needs a frame line"));
                }
                ScriptFrame frame{};
                frame.kind = ScriptFrame::Kind::Repeat;
                frame.waitAddress = static_cast<uint32_t>(repeatStart);
                frame.waitValue = repeatCount - 1u;
                frame.reads = frame.waitValue;
                frames.push_back(frame);
                repeatStart = kNoRepeat;
                continue;
            }

            if (lineWaitU32)
            {
                std::string addressText;
                std::string compareText;
                std::string valueText;
                if (!(tokens >> addressText >> compareText >> valueText))
                {
                    PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": expected wait_u32 address comparison value"));
                }
                std::string extra;
                if (tokens >> extra)
                {
                    PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": too many fields"));
                }
                ScriptFrame frame{};
                frame.kind = ScriptFrame::Kind::WaitU32;
                frame.waitAddress = parseU32Value(addressText, lineNumber, "address");
                frame.waitCompare = parseCompare(compareText, lineNumber);
                frame.waitValue = parseU32Value(valueText, lineNumber, "comparison");
                frames.push_back(frame);
                continue;
            }

            std::string secondsText;
            if (timed)
            {
                if (!(tokens >> secondsText))
                {
                    PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": expected seconds token"));
                }
            }

            ScriptFrame frame{};
            if (timed)
            {
                frame.atSeconds = parseSecondsValue(secondsText, lineNumber);
                if (!frames.empty() && frame.atSeconds <= frames.back().atSeconds)
                {
                    PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": timed frames must be strictly increasing"));
                }
            }
            else
            {
                frame.reads = parseReadCount(readsText, lineNumber);
            }
            parseLane(tokens, frame.lanes[0], lineNumber);
            for (int lane = 1; moreLanes; ++lane)
            {
                if (lane >= kMaxLanes)
                {
                    PS2X_THROW(std::runtime_error("line " + std::to_string(lineNumber) + ": more than " + std::to_string(kMaxLanes) + " lanes (TS_PAD_LANES)"));
                }
                const size_t bar = laneText.find('|');
                moreLanes = bar != std::string::npos;
                std::istringstream groupTokens(laneText.substr(0, bar));
                if (moreLanes)
                    laneText.erase(0, bar + 1);
                parseLane(groupTokens, frame.lanes[lane], lineNumber);
                lanes = std::max(lanes, lane + 1);
            }
            frames.push_back(frame);
        }
        if (repeatStart != kNoRepeat)
        {
            PS2X_THROW(std::runtime_error("repeat without end"));
        }
    }
    PS2X_CATCH(const std::exception &, e)
    {
        clearScript();
        if (error)
        {
            *error = e.what();
        }
        return false;
    }

    if (frames.empty())
    {
        clearScript();
        if (error)
        {
            *error = "pad script contains no frames";
        }
        return false;
    }

    // Kept for the whole run: no spare capacity.
    frames.shrink_to_fit();
    m_script = std::move(frames);
    m_scriptIndex = 0;
    m_scriptFrameRead = 0;
    m_scriptReadCount = 0;
    m_scriptExhausted = false;
    m_scriptTimed = timed;
    m_scriptStartTime = std::chrono::steady_clock::now();
    m_scriptLanes = static_cast<uint8_t>(lanes);
    m_scriptLaneFrame = 0;
    if (error)
    {
        error->clear();
    }
    return true;
}

bool PSPadBackend::loadScriptFile(const std::string &path, std::string *error)
{
    std::ifstream file(path);
    if (!file)
    {
        if (error)
        {
            *error = "failed to open pad script: " + path;
        }
        return false;
    }
    std::ostringstream text;
    text << file.rdbuf();
    return loadScriptText(text.str(), error);
}

void PSPadBackend::setScriptTimeScale(double scale)
{
    if (!std::isfinite(scale) || scale <= 0.0 || scale > 1000.0)
    {
        PS2X_THROW(std::runtime_error("pad script time scale must be > 0 and <= 1000"));
    }
    m_scriptTimeScale = scale;
}

void PSPadBackend::setScriptU32Reader(std::function<uint32_t(uint32_t)> reader)
{
    m_scriptU32Reader = std::move(reader);
}

void PSPadBackend::clearScript()
{
    m_script.clear();
    m_scriptIndex = 0;
    m_scriptFrameRead = 0;
    m_scriptReadCount = 0;
    m_scriptExhausted = false;
    m_scriptTimed = false;
    m_scriptTimeScale = 1.0;
    m_scriptStartTime = {};
    m_scriptU32Reader = {};
    m_scriptLanes = 1;
    m_scriptLaneFrame = 0;
}

int PSPadBackend::laneForPort(int port, int slot)
{
    // Lane 0: port 0. Lanes 1-3: port 1, directly or on its multitap.
    int lane = -1;
    if (port == 0 && slot == 0)
        lane = 0;
    else if (port == 1 && slot >= 0 && slot <= 2)
        lane = 1 + slot;
    return lane < kMaxLanes ? lane : -1;
}

int PSPadBackend::liveLaneCount() const
{
#if !defined(PLATFORM_XBOX)
    // Devices present (the keyboard counts): the lanes they could fill.
    return std::min(presentDeviceCount(), int(kMaxLanes));
#endif
    int lanes = 1;
    for (int lane = 1; lane < kMaxLanes; ++lane)
    {
        if (IsGamepadAvailable(lane))
            lanes = lane + 1;
    }
    return lanes;
}

bool PSPadBackend::laneConnected(int lane) const
{
    if (lane == 0)
        return true;
    if (lane < 0 || lane >= kMaxLanes)
        return false;
    if (!m_script.empty())
        return lane < m_scriptLanes;
#if !defined(PLATFORM_XBOX)
    return laneLocked(lane); // a device locked to it (players' devices)
#else
    return IsGamepadAvailable(lane);
#endif
}

bool PSPadBackend::multitapOnPort(int port) const
{
    if (port != 1 || kMaxLanes <= 2)
        return false;
    return (m_script.empty() ? liveLaneCount() : int(m_scriptLanes)) > 2;
}

uint8_t PSPadBackend::analogAxisFromUnit(float value)
{
    value = std::clamp(value, -1.0f, 1.0f);
#if defined(PLATFORM_XBOX)
    // Round half up by hand: on the Xbox the lround path returned 0 for a
    // centred stick (every live analog byte read 0x00: stick held up-left).
    // The operand is never negative here, so this matches lround.
    return static_cast<uint8_t>(static_cast<int>((value + 1.0f) * 127.5f + 0.5f));
#else
    return static_cast<uint8_t>(std::lround((value + 1.0f) * 127.5f));
#endif
}

uint8_t PSPadBackend::xinputThumbAxis(int16_t value, int16_t deadzone, bool invert)
{
    int32_t axis = value;
    if (std::abs(axis) <= static_cast<int32_t>(deadzone))
    {
        return kPadStickCenter;
    }

    if (invert)
    {
        axis = -axis;
    }

    const float normalized = axis < 0
                                 ? static_cast<float>(axis) / 32768.0f
                                 : static_cast<float>(axis) / 32767.0f;
    return analogAxisFromUnit(normalized);
}

bool PSPadBackend::xinputTriggerPressed(uint8_t value, uint8_t threshold)
{
    return value > threshold;
}

void ps2PadNoteTextEntry()
{
#if !defined(PLATFORM_XBOX)
    g_textEntryUntil.store(steadyMs() + 250, std::memory_order_relaxed);
#endif
}

void ps2PadNoteTypedKeys()
{
#if !defined(PLATFORM_XBOX)
    const bool active = textEntryActive();
    std::lock_guard<std::mutex> lock(g_typedMutex);
    // What was typed and not yet taken goes only once the text entry has
    // been gone a while: a slow frame (a hitch longer than the moment
    // textEntryActive lasts) must not lose the letters typed meanwhile.
    static int64_t activeAt = 0;
    if (active)
        activeAt = steadyMs();
    else if (steadyMs() - activeAt > 1500)
        g_typed.clear();
    const bool entering = steadyMs() - activeAt <= 1500;
    // TS_TEST_TYPED=<text> (tests): typed into the first text entry, '|'
    // as Enter.
    static const char *testTyped = std::getenv("TS_TEST_TYPED");
    if (active && testTyped && *testTyped)
    {
        for (const char *t = testTyped; *t; ++t)
            g_typed.push_back(*t == '|' ? '\n' : *t);
        testTyped = nullptr;
    }
    // raylib's typed characters (layout and Shift applied); outside text
    // entry they are read and dropped, so none wait for the next name.
    for (int c = GetCharPressed(); c != 0; c = GetCharPressed())
    {
        if (entering && c >= 32 && c < 127)
            g_typed.push_back(c);
    }
    if (entering)
    {
        if (IsKeyPressed(KEY_BACKSPACE) || IsKeyPressedRepeat(KEY_BACKSPACE))
            g_typed.push_back('\b');
        if (IsKeyPressed(KEY_ENTER) || IsKeyPressed(KEY_KP_ENTER))
            g_typed.push_back('\n');
    }
#endif
}

namespace
{
#if !defined(PLATFORM_XBOX)
    std::mutex g_menuPointerMutex;
    Ps2MenuPointer g_menuPointer;
    int64_t g_menuPointerPressedAt = 0; // when its last click, right click or wheel notch came
#endif
}

void ps2PadNoteMenu()
{
#if !defined(PLATFORM_XBOX)
    g_menuUntil.store(steadyMs() + 500, std::memory_order_relaxed);
#endif
}

bool ps2PadTakeMouseLook(float &dx, float &dy)
{
#if !defined(PLATFORM_XBOX)
    dx = dy = 0.0f;
    if (!hostSettings().mouse || steadyMs() < g_menuUntil.load(std::memory_order_relaxed))
        return false;
    {
        std::lock_guard<std::mutex> lock(g_mouseMutex);
        dx = g_mouseDx;
        dy = g_mouseDy;
        g_mouseDx = g_mouseDy = 0.0f;
    }
    // TS_TEST_MOUSE_LOOK="dx dy" (tests): that movement every take.
    static const std::pair<float, float> test = [] {
        std::pair<float, float> v{0.0f, 0.0f};
        if (const char *e = std::getenv("TS_TEST_MOUSE_LOOK"))
            std::sscanf(e, "%f %f", &v.first, &v.second);
        return v;
    }();
    dx = (dx + test.first) * hostSettings().mouseSensitivity;
    dy = (dy + test.second) * hostSettings().mouseSensitivity;
    return true;
#else
    dx = dy = 0.0f;
    return false;
#endif
}

uint32_t ps2PadClickCount()
{
#if !defined(PLATFORM_XBOX)
    return g_clicks.load(std::memory_order_relaxed);
#else
    return 0u;
#endif
}

int ps2PadPromptAt(float x, float y)
{
#if !defined(PLATFORM_XBOX)
    const auto lookup = g_promptLookup.load(std::memory_order_relaxed);
    return lookup ? lookup(x / 640.0f, y / 448.0f) : -1;
#else
    (void)x, (void)y;
    return -1;
#endif
}

void ps2PadSetPromptLookup(int (*lookup)(float x, float y))
{
#if !defined(PLATFORM_XBOX)
    g_promptLookup.store(lookup, std::memory_order_relaxed);
#else
    (void)lookup;
#endif
}

void ps2PadQueueMenuPress(Ps2MenuPress press)
{
#if !defined(PLATFORM_XBOX)
    uint16_t buttons = PAD_CROSS;
    switch (press)
    {
    case Ps2MenuPress::Accept: buttons = PAD_CROSS; break;
    case Ps2MenuPress::Back: buttons = PAD_TRIANGLE; break;
    case Ps2MenuPress::Next: buttons = PAD_RIGHT; break;
    case Ps2MenuPress::Previous: buttons = PAD_LEFT; break;
    case Ps2MenuPress::Circle: buttons = PAD_CIRCLE; break;
    case Ps2MenuPress::Square: buttons = PAD_SQUARE; break;
    case Ps2MenuPress::Select: buttons = PAD_SELECT; break;
    case Ps2MenuPress::L1: buttons = PAD_L1; break;
    case Ps2MenuPress::L2: buttons = PAD_L2; break;
    case Ps2MenuPress::Start: buttons = PAD_START; break;
    }
    std::lock_guard<std::mutex> lock(g_menuPressMutex);
    if (g_menuPresses.size() < 8u)
        g_menuPresses.push_back(buttons);
#else
    (void)press;
#endif
}

bool ps2PadMenuActive()
{
#if !defined(PLATFORM_XBOX)
    return steadyMs() < g_menuUntil.load(std::memory_order_relaxed);
#else
    return false;
#endif
}

void ps2PadNoteMenuPointer(bool inside, float x, float y, bool click, bool rightClick, float wheel)
{
#if !defined(PLATFORM_XBOX)
    std::lock_guard<std::mutex> lock(g_menuPointerMutex);
    Ps2MenuPointer &p = g_menuPointer;
    if (inside != p.inside || x != p.x || y != p.y)
        p.moved = true;
    p.inside = inside;
    p.x = x;
    p.y = y;
    p.clicks += click && !clickedPrompt(x, y) ? 1 : 0;
    if (click)
        g_testClick.store(true, std::memory_order_relaxed); // (a click signs the keyboard and mouse in)
    p.rightClicks += rightClick ? 1 : 0;
    p.wheel += wheel > 0.0f ? 1 : wheel < 0.0f ? -1 : 0;
    if (click || rightClick || wheel != 0.0f)
        g_menuPointerPressedAt = steadyMs();
#else
    (void)inside, (void)x, (void)y, (void)click, (void)rightClick, (void)wheel;
#endif
}

Ps2MenuPointer ps2PadTakeMenuPointer()
{
#if !defined(PLATFORM_XBOX)
    // TS_TEST_MENU_MOUSE=<steps> (tests): steps "h X Y" (move there), "c X
    // Y" (move and left click), "u X Y" / "d X Y" (move and wheel up or
    // down), "r" (right click), separated by ';', one every 90 menu ticks,
    // in game pixels; the real pointer is ignored while they play.
    static std::vector<std::string> testSteps = [] {
        std::vector<std::string> steps;
        if (const char *v = std::getenv("TS_TEST_MENU_MOUSE"); v && *v)
        {
            std::stringstream list(v);
            for (std::string step; std::getline(list, step, ';');)
                steps.push_back(step);
        }
        return steps;
    }();
    if (!testSteps.empty())
    {
        static size_t ticks = 0, next = 0;
        static Ps2MenuPointer at;
        Ps2MenuPointer taken = at;
        taken.moved = taken.clicks = taken.rightClicks = taken.wheel = 0;
        if (ticks++ % 90u == 89u && next < testSteps.size())
        {
            char kind = 0;
            float x = at.x, y = at.y;
            std::sscanf(testSteps[next++].c_str(), " %c %f %f", &kind, &x, &y);
            at.inside = true;
            taken.inside = true;
            taken.moved = x != at.x || y != at.y || kind == 'h';
            at.x = taken.x = x;
            at.y = taken.y = y;
            taken.clicks = kind == 'c' && !clickedPrompt(x, y);
            if (kind == 'c' || kind == 'r')
                g_testClick.store(true, std::memory_order_relaxed);
            taken.rightClicks = kind == 'r';
            taken.wheel = kind == 'u' ? 1 : kind == 'd' ? -1 : 0;
            std::fprintf(stderr, "[TS:menu-mouse] step %c %.0f,%.0f\n", kind, x, y);
        }
        return taken;
    }
    std::lock_guard<std::mutex> lock(g_menuPointerMutex);
    Ps2MenuPointer taken = g_menuPointer;
    // A click no menu took within a quarter second (made on a loading
    // screen or a box with no rows) is dropped, not played on the next menu.
    if (steadyMs() - g_menuPointerPressedAt > 250)
        taken.clicks = taken.rightClicks = taken.wheel = 0;
    g_menuPointer.moved = false;
    g_menuPointer.clicks = g_menuPointer.rightClicks = g_menuPointer.wheel = 0;
    return taken;
#else
    return {};
#endif
}

int ps2PadButtonSet()
{
#if !defined(PLATFORM_XBOX)
    // TS_TEST_BUTTON_SET=1|2 (tests): that set whatever is used.
    static const int forced = [] {
        const char *v = std::getenv("TS_TEST_BUTTON_SET");
        return v && (*v == '1' || *v == '2') ? *v - '0' : 0;
    }();
    if (forced)
        return forced;
    // The device used last; before any, a controller if one is plugged in.
    int device = g_lastActiveDevice.load(std::memory_order_relaxed);
    if (device < 0)
    {
        std::lock_guard<std::mutex> lock(g_laneMutex);
        for (int d = 1; d < kDeviceCount && device < 0; ++d)
            if (g_deviceRead[d].present)
                device = d;
    }
    return device > 0 ? 1 : 2;
#else
    return 0;
#endif
}

int ps2PadKeyboardLane()
{
#if !defined(PLATFORM_XBOX)
    std::lock_guard<std::mutex> lock(g_laneMutex);
    return laneOfDeviceLocked(kKeyboardDevice);
#else
    return -1;
#endif
}

int ps2PadTakeTypedChar()
{
#if !defined(PLATFORM_XBOX)
    std::lock_guard<std::mutex> lock(g_typedMutex);
    if (g_typed.empty())
        return 0;
    const int c = g_typed.front();
    g_typed.pop_front();
    return c;
#else
    return 0;
#endif
}

void ps2PadNoteMouseMotion(float dx, float dy)
{
#if !defined(PLATFORM_XBOX)
    std::lock_guard<std::mutex> lock(g_mouseMutex);
    g_mouseDx += dx;
    g_mouseDy += dy;
#else
    (void)dx;
    (void)dy;
#endif
}

bool PSPadBackend::readState(int port, int slot, uint8_t *data, size_t size)
{
    if (!data || size < 32)
        return false;

    std::memset(data, 0, 32);
    data[0] = 0x01;
    data[1] = kPadAnalogMarker;
    data[2] = 0xFF;
    data[3] = 0xFF;
    data[4] = data[5] = data[6] = data[7] = kPadStickCenter;

    uint16_t btns = 0xFFFFu;
    // TS_PAD_SCRIPT_KEYBOARD=1 (PC tests): the script's lane 0 plays as the
    // keyboard and mouse device instead (its buttons and sticks, through the
    // players' device locking and the live reads below), so the keyboard's
    // own path is what is tested.
#if !defined(PLATFORM_XBOX)
    static const bool scriptAsKeyboard = [] { const char *v = std::getenv("TS_PAD_SCRIPT_KEYBOARD"); return v && *v == '1'; }();
#else
    constexpr bool scriptAsKeyboard = false;
#endif
    uint8_t scratch[8] = {0, 0, 0xFF, 0xFF, kPadStickCenter, kPadStickCenter, kPadStickCenter, kPadStickCenter};
    uint8_t *out = scriptAsKeyboard ? scratch : data;
    auto writeScriptLane = [&out](const ScriptLane &lane)
    {
        out[2] = static_cast<uint8_t>(lane.buttons & 0xFFu);
        out[3] = static_cast<uint8_t>(lane.buttons >> 8);
        out[4] = lane.rx;
        out[5] = lane.ry;
        out[6] = lane.lx;
        out[7] = lane.ly;
    };
    // Lane 0 plays the script and moves it on; it notes the frame it played
    // so the other lanes, read after it in the same game frame, play the
    // same one (or nothing while lane 0 waits).
    // (A scripted run's menu mouse, TS_TEST_MENU_MOUSE, presses on lane 0:
    // the keyboard and mouse are no player's while a script plays.)
    auto writeScriptFrame = [this, &writeScriptLane, &out](size_t index)
    {
        writeScriptLane(m_script[index].lanes[0]);
        m_scriptLaneFrame = static_cast<uint32_t>(index + 1);
#if !defined(PLATFORM_XBOX)
        if (const uint16_t press = scriptAsKeyboard ? 0 : menuPressThisRead()) // (TS_PAD_SCRIPT_KEYBOARD: the device's own read)
        {
            out[2] &= static_cast<uint8_t>(~press & 0xFFu);
            out[3] &= static_cast<uint8_t>((~press >> 8) & 0xFFu);
        }
#endif
    };
    const int lane = laneForPort(port, slot);
    if (!m_script.empty() && lane == 0)
    {
        [&] {
            ++m_scriptReadCount;
            m_scriptLaneFrame = 0;
            if (m_scriptTimed)
            {
                const double elapsed = std::chrono::duration<double>(std::chrono::steady_clock::now() - m_scriptStartTime).count() / m_scriptTimeScale;
                if (elapsed >= m_script.front().atSeconds)
                {
                    while (m_scriptIndex + 1 < m_script.size() && elapsed >= m_script[m_scriptIndex + 1].atSeconds)
                    {
                        ++m_scriptIndex;
                    }
                    writeScriptFrame(m_scriptIndex);
                    m_scriptExhausted = m_scriptIndex + 1 >= m_script.size();
                }
                return;
            }

            // Waits and repeat ends take no read of their own.
            while (m_scriptIndex < m_script.size() && m_script[m_scriptIndex].kind != ScriptFrame::Kind::Frame)
            {
                ScriptFrame &control = m_script[m_scriptIndex];
                if (control.kind == ScriptFrame::Kind::Repeat)
                {
                    // Back to the block's first frame while passes remain (the
                    // block holds a frame line, so this ends at a read).
                    if (control.reads != 0u)
                    {
                        --control.reads;
                        m_scriptIndex = control.waitAddress;
                    }
                    else
                    {
                        control.reads = control.waitValue;
                        ++m_scriptIndex;
                    }
                    m_scriptFrameRead = 0;
                    continue;
                }
                if (!m_scriptU32Reader || !compareU32(m_scriptU32Reader(control.waitAddress), control.waitCompare, control.waitValue))
                {
                    return;
                }
                ++m_scriptIndex;
                m_scriptFrameRead = 0;
            }

            if (m_scriptIndex >= m_script.size())
            {
                m_scriptExhausted = true;
                return;
            }

            const ScriptFrame &frame = m_script[m_scriptIndex];
            writeScriptFrame(m_scriptIndex);
            if (!m_scriptExhausted && ++m_scriptFrameRead >= frame.reads)
            {
                m_scriptFrameRead = 0;
                if (m_scriptIndex + 1 < m_script.size())
                {
                    ++m_scriptIndex;
                }
                else
                {
                    m_scriptExhausted = true;
                }
            }
            return;
        }();
        if (!scriptAsKeyboard)
            return true;
#if !defined(PLATFORM_XBOX)
        std::memcpy(g_keyboardScript, scratch + 2, 6);
        g_keyboardScriptSet.store(true, std::memory_order_relaxed);
#endif
    }
    if (lane < 0)
    {
        // No controller behind this handle (Pad.cpp keeps it disconnected).
        return true;
    }
    if (!m_script.empty() && !scriptAsKeyboard)
    {
        // Lanes 1-3 play the frame lane 0 played (connected only when the
        // script has them).
        if (lane < m_scriptLanes && m_scriptLaneFrame != 0)
            writeScriptLane(m_script[m_scriptLaneFrame - 1].lanes[lane]);
        return true;
    }

    // Live input: lane 0 is gamepad 0, else the keyboard; lanes 1-3 are
    // gamepads 1-3.
    const int gamepad = lane;
    const bool useGamepad = IsGamepadAvailable(gamepad);
    auto clearBit = [&btns](uint16_t mask)
    { btns &= ~mask; };

#if defined(PLATFORM_XBOX)
#if defined(_WIN32)
    if (readXInputState(static_cast<XInputDword>(gamepad), data, btns))
    {
        data[2] = static_cast<uint8_t>(btns & 0xFF);
        data[3] = static_cast<uint8_t>(btns >> 8);
        return true;
    }
#endif

    if (useGamepad)
    {
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_UP))
            clearBit(PAD_UP);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_DOWN))
            clearBit(PAD_DOWN);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_LEFT))
            clearBit(PAD_LEFT);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_RIGHT))
            clearBit(PAD_RIGHT);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_DOWN))
            clearBit(PAD_CROSS);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_RIGHT))
            clearBit(PAD_CIRCLE);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_LEFT))
            clearBit(PAD_SQUARE);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_UP))
            clearBit(PAD_TRIANGLE);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_TRIGGER_1))
            clearBit(PAD_L1);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_TRIGGER_1))
            clearBit(PAD_R1);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_TRIGGER_2))
            clearBit(PAD_L2);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_TRIGGER_2))
            clearBit(PAD_R2);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_MIDDLE_RIGHT))
            clearBit(PAD_START);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_MIDDLE_LEFT))
            clearBit(PAD_SELECT);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_THUMB))
            clearBit(PAD_L3);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_THUMB))
            clearBit(PAD_R3);

        float lx = GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_LEFT_X);
        float ly = GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_LEFT_Y);
        float rx = GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_RIGHT_X);
        float ry = GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_RIGHT_Y);
        data[6] = analogAxisFromUnit(lx);
        data[7] = analogAxisFromUnit(ly);
        data[4] = analogAxisFromUnit(rx);
        data[5] = analogAxisFromUnit(ry);
    }
    else if (gamepad == 0)
    {
        if (IsKeyDown(KEY_UP) || (!m_keyboardAnalogEnabled && IsKeyDown(KEY_W)))
            clearBit(PAD_UP);
        if (IsKeyDown(KEY_DOWN) || (!m_keyboardAnalogEnabled && IsKeyDown(KEY_S)))
            clearBit(PAD_DOWN);
        if (IsKeyDown(KEY_LEFT) || (!m_keyboardAnalogEnabled && IsKeyDown(KEY_A)))
            clearBit(PAD_LEFT);
        if (IsKeyDown(KEY_RIGHT) || (!m_keyboardAnalogEnabled && IsKeyDown(KEY_D)))
            clearBit(PAD_RIGHT);
        if (m_keyboardAnalogEnabled) {
            data[6] = keyboardAxis(IsKeyDown(KEY_A), IsKeyDown(KEY_D));
            data[7] = keyboardAxis(IsKeyDown(KEY_W), IsKeyDown(KEY_S));
            data[4] = keyboardAxis(IsKeyDown(KEY_J), IsKeyDown(KEY_L));
            data[5] = keyboardAxis(IsKeyDown(KEY_I), IsKeyDown(KEY_K));
        }
        if (IsKeyDown(KEY_X) || IsKeyDown(KEY_SPACE))
            clearBit(PAD_CROSS);
        if (IsKeyDown(KEY_C) || IsKeyDown(KEY_ESCAPE))
            clearBit(PAD_CIRCLE);
        if (IsKeyDown(KEY_Z) || IsKeyDown(KEY_KP_0))
            clearBit(PAD_SQUARE);
        if (IsKeyDown(KEY_V) || IsKeyDown(KEY_KP_1))
            clearBit(PAD_TRIANGLE);
        if (IsKeyDown(KEY_Q))
            clearBit(PAD_L1);
        if (IsKeyDown(KEY_E))
            clearBit(PAD_R1);
        if (IsKeyDown(KEY_LEFT_SHIFT))
            clearBit(PAD_L2);
        if (IsKeyDown(KEY_RIGHT_SHIFT))
            clearBit(PAD_R2);
        if (IsKeyDown(KEY_ENTER))
            clearBit(PAD_START);
        if (IsKeyDown(KEY_TAB))
            clearBit(PAD_SELECT);
    }

#else
    // Live input (PC): each lane plays the device locked to it (players'
    // devices, above). Lane 0's read is the first of a game frame: it reads
    // every device and locks newly used ones to lanes.
    (void)useGamepad;
    (void)clearBit;
    if (lane == 0)
        updateLaneDevices(m_keyboardAnalogEnabled);
    DeviceRead read;
    if (laneDeviceRead(lane, read))
    {
        btns = read.buttons;
        std::memcpy(data + 4, read.sticks, 4);
    }

#endif
    data[2] = static_cast<uint8_t>(btns & 0xFF);
    data[3] = static_cast<uint8_t>(btns >> 8);
    return true;
}
