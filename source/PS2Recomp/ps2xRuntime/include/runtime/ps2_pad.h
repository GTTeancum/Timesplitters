#ifndef PS2_PAD_H
#define PS2_PAD_H

#include <chrono>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <string>
#include <vector>

// Controller lanes: how many controllers the pad HLE can connect (1-4).
// Lane 0 is port 0 slot 0, lane 1 port 1 slot 0; with more than two lanes
// port 1 holds a multitap and lanes 1-3 are its slots 0-2 (players 2-4).
// A lane is connected when the pad script plays it, or (no script) when
// raylib gamepad <lane> is present; lane 0 is always connected. 1 restores
// the single-controller pad exactly.
#ifndef TS_PAD_LANES
#define TS_PAD_LANES 4
#endif

class PSPadBackend
{
public:
    static constexpr int kMaxLanes = TS_PAD_LANES;
    static_assert(kMaxLanes >= 1 && kMaxLanes <= 4, "TS_PAD_LANES must be 1-4");

    PSPadBackend() = default;
    ~PSPadBackend() = default;

    enum class ScriptCompare
    {
        Equal,
        NotEqual,
        Less,
        LessOrEqual,
        Greater,
        GreaterOrEqual,
    };

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
    void setScriptTimeScale(double scale);
    void setScriptU32Reader(std::function<uint32_t(uint32_t)> reader);
    void clearScript();
    bool scriptActive() const { return !m_script.empty(); }
    bool scriptExhausted() const { return m_scriptExhausted; }
    bool scriptTimed() const { return m_scriptTimed; }
    double scriptTimeScale() const { return m_scriptTimeScale; }
    size_t scriptReadCount() const { return m_scriptReadCount; }
    int scriptLanes() const { return m_scriptLanes; }
    // The lane a (port, slot) handle reads, or -1; whether it is connected;
    // whether a port reports a multitap (scePadGetSlotMax 4).
    static int laneForPort(int port, int slot);
    bool laneConnected(int lane) const;
    bool multitapOnPort(int port) const;
    bool readState(int port, int slot, uint8_t *data, size_t size);
private:
    struct ScriptLane
    {
        uint16_t buttons = 0xFFFFu;
        uint8_t lx = 0x80u;
        uint8_t ly = 0x80u;
        uint8_t rx = 0x80u;
        uint8_t ry = 0x80u;
    };

    struct ScriptFrame
    {
        enum class Kind
        {
            Frame,
            WaitU32,
            Repeat,
        };

        Kind kind = Kind::Frame;
        uint32_t reads = 0;
        double atSeconds = 0.0;
        ScriptLane lanes[kMaxLanes];
        // WaitU32: address, comparison, value. Repeat (closes a repeat
        // block): waitAddress is the block's first frame, waitValue the
        // passes after the first, reads the passes still to play.
        uint32_t waitAddress = 0;
        ScriptCompare waitCompare = ScriptCompare::Equal;
        uint32_t waitValue = 0;
    };

    int liveLaneCount() const;

    std::vector<ScriptFrame> m_script;
    size_t m_scriptIndex = 0;
    uint32_t m_scriptFrameRead = 0;
    size_t m_scriptReadCount = 0;
    bool m_scriptExhausted = false;
    bool m_scriptTimed = false;
    double m_scriptTimeScale = 1.0;
    std::chrono::steady_clock::time_point m_scriptStartTime{};
    std::function<uint32_t(uint32_t)> m_scriptU32Reader;
    bool m_keyboardAnalogEnabled = false;
    // These two sit in the tail padding after m_keyboardAnalogEnabled, so
    // PS2Runtime's layout, which every compiled game file uses, is unchanged.
    uint8_t m_scriptLanes = 1;     // lanes the script plays (lane 0 is its clock)
    uint32_t m_scriptLaneFrame = 0; // 1 + the frame lane 0 last played; 0: none yet
};

#endif
