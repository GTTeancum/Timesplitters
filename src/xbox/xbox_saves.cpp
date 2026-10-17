// Saves on the Xbox hard disk, where the Xbox dashboard finds them
// (xbox_saves.h has the layout). Start-up only: nothing here runs in a match.
#include "xbox_saves.h"

#include <nxdk/mount.h>
#include <windows.h>

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

namespace
{
    constexpr const char *kOldRoot = "E:\\TimeSplitters"; // builds before title ID 0x54530001
    constexpr const char *kTitleName = "TimeSplitters";
    constexpr const char *kCardNames[2] = {"Memory Card 1", "Memory Card 2"};
    constexpr const char *kCardFolders[2] = {"mc0", "mc1"};

    bool isDirectory(const std::string &path)
    {
        const DWORD attributes = GetFileAttributesA(path.c_str());
        return attributes != INVALID_FILE_ATTRIBUTES && (attributes & FILE_ATTRIBUTE_DIRECTORY);
    }

    bool exists(const std::string &path) { return GetFileAttributesA(path.c_str()) != INVALID_FILE_ATTRIBUTES; }

    // Every folder along the path ("E:\UDATA\54530001\mc0" creates UDATA,
    // then 54530001, then mc0); true if the whole path is a folder after it.
    bool makeFolders(const std::string &path)
    {
        for (size_t i = 3; i <= path.size(); ++i) // past "E:\"
            if (i == path.size() || path[i] == '\\')
                CreateDirectoryA(path.substr(0, i).c_str(), nullptr);
        return isDirectory(path);
    }

    bool readFile(const std::string &path, std::vector<uint8_t> &data)
    {
        data.clear();
        FILE *file = std::fopen(path.c_str(), "rb");
        if (!file)
            return false;
        // A short read is the end: nxdk's C library flags a read after the
        // end of the file as an error.
        uint8_t buffer[4096];
        size_t got;
        do
        {
            got = std::fread(buffer, 1, sizeof(buffer), file);
            data.insert(data.end(), buffer, buffer + got);
        } while (got == sizeof(buffer));
        const bool ok = !std::ferror(file);
        std::fclose(file);
        return ok;
    }

    // Writes the file only when it differs from what is there (no disk
    // writes on an ordinary start). False on a failed write.
    bool writeIfDifferent(const std::string &path, const std::vector<uint8_t> &data, bool &written)
    {
        written = false;
        std::vector<uint8_t> current;
        if (readFile(path, current) && current == data)
            return true;
        FILE *file = std::fopen(path.c_str(), "wb");
        if (!file)
            return false;
        const bool ok = std::fwrite(data.data(), 1, data.size(), file) == data.size();
        const bool closed = std::fclose(file) == 0;
        written = ok && closed;
        return written;
    }

    // Dashboard metadata files are Unicode text with a byte-order mark.
    std::vector<uint8_t> unicodeText(const std::string &text)
    {
        std::vector<uint8_t> out = {0xFF, 0xFE};
        for (char c : text)
        {
            out.push_back(static_cast<uint8_t>(c));
            out.push_back(0);
        }
        return out;
    }

    void install(const std::string &path, const std::vector<uint8_t> &data)
    {
        bool written = false;
        if (!writeIfDifferent(path, data, written))
        {
            const DWORD error = GetLastError();
            std::cout << "[TS:saves] could not write " << path << " (error " << error << ")" << std::endl;
        }
        else if (written)
            std::cout << "[TS:saves] wrote " << path << std::endl;
    }

    // A file shipped next to default.xbe (D:\), copied into the save folder.
    void installFromDisc(const char *name, const std::string &folder)
    {
        std::vector<uint8_t> data;
        if (!readFile(std::string("D:\\") + name, data) || data.empty())
        {
            std::cout << "[TS:saves] D:\\" << name << " not found: the dashboard shows no icon" << std::endl;
            return;
        }
        install(folder + "\\" + name, data);
    }

    void writeCardMetadata(const std::string &card, int number, const std::vector<uint8_t> &saveImage)
    {
        // The format XCreateSaveGame writes.
        install(card + "\\SaveMeta.xbx", unicodeText(std::string("Name=") + kCardNames[number] + "\r\n"));
        if (!saveImage.empty())
            install(card + "\\SaveImage.xbx", saveImage);
    }

    // Moves what is in an old card folder into the new one, file by file
    // (copied, then the original deleted once the copy is complete). Anything
    // the new card already has stays in the old folder: nothing is
    // overwritten and nothing is lost.
    struct MoveCount
    {
        int moved = 0;
        int kept = 0;
        int failed = 0;
    };

