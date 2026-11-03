#include "runtime/ps2_host_settings.h"

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <string>
#include <utility>
#include <vector>

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

    std::string settingsPath()
    {
        const char *path = std::getenv("TS_SETTINGS");
        return path && *path ? path : "timesplitters.ini";
    }

    std::string lowerKey(const std::string &line)
    {
        std::string key = line;
        if (const size_t comment = key.find_first_of("#;"); comment != std::string::npos)
            key.erase(comment);
        const size_t equals = key.find('=');
        if (equals == std::string::npos)
            return {};
        key = trim(key.substr(0, equals));
        std::transform(key.begin(), key.end(), key.begin(), [](unsigned char c) { return std::tolower(c); });
        return key;
    }

    void load(HostSettings &settings)
    {
        std::ifstream file(settingsPath());
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
            {
#if !defined(PLATFORM_XBOX) // 4:3 output; native strips skip the HUD adjustment
                settings.widescreen = parseBool(value);
#endif
            }
            else if (key == "fxaa")
                settings.fxaa = parseBool(value);
            else if (key == "texture_dump")
                settings.textureDump = parseBool(value);
            else if (key == "texture_replace")
                settings.textureReplace = parseBool(value);
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

void saveHostSettings()
{
    const HostSettings &settings = hostSettings();
    const std::pair<std::string, std::string> values[] = {
        {"resolution", std::to_string(settings.windowWidth.load()) + "x" + std::to_string(settings.windowHeight.load())},
        {"fullscreen", settings.fullscreen ? "1" : "0"},
        {"widescreen", settings.widescreen ? "1" : "0"},
        {"fxaa", settings.fxaa ? "1" : "0"},
        {"render_scale", std::to_string(settings.renderScale.load())},
    };
    std::vector<std::string> lines;
    {
        std::ifstream in(settingsPath());
        for (std::string line; std::getline(in, line);)
            lines.push_back(line);
    }
    bool written[std::size(values)] = {};
    for (std::string &line : lines)
    {
        const std::string key = lowerKey(line);
        for (size_t i = 0; i < std::size(values); ++i)
        {
            if (key == values[i].first && !written[i])
            {
                line = values[i].first + " = " + values[i].second;
                written[i] = true;
            }
        }
    }
    for (size_t i = 0; i < std::size(values); ++i)
    {
        if (!written[i])
            lines.push_back(values[i].first + " = " + values[i].second);
    }
    std::ofstream out(settingsPath(), std::ios::trunc);
    for (const std::string &line : lines)
        out << line << '\n';
}
