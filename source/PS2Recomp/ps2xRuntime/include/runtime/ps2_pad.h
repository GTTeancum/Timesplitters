#ifndef PS2_PAD_H
#define PS2_PAD_H

#include <cstddef>
#include <cstdint>

class PSPadBackend
{
public:
    PSPadBackend() = default;
    ~PSPadBackend() = default;

    // Optional keyboard sticks for native PC games; D-pad remains on arrow keys.
    void setKeyboardAnalogEnabled(bool enabled) { m_keyboardAnalogEnabled = enabled; }
    static constexpr uint8_t keyboardAxis(bool negative, bool positive) {
        return negative == positive ? 128u : negative ? 1u : 255u;
    }
    static uint8_t analogAxisFromUnit(float value);
    static uint8_t xinputThumbAxis(int16_t value, int16_t deadzone, bool invert);
    static bool xinputTriggerPressed(uint8_t value, uint8_t threshold = 30u);
    bool readState(int port, int slot, uint8_t *data, size_t size);
private:
    bool m_keyboardAnalogEnabled = false;
};

#endif
