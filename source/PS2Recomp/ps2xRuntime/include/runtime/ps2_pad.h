#ifndef PS2_PAD_H
#define PS2_PAD_H

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

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
    bool loadScriptFile(const std::string &path, std::string *error = nullptr);
    bool loadScriptText(const std::string &text, std::string *error = nullptr);
    void clearScript();
    bool scriptActive() const { return !m_script.empty(); }
    bool scriptExhausted() const { return m_scriptExhausted; }
    size_t scriptReadCount() const { return m_scriptReadCount; }
    bool readState(int port, int slot, uint8_t *data, size_t size);
private:
    struct ScriptFrame
    {
        uint32_t reads = 0;
        uint16_t buttons = 0xFFFFu;
        uint8_t lx = 0x80u;
        uint8_t ly = 0x80u;
        uint8_t rx = 0x80u;
        uint8_t ry = 0x80u;
    };

    std::vector<ScriptFrame> m_script;
    size_t m_scriptIndex = 0;
    uint32_t m_scriptFrameRead = 0;
    size_t m_scriptReadCount = 0;
    bool m_scriptExhausted = false;
    bool m_keyboardAnalogEnabled = false;
};

#endif
