#include "runtime/ps2_host_settings.h"

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>

namespace
{
    std::string trim(const std::string &text)
    {
        size_t begin = 0, end = text.size();
        while (begin < end && std::isspace(static_cast<unsigned char>(text[begin])))
            ++begin;
        while (end > begin && std::isspace(static_cast<unsigned char>(text[end - 1])))
            --end;
        return text.substr(begin, end - begin);
    }

    bool parseBool(const std::string &value)
    {
        return value == "1" || value == "true" || value == "on" || value == "yes";
    }

    void load(HostSettings &settings)
    {
        const char *path = std::getenv("TS_SETTINGS");
        std::ifstream file(path && *path ? path : "timesplitters.ini");
        if (!file)
            return;
        std::string line;
        while (std::getline(file, line))
        {
            if (const size_t comment = line.find_first_of("#;"); comment != std::string::npos)
                line.erase(comment);
            const size_t equals = line.find('=');
            if (equals == std::string::npos)
                continue;
            std::string key = trim(line.substr(0, equals));
            const std::string value = trim(line.substr(equals + 1));
            std::transform(key.begin(), key.end(), key.begin(), [](unsigned char c) { return std::tolower(c); });
            if (key == "resolution")
            {
                int w = 0, h = 0;
                if (std::sscanf(value.c_str(), "%dx%d", &w, &h) == 2 && w >= 320 && h >= 240)
                {
                    settings.windowWidth = w;
                    settings.windowHeight = h;
                }
            }
            else if (key == "fullscreen")
                settings.fullscreen = parseBool(value);
            else if (key == "widescreen")
                settings.widescreen = parseBool(value);
            else if (key == "fxaa")
                settings.fxaa = parseBool(value);
            else if (key == "render_scale")
                settings.renderScale = std::clamp(std::atoi(value.c_str()), 1, 4);
        }
    }
}

HostSettings &hostSettings()
{
    static HostSettings settings;
    static const bool loaded = (load(settings), true);
    (void)loaded;
    return settings;
}
