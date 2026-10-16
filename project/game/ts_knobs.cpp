// Runtime knobs: see ts_knobs.h.
#include "ts_knobs.h"

#include "runtime/ps2_host_settings.h"
#include "runtime/ps2_pad.h"

#include <cstdio>
#include <cstring>

namespace
{
    struct Knob
    {
        char name[32];
        uint32_t *var;
        uint32_t value;   // what var holds (applied)
        uint32_t pending; // the queued value
        bool dirty;
    };
    Knob s_knobs[kTsKnobMax];
    uint32_t s_count = 0;
    uint32_t s_generation = 1;
    bool s_installed = false;

    Knob *find(const char *name)
    {
        for (uint32_t i = 0; i < s_count; ++i)
            if (std::strcmp(s_knobs[i].name, name) == 0)
                return &s_knobs[i];
        return nullptr;
    }

    void queueFromSettings(Knob &knob)
    {
        for (const auto &entry : hostSettings().knobs)
            if (entry.first == knob.name)
            {
                knob.pending = entry.second;
                knob.dirty = knob.pending != knob.value;
            }
    }

    void scriptKnob(const char *name, uint32_t value)
    {
        if (!tsKnobSet(name, value))
            std::fprintf(stderr, "[TS:knob] script sets unknown knob %s\n", name);
    }
}

bool tsKnobRegister(const char *name, uint32_t *var, uint32_t defaultValue)
{
    if (!name || !var || std::strlen(name) >= sizeof(Knob::name))
        return false;
    Knob *knob = find(name);
    if (!knob)
    {
        if (s_count >= kTsKnobMax)
            return false;
        knob = &s_knobs[s_count++];
        std::strcpy(knob->name, name);
    }
    knob->var = var;
    knob->value = knob->pending = defaultValue;
    knob->dirty = false;
    *var = defaultValue;
    // Before the game runs the frame boundary has not come: the settings
    // file's value is applied here, so the first frame already sees it.
    queueFromSettings(*knob);
    if (knob->dirty)
    {
        knob->value = knob->pending;
        *var = knob->value;
        knob->dirty = false;
        ++s_generation;
    }
    return true;
}

bool tsKnobSet(const char *name, uint32_t value)
{
    Knob *knob = find(name);
    if (!knob)
        return false;
    knob->pending = value;
    knob->dirty = value != knob->value;
    return true;
}

bool tsKnobGet(const char *name, uint32_t &value)
{
    const Knob *knob = find(name);
    if (!knob)
        return false;
    value = knob->value;
    return true;
}

void tsKnobApplyFrame()
{
    bool changed = false;
    for (uint32_t i = 0; i < s_count; ++i)
    {
        Knob &knob = s_knobs[i];
        if (!knob.dirty)
            continue;
        knob.dirty = false;
        if (knob.pending == knob.value)
            continue;
        knob.value = knob.pending;
        *knob.var = knob.value;
        changed = true;
        std::fprintf(stderr, "[TS:knob] %s=%u\n", knob.name, knob.value);
    }
    if (changed)
        ++s_generation;
}

uint32_t tsKnobGeneration() { return s_generation; }

void tsKnobsInstall()
{
    if (!s_installed)
    {
        s_installed = true;
        PSPadBackend::setScriptKnobHandler(&scriptKnob);
    }
    for (uint32_t i = 0; i < s_count; ++i)
        queueFromSettings(s_knobs[i]);
}

uint32_t tsKnobCount() { return s_count; }

bool tsKnobAt(uint32_t index, const char *&name, uint32_t &value)
{
    if (index >= s_count)
        return false;
    name = s_knobs[index].name;
    value = s_knobs[index].value;
    return true;
}
