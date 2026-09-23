#include "runtime/ps2_pad.h"
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
#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstring>
#include <fstream>
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
            throw std::runtime_error("line " + std::to_string(lineNumber) + ": expected byte value 0..255");
        }
        return static_cast<uint8_t>(value);
    }

    uint32_t parseReadCount(const std::string &text, size_t lineNumber)
    {
        size_t consumed = 0;
        const unsigned long value = std::stoul(text, &consumed, 0);
        if (consumed != text.size() || value == 0ul || value > 1000000ul)
        {
            throw std::runtime_error("line " + std::to_string(lineNumber) + ": expected read count 1..1000000");
        }
        return static_cast<uint32_t>(value);
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
                throw std::runtime_error("line " + std::to_string(lineNumber) + ": unknown pad button '" + name + "'");
            }
            clearButton(buttons, it->second);
        }
        return buttons;
    }

#if defined(_WIN32)
    bool readXInputState(uint8_t *data, uint16_t &buttons)
    {
        XINPUT_STATE state{};
        if (XInputGetState(0, &state) != kXInputErrorSuccess)
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
}

bool PSPadBackend::loadScriptText(const std::string &text, std::string *error)
{
    std::vector<ScriptFrame> frames;
    std::istringstream input(text);
    std::string line;
    size_t lineNumber = 0;

    try
    {
        while (std::getline(input, line))
        {
            ++lineNumber;
            if (const size_t comment = line.find('#'); comment != std::string::npos)
            {
                line.resize(comment);
            }
            std::istringstream tokens(line);
            std::string readsText;
            std::string buttonsText;
            if (!(tokens >> readsText))
            {
                continue;
            }
            if (!(tokens >> buttonsText))
            {
                throw std::runtime_error("line " + std::to_string(lineNumber) + ": expected buttons token");
            }

            ScriptFrame frame{};
            frame.reads = parseReadCount(readsText, lineNumber);
            frame.buttons = parseButtonList(buttonsText, lineNumber);
            std::string value;
            if (tokens >> value)
                frame.lx = parseByteValue(value, lineNumber);
            if (tokens >> value)
                frame.ly = parseByteValue(value, lineNumber);
            if (tokens >> value)
                frame.rx = parseByteValue(value, lineNumber);
            if (tokens >> value)
                frame.ry = parseByteValue(value, lineNumber);
            if (tokens >> value)
            {
                throw std::runtime_error("line " + std::to_string(lineNumber) + ": too many fields");
            }
            frames.push_back(frame);
        }
    }
    catch (const std::exception &e)
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

    m_script = std::move(frames);
    m_scriptIndex = 0;
    m_scriptFrameRead = 0;
    m_scriptReadCount = 0;
    m_scriptExhausted = false;
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

void PSPadBackend::clearScript()
{
    m_script.clear();
    m_scriptIndex = 0;
    m_scriptFrameRead = 0;
    m_scriptReadCount = 0;
    m_scriptExhausted = false;
}

uint8_t PSPadBackend::analogAxisFromUnit(float value)
{
    value = std::clamp(value, -1.0f, 1.0f);
    return static_cast<uint8_t>(std::lround((value + 1.0f) * 127.5f));
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
    if (!m_script.empty() && port == 0 && slot == 0)
    {
        const ScriptFrame &frame = m_script[std::min(m_scriptIndex, m_script.size() - 1)];
        data[2] = static_cast<uint8_t>(frame.buttons & 0xFFu);
        data[3] = static_cast<uint8_t>(frame.buttons >> 8);
        data[4] = frame.rx;
        data[5] = frame.ry;
        data[6] = frame.lx;
        data[7] = frame.ly;

        ++m_scriptReadCount;
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
        return true;
    }

    constexpr int kGamepad = 0;
    const bool useGamepad = IsGamepadAvailable(kGamepad);
    auto clearBit = [&btns](uint16_t mask)
    { btns &= ~mask; };

#if defined(_WIN32)
    if (readXInputState(data, btns))
    {
        data[2] = static_cast<uint8_t>(btns & 0xFF);
        data[3] = static_cast<uint8_t>(btns >> 8);
        return true;
    }
#endif

    if (useGamepad)
    {
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_FACE_UP))
            clearBit(PAD_UP);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_FACE_DOWN))
            clearBit(PAD_DOWN);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_FACE_LEFT))
            clearBit(PAD_LEFT);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_FACE_RIGHT))
            clearBit(PAD_RIGHT);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_FACE_DOWN))
            clearBit(PAD_CROSS);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_FACE_RIGHT))
            clearBit(PAD_CIRCLE);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_FACE_LEFT))
            clearBit(PAD_SQUARE);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_FACE_UP))
            clearBit(PAD_TRIANGLE);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_TRIGGER_1))
            clearBit(PAD_L1);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_TRIGGER_1))
            clearBit(PAD_R1);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_TRIGGER_2))
            clearBit(PAD_L2);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_TRIGGER_2))
            clearBit(PAD_R2);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_MIDDLE_RIGHT))
            clearBit(PAD_START);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_MIDDLE_LEFT))
            clearBit(PAD_SELECT);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_LEFT_THUMB))
            clearBit(PAD_L3);
        if (IsGamepadButtonDown(kGamepad, GAMEPAD_BUTTON_RIGHT_THUMB))
            clearBit(PAD_R3);

        float lx = GetGamepadAxisMovement(kGamepad, GAMEPAD_AXIS_LEFT_X);
        float ly = GetGamepadAxisMovement(kGamepad, GAMEPAD_AXIS_LEFT_Y);
        float rx = GetGamepadAxisMovement(kGamepad, GAMEPAD_AXIS_RIGHT_X);
        float ry = GetGamepadAxisMovement(kGamepad, GAMEPAD_AXIS_RIGHT_Y);
        data[6] = analogAxisFromUnit(lx);
        data[7] = analogAxisFromUnit(ly);
        data[4] = analogAxisFromUnit(rx);
        data[5] = analogAxisFromUnit(ry);
    }
    else
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

    data[2] = static_cast<uint8_t>(btns & 0xFF);
    data[3] = static_cast<uint8_t>(btns >> 8);
    return true;
}
