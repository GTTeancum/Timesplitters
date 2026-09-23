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
#include <cmath>
#include <cstring>

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

    void clearButton(uint16_t &buttons, uint16_t mask)
    {
        buttons = static_cast<uint16_t>(buttons & ~mask);
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

bool PSPadBackend::readState(int /*port*/, int /*slot*/, uint8_t *data, size_t size)
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
