// First-run unpacking of a TimeSplitters disc dump into loose files
// (disc_setup.h). Reads ISO 9660 from a 2048-byte image (.iso) or a raw
// 2352-byte one (.bin, Mode 1 or Mode 2 form 1 sectors, with or without its
// .cue). Kept free of the runtime's headers: it runs before the game starts.
#include "disc_setup.h"

#include <algorithm>
#include <array>
#include <cctype>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <optional>
#include <set>
#include <sstream>
#include <string>
#include <system_error>
#include <vector>

#ifdef _WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace
{
    namespace fs = std::filesystem;

    constexpr uint32_t kSector = 2048;
    constexpr const char *kElfName = "SLUS_200.90";

    std::string text(const fs::path &path)
    {
        const std::u8string u8 = path.u8string();
        return std::string(u8.begin(), u8.end());
    }

    fs::path fromUtf8(const std::string &value)
    {
        return fs::path(std::u8string(value.begin(), value.end()));
    }

    std::string lower(std::string value)
    {
        std::transform(value.begin(), value.end(), value.begin(),
                       [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
        return value;
    }

    std::string megabytes(uint64_t bytes)
    {
        return std::to_string((bytes + 512u * 1024u) / (1024u * 1024u)) + " MB";
    }

    // Progress goes to standard output (seen when it is redirected) and,
    // when the game was started from Explorer and has no console, to a
    // console window of its own that closes when the unpacking is done.
    class SetupOutput
    {
    public:
        ~SetupOutput() { close(); }

        void open()
        {
#ifdef _WIN32
            if (m_console)
                return;
            const HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
            if (out && out != INVALID_HANDLE_VALUE && GetFileType(out) != FILE_TYPE_UNKNOWN)
                return; // output is redirected or a console is attached
            if (!AllocConsole())
                return;
            m_ownConsole = true;
            SetConsoleOutputCP(CP_UTF8);
            SetConsoleTitleW(L"TimeSplitters - first start");
            m_console = CreateFileW(L"CONOUT$", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE,
                                    nullptr, OPEN_EXISTING, 0, nullptr);
            if (m_console == INVALID_HANDLE_VALUE)
                m_console = nullptr;
#endif
        }

        void close()
        {
#ifdef _WIN32
            if (m_console)
                CloseHandle(m_console);
            m_console = nullptr;
            if (m_ownConsole)
                FreeConsole();
            m_ownConsole = false;
#endif
        }

        void line(const std::string &message)
        {
            std::cout << "[TS:setup] " << message << std::endl;
#ifdef _WIN32
            if (m_console)
            {
                const std::string out = message + "\r\n";
                DWORD written = 0;
                WriteFile(m_console, out.data(), static_cast<DWORD>(out.size()), &written, nullptr);
            }
#endif
        }

        // The reason the game cannot start: logged, and shown in a message box.
        void fail(const std::string &message)
        {
            std::cerr << "[TS:setup] " << message << std::endl;
#ifdef _WIN32
            const int size = MultiByteToWideChar(CP_UTF8, 0, message.c_str(), -1, nullptr, 0);
            std::wstring wide(size > 0 ? static_cast<size_t>(size) : 1u, L'\0');
            if (size > 0)
                MultiByteToWideChar(CP_UTF8, 0, message.c_str(), -1, wide.data(), size);
            MessageBoxW(nullptr, wide.c_str(), L"TimeSplitters", MB_OK | MB_ICONERROR);
#endif
        }

    private:
#ifdef _WIN32
        HANDLE m_console = nullptr;
        bool m_ownConsole = false;
#endif
    };

    // A disc image: where logical sector `lbn` starts in `file` and where in
    // the raw sector its 2048 bytes of data are.
    struct DiscImage
    {
        fs::path file;
        uint64_t start = 0;        // byte offset of sector 0 (the data track)
        uint32_t rawSector = kSector;
        uint32_t dataOffset = 0;   // 0 (.iso), 16 (Mode 1), 24 (Mode 2 form 1)
        std::string kind;          // for messages
        std::ifstream in;
        std::vector<uint8_t> raw;

        bool read(uint32_t lbn, uint32_t count, uint8_t *dst)
        {
            if (!in.is_open())
            {
                in.open(file, std::ios::binary);
                if (!in)
                    return false;
            }
            in.clear();
            if (rawSector == kSector)
            {
                in.seekg(static_cast<std::streamoff>(start + static_cast<uint64_t>(lbn) * kSector));
                in.read(reinterpret_cast<char *>(dst), static_cast<std::streamsize>(count) * kSector);
                return static_cast<uint64_t>(in.gcount()) == static_cast<uint64_t>(count) * kSector;
            }
            raw.resize(static_cast<size_t>(count) * rawSector);
            in.seekg(static_cast<std::streamoff>(start + static_cast<uint64_t>(lbn) * rawSector));
            in.read(reinterpret_cast<char *>(raw.data()), static_cast<std::streamsize>(raw.size()));
            if (static_cast<size_t>(in.gcount()) != raw.size())
                return false;
            for (uint32_t i = 0; i < count; ++i)
                std::memcpy(dst + static_cast<size_t>(i) * kSector, raw.data() + static_cast<size_t>(i) * rawSector + dataOffset, kSector);
            return true;
        }
    };

    bool readBytes(const fs::path &file, uint64_t offset, uint8_t *dst, size_t size)
    {
        std::ifstream in(file, std::ios::binary);
        if (!in)
            return false;
        in.seekg(static_cast<std::streamoff>(offset));
        in.read(reinterpret_cast<char *>(dst), static_cast<std::streamsize>(size));
        return static_cast<size_t>(in.gcount()) == size;
    }

    // Finds the sector format of an image whose data track starts at byte
    // `start`, by the ISO 9660 volume descriptor in sector 16: plain 2048-byte
    // sectors, or raw 2352-byte ones (sync pattern; Mode 1 data at 16, Mode 2
    // form 1 at 24), or 2336-byte Mode 2 ones (data at 8).
    std::optional<DiscImage> probeImage(const fs::path &file, uint64_t start)
    {
        static const uint8_t sync[12] = {0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0};
        std::array<uint8_t, 2352> sector{};
        auto make = [&](uint32_t rawSector, uint32_t dataOffset, const char *kind)
        {
            DiscImage image;
            image.file = file;
            image.start = start;
            image.rawSector = rawSector;
            image.dataOffset = dataOffset;
            image.kind = kind;
            return image;
        };
        if (readBytes(file, start + 16u * 2352u, sector.data(), 2352) && std::memcmp(sector.data(), sync, 12) == 0)
        {
            const uint8_t mode = sector[15];
            const uint32_t offset = mode == 1 ? 16u : 24u;
            if ((mode == 1 || mode == 2) && std::memcmp(sector.data() + offset + 1, "CD001", 5) == 0)
                return make(2352, offset, mode == 1 ? "raw Mode 1 (2352-byte sectors)" : "raw Mode 2 (2352-byte sectors)");
        }
        if (readBytes(file, start + 16u * kSector, sector.data(), kSector) && std::memcmp(sector.data() + 1, "CD001", 5) == 0)
            return make(kSector, 0, "ISO (2048-byte sectors)");
        if (readBytes(file, start + 16u * 2336u, sector.data(), 2336) && std::memcmp(sector.data() + 8 + 1, "CD001", 5) == 0)
            return make(2336, 8, "Mode 2 (2336-byte sectors)");
        return std::nullopt;
    }

    // A .cue sheet's data track: its file and where the track starts in it.
    bool readCue(const fs::path &cue, fs::path &binOut, uint64_t &startOut, std::string &error)
    {
        std::ifstream in(cue);
        if (!in)
        {
            error = "could not be opened";
            return false;
        }
        fs::path currentFile;
        bool dataTrack = false;
        uint32_t sectorSize = 2352;
        std::string lineText;
        while (std::getline(in, lineText))
        {
            std::istringstream line(lineText);
            std::string keyword;
            line >> keyword;
            keyword = lower(keyword);
            if (keyword == "file")
            {
                std::string rest;
                std::getline(line, rest);
                const size_t open = rest.find('"');
                const size_t close = open == std::string::npos ? std::string::npos : rest.find('"', open + 1);
                std::string name;
                if (close != std::string::npos)
                    name = rest.substr(open + 1, close - open - 1);
                else
                {
                    std::istringstream words(rest);
                    words >> name;
                }
                currentFile = fromUtf8(name);
                dataTrack = false;
            }
            else if (keyword == "track")
            {
                std::string number, mode;
                line >> number >> mode;
                mode = lower(mode);
                dataTrack = mode.rfind("mode", 0) == 0;
                const size_t slash = mode.find('/');
                sectorSize = slash == std::string::npos ? 2352u : static_cast<uint32_t>(std::atoi(mode.c_str() + slash + 1));
            }
            else if (keyword == "index" && dataTrack)
            {
                std::string number, position;
                line >> number >> position;
                if (number != "01" && number != "1")
                    continue;
                unsigned minutes = 0, seconds = 0, frames = 0;
                if (std::sscanf(position.c_str(), "%u:%u:%u", &minutes, &seconds, &frames) != 3)
                {
                    error = "has an unreadable INDEX line";
                    return false;
                }
                if (currentFile.empty())
                {
                    error = "has a TRACK before any FILE";
                    return false;
                }
                binOut = currentFile.is_absolute() ? currentFile : cue.parent_path() / currentFile;
                startOut = (static_cast<uint64_t>(minutes) * 60u * 75u + seconds * 75u + frames) * sectorSize;
                std::error_code ec;
                if (!fs::is_regular_file(binOut, ec))
                {
                    // Names in cue sheets do not always match the file's case.
                    for (const auto &entry : fs::directory_iterator(binOut.parent_path(), ec))
                    {
                        if (lower(text(entry.path().filename())) == lower(text(binOut.filename())))
                        {
                            binOut = entry.path();
                            return true;
                        }
                    }
                    error = "names \"" + text(currentFile) + "\", which is not in the folder";
                    return false;
                }
                return true;
            }
        }
        error = "has no data track";
        return false;
    }

    uint32_t le32(const uint8_t *p)
    {
        return static_cast<uint32_t>(p[0]) | static_cast<uint32_t>(p[1]) << 8 |
               static_cast<uint32_t>(p[2]) << 16 | static_cast<uint32_t>(p[3]) << 24;
    }

    struct DiscFile
    {
        std::string path; // relative, '/'-separated, as it will be written
        uint32_t lbn = 0;
        uint32_t size = 0;
    };

    // A directory record's name as a host file name: version (";1") and a
    // trailing dot dropped ("1.;1" -> "1"). Empty when it is not a safe name.
    std::string hostName(const uint8_t *identifier, size_t size)
    {
        std::string name(reinterpret_cast<const char *>(identifier), size);
        if (const size_t semicolon = name.find(';'); semicolon != std::string::npos)
            name.erase(semicolon);
        while (!name.empty() && (name.back() == '.' || name.back() == ' '))
            name.pop_back();
        if (name.empty() || name == "." || name == "..")
            return {};
        for (const char c : name)
        {
            if (static_cast<unsigned char>(c) < 32 || std::strchr("<>:\"/\\|?*", c))
                return {};
        }
        return name;
    }

    bool walkDirectory(DiscImage &image, uint32_t lbn, uint32_t size, const std::string &prefix, int depth,
                       std::set<uint32_t> &seen, std::vector<DiscFile> &files, std::string &error)
    {
        if (depth > 8 || !seen.insert(lbn).second)
        {
            error = "its folders are damaged (a loop or too deep)";
            return false;
        }
        const uint32_t sectors = std::min<uint32_t>((size + kSector - 1u) / kSector, 256u);
        std::vector<uint8_t> bytes(static_cast<size_t>(sectors) * kSector);
        if (sectors == 0 || !image.read(lbn, sectors, bytes.data()))
        {
            error = "a folder could not be read (the file is cut short?)";
            return false;
        }
        size_t offset = 0;
        while (offset < bytes.size())
        {
            const uint8_t length = bytes[offset];
            if (length == 0)
            {
                offset = (offset / kSector + 1u) * kSector;
                continue;
            }
            if (length < 34 || offset + length > bytes.size() || 33u + bytes[offset + 32] > length)
            {
                error = "a folder record is damaged";
                return false;
            }
            const uint8_t *record = bytes.data() + offset;
            offset += length;
            const uint8_t nameSize = record[32];
            if (nameSize == 1 && (record[33] == 0 || record[33] == 1))
                continue; // "." and ".."
            const std::string name = hostName(record + 33, nameSize);
            if (name.empty())
            {
                error = "a file has a name that cannot be used on this computer";
                return false;
            }
            const uint32_t entryLbn = le32(record + 2);
            const uint32_t entrySize = le32(record + 10);
            if (record[25] & 2u)
            {
                if (!walkDirectory(image, entryLbn, entrySize, prefix + name + "/", depth + 1, seen, files, error))
                    return false;
            }
            else
            {
                files.push_back({prefix + name, entryLbn, entrySize});
            }
        }
        return true;
    }

    // Reads the disc's volume descriptor and file tree, and checks it is
    // TimeSplitters (SYSTEM.CNF boots SLUS_200.90).
    bool readDisc(DiscImage &image, std::vector<DiscFile> &files, std::string &error)
    {
        std::array<uint8_t, kSector> pvd{};
        if (!image.read(16, 1, pvd.data()) || pvd[0] != 1 || std::memcmp(pvd.data() + 1, "CD001", 5) != 0)
        {
            error = "it has no readable ISO 9660 volume";
            return false;
        }
        if (std::memcmp(pvd.data() + 8, "PLAYSTATION", 11) != 0)
        {
            error = "it is not a PlayStation 2 disc";
            return false;
        }
        std::set<uint32_t> seen;
        if (!walkDirectory(image, le32(pvd.data() + 156 + 2), le32(pvd.data() + 156 + 10), "", 0, seen, files, error))
            return false;

        const auto find = [&](const char *name) -> const DiscFile *
        {
            for (const DiscFile &file : files)
            {
                if (file.path == name)
                    return &file;
            }
            return nullptr;
        };
        const DiscFile *config = find("SYSTEM.CNF");
        if (!config || !find(kElfName) || config->size == 0 || config->size > 4096u)
        {
            error = "it is not TimeSplitters (USA): no SYSTEM.CNF starting SLUS_200.90";
            return false;
        }
        std::vector<uint8_t> configBytes(((config->size + kSector - 1u) / kSector) * kSector);
        if (!image.read(config->lbn, static_cast<uint32_t>(configBytes.size() / kSector), configBytes.data()))
        {
            error = "its SYSTEM.CNF could not be read";
            return false;
        }
        const std::string configText(reinterpret_cast<const char *>(configBytes.data()), config->size);
        if (configText.find(kElfName) == std::string::npos)
        {
            error = "it is not TimeSplitters (USA): its SYSTEM.CNF does not start SLUS_200.90";
            return false;
        }
        return true;
    }

    bool extract(DiscImage &image, const std::vector<DiscFile> &files, const fs::path &target, SetupOutput &out,
                 std::string &error)
    {
        uint64_t total = 0;
        for (const DiscFile &file : files)
            total += file.size;

        std::error_code ec;
        const fs::space_info space = fs::space(target.parent_path(), ec);
        if (!ec && space.available < total + 64u * 1024u * 1024u)
        {
            error = "There is not enough free space: the game files need " + megabytes(total) + " in\n" +
                    text(target.parent_path());
            return false;
        }

        out.line("Unpacking " + std::to_string(files.size()) + " files (" + megabytes(total) + ") into " + text(target));
        std::vector<uint8_t> buffer(256u * kSector);
        uint64_t done = 0;
        int shownPercent = -1;
        for (const DiscFile &file : files)
        {
            const fs::path path = target / fromUtf8(file.path);
            fs::create_directories(path.parent_path(), ec);
            std::ofstream output(path, std::ios::binary | std::ios::trunc);
            if (!output)
            {
                error = "Could not create " + text(path);
                return false;
            }
            uint32_t remaining = file.size;
            uint32_t lbn = file.lbn;
            while (remaining > 0)
            {
                const uint32_t bytes = std::min<uint32_t>(remaining, static_cast<uint32_t>(buffer.size()));
                const uint32_t sectors = (bytes + kSector - 1u) / kSector;
                if (!image.read(lbn, sectors, buffer.data()))
                {
                    error = "Could not read " + file.path + " from " + text(image.file) + " (the file is cut short?)";
                    return false;
                }
                output.write(reinterpret_cast<const char *>(buffer.data()), bytes);
                if (!output)
                {
                    error = "Could not write " + text(path) + " (disk full?)";
                    return false;
                }
                remaining -= bytes;
                lbn += sectors;
                done += bytes;
                const int percent = total ? static_cast<int>(done * 100u / total) : 100;
                if (percent / 5 != shownPercent / 5)
                {
                    shownPercent = percent;
                    out.line("  " + std::to_string(percent) + "%  " + file.path);
                }
            }
            output.close();
            if (!output || fs::file_size(path, ec) != file.size || ec)
            {
                error = "Could not write " + text(path) + " (disk full?)";
                return false;
            }
        }
        return true;
    }
}

fs::path tsFindOrExtractGameData(const fs::path &exeDir)
{
    std::error_code ec;
    for (const fs::path &candidate : {exeDir / "project" / "game-data", exeDir / "game-data"})
    {
        if (fs::is_regular_file(candidate / kElfName, ec))
            return candidate;
    }

    SetupOutput out;
    const fs::path target = exeDir / "game-data";
    const fs::path partial = exeDir / "game-data.partial";

    // Disc dumps next to the game: cue sheets first (with their .bin),
    // then .iso files, then .bin files no cue sheet named.
    std::vector<fs::path> cues, isos, bins;
    for (const auto &entry : fs::directory_iterator(exeDir, ec))
    {
        std::error_code typeEc;
        if (!entry.is_regular_file(typeEc))
            continue;
        const std::string extension = lower(text(entry.path().extension()));
        if (extension == ".cue")
            cues.push_back(entry.path());
        else if (extension == ".iso")
            isos.push_back(entry.path());
        else if (extension == ".bin")
            bins.push_back(entry.path());
    }
    std::sort(cues.begin(), cues.end());
    std::sort(isos.begin(), isos.end());
    std::sort(bins.begin(), bins.end());

    if (cues.empty() && isos.empty() && bins.empty())
    {
        out.fail("TimeSplitters could not find its game files.\n\n"
                 "Put your TimeSplitters (USA) disc dump (a .bin with its .cue, a .bin, or an .iso) in this folder:\n\n" +
                 text(exeDir) +
                 "\n\nthen start the game again. The first start unpacks it into the game-data folder there; "
                 "after that the disc dump is not needed.");
        return {};
    }

    struct Candidate
    {
        fs::path shown;      // the file the player put there
        fs::path image;      // the file holding the sectors
        uint64_t start = 0;
        std::string problem; // set when it cannot be used
    };
    std::vector<Candidate> candidates;
    std::set<std::string> binsNamedByCues;
    for (const fs::path &cue : cues)
    {
        Candidate candidate;
        candidate.shown = cue;
        std::string problem;
        if (readCue(cue, candidate.image, candidate.start, problem))
            binsNamedByCues.insert(lower(text(fs::weakly_canonical(candidate.image, ec))));
        else
            candidate.problem = "the cue sheet " + problem;
        candidates.push_back(candidate);
    }
    for (const fs::path &iso : isos)
        candidates.push_back({iso, iso, 0, {}});
    for (const fs::path &bin : bins)
    {
        if (!binsNamedByCues.count(lower(text(fs::weakly_canonical(bin, ec)))))
            candidates.push_back({bin, bin, 0, {}});
    }

    std::string report;
    for (Candidate &candidate : candidates)
    {
        std::vector<DiscFile> files;
        std::optional<DiscImage> image;
        if (candidate.problem.empty())
        {
            image = probeImage(candidate.image, candidate.start);
            if (!image)
                candidate.problem = "it is not a CD/DVD image this game can read (no ISO 9660 volume found)";
        }
        if (candidate.problem.empty())
            readDisc(*image, files, candidate.problem);
        if (!candidate.problem.empty())
        {
            report += "\n" + text(candidate.shown.filename()) + ": " + candidate.problem;
            std::cerr << "[TS:setup] " << text(candidate.shown) << ": " << candidate.problem << std::endl;
            continue;
        }

        out.open();
        out.line("TimeSplitters first start: unpacking the game files from your disc dump.");
        out.line("Disc dump: " + text(candidate.shown) +
                 (candidate.image != candidate.shown ? " (" + text(candidate.image.filename()) + ")" : std::string()) +
                 ", " + image->kind);
        out.line("This happens once and takes a minute or two. Please wait.");

        // A folder left by an interrupted unpacking is incomplete: start over.
        fs::remove_all(partial, ec);
        if (ec)
        {
            out.fail("Could not remove the unfinished folder from an earlier start:\n" + text(partial) +
                     "\n\nDelete it, then start the game again.");
            return {};
        }
        fs::create_directories(partial, ec);
        if (ec)
        {
            out.fail("Could not create the folder\n" + text(partial) + "\n\n" + ec.message() +
                     "\n\nThe game needs a folder it can write to (not Program Files).");
            return {};
        }
        std::string error;
        if (!extract(*image, files, partial, out, error))
        {
            image->in.close();
            fs::remove_all(partial, ec);
            out.fail("Unpacking the game files failed.\n\n" + error);
            return {};
        }
        image->in.close();
        fs::rename(partial, target, ec);
        if (ec)
        {
            out.fail("Could not rename\n" + text(partial) + "\nto\n" + text(target) + "\n\n" + ec.message());
            return {};
        }
        out.line("Done: " + std::to_string(files.size()) + " files in " + text(target) +
                 ". The disc dump is no longer needed. Starting the game.");
        return target;
    }

    out.fail("TimeSplitters could not use the disc dump in\n" + text(exeDir) + "\n" + report +
             "\n\nIt needs a dump of TimeSplitters (USA) for the PlayStation 2: a .bin with its .cue, a .bin, or an .iso.");
    return {};
}