    void moveTree(const std::string &from, const std::string &to, MoveCount &count)
    {
        if (!isDirectory(to) && !CreateDirectoryA(to.c_str(), nullptr))
        {
            const DWORD error = GetLastError();
            std::cout << "[TS:saves] could not create " << to << " (error " << error << ")" << std::endl;
            ++count.failed;
            return;
        }
        WIN32_FIND_DATAA entry;
        HANDLE find = FindFirstFileA((from + "\\*").c_str(), &entry);
        if (find == INVALID_HANDLE_VALUE)
            return;
        std::vector<std::pair<std::string, bool>> names; // listed first: the folder changes below
        do
        {
            if (std::strcmp(entry.cFileName, ".") && std::strcmp(entry.cFileName, ".."))
                names.emplace_back(entry.cFileName, (entry.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0);
        } while (FindNextFileA(find, &entry));
        FindClose(find);

        for (const auto &[name, folder] : names)
        {
            const std::string source = from + "\\" + name, target = to + "\\" + name;
            if (folder)
            {
                moveTree(source, target, count);
                RemoveDirectoryA(source.c_str()); // only if it is empty now
            }
            else if (exists(target))
            {
                std::cout << "[TS:saves] kept " << source << ": " << target << " already exists" << std::endl;
                ++count.kept;
            }
            else if (CopyFileA(source.c_str(), target.c_str(), TRUE))
            {
                DeleteFileA(source.c_str());
                ++count.moved;
            }
            else
            {
                const DWORD error = GetLastError();
                std::cout << "[TS:saves] could not copy " << source << " (error " << error << ")" << std::endl;
                DeleteFileA(target.c_str()); // a partial copy
                ++count.failed;
            }
        }
    }
}

XboxSaveLayout xboxSavesPrepare()
{
    XboxSaveLayout layout;
    // Nothing mounts the hard disk's data partition for an nxdk title. (On a
    // development kit, the debug monitor's own "E:" is Partition1\DEVKIT, so
    // these folders show there as V:\ = UDATA and S:\ = TDATA instead.)
    layout.mounted = nxIsDriveMounted('E') || nxMountDrive('E', "\\Device\\Harddisk0\\Partition1\\");
    const uint32_t titleId = CURRENT_XBE_HEADER->CertificateHeader->TitleID;
    char id[9];
    std::snprintf(id, sizeof(id), "%08X", static_cast<unsigned>(titleId));
    layout.root = std::string("E:\\UDATA\\") + id;
    layout.card0 = layout.root + "\\" + kCardFolders[0];
    layout.logFile = layout.root + "\\timesplitters.log";
    layout.testCard0 = std::string("E:\\TDATA\\") + id + "\\autoplay\\mc0";
    if (layout.mounted)
        makeFolders(layout.root);
    return layout;
}

void xboxSavesSetup(const XboxSaveLayout &layout)
{
    if (!layout.mounted)
    {
        std::cout << "[TS:saves] the hard disk (E:) could not be mounted: no saves" << std::endl;
        return;
    }
    if (!isDirectory(layout.root))
    {
        std::cout << "[TS:saves] could not create " << layout.root << ": no saves" << std::endl;
        return;
    }

    // The title's dashboard entry: its name, icon and default save icon.
    install(layout.root + "\\TitleMeta.xbx", unicodeText(std::string("[default]\r\nTitleName=") + kTitleName + "\r\n"));
    installFromDisc("TitleImage.xbx", layout.root);
    installFromDisc("SaveImage.xbx", layout.root);
    std::vector<uint8_t> saveImage;
    readFile(layout.root + "\\SaveImage.xbx", saveImage);

    // Each memory card is a save of its own.
    for (int card = 0; card < 2; ++card)
    {
        const std::string folder = layout.root + "\\" + kCardFolders[card];
        if (!makeFolders(folder))
        {
            std::cout << "[TS:saves] could not create " << folder << std::endl;
            continue;
        }
        writeCardMetadata(folder, card, saveImage);

        // Saves from builds before the title ID, moved over once.
        const std::string old = std::string(kOldRoot) + "\\" + kCardFolders[card];
        if (isDirectory(old))
        {
            MoveCount count;
            moveTree(old, folder, count);
            const bool removed = RemoveDirectoryA(old.c_str()) != 0;
            std::cout << "[TS:saves] " << old << " -> " << folder << ": " << count.moved << " file(s) moved, "
                      << count.kept << " kept, " << count.failed << " failed" << (removed ? "; old folder removed" : "")
                      << std::endl;
        }
    }
    // The old folder held only the cards and the log.
    if (isDirectory(kOldRoot))
    {
        DeleteFileA((std::string(kOldRoot) + "\\timesplitters.log").c_str());
        if (RemoveDirectoryA(kOldRoot))
            std::cout << "[TS:saves] removed " << kOldRoot << std::endl;
        else
            std::cout << "[TS:saves] " << kOldRoot << " is not empty: left in place" << std::endl;
    }
    std::cout << "[TS:saves] saves in " << layout.root << " (memory cards " << kCardFolders[0] << ", "
              << kCardFolders[1] << ")" << std::endl;
}
