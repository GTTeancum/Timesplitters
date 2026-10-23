// First-run unpacking of a TimeSplitters disc dump into loose files, and
// Prepare Xbox Files (disc_setup.h). Reads ISO 9660 from a 2048-byte image
// (.iso) or a raw 2352-byte one (.bin, Mode 1 or Mode 2 form 1 sectors, with
// or without its .cue). Kept free of the runtime's headers: it runs before
// the game starts.
#include "disc_setup.h"
#include "xbox_files.h"

#include <algorithm>
#include <array>
#include <atomic>
#include <cctype>
#include <chrono>
#include <cwchar>
#include <future>
#include <mutex>
#include <thread>
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
#include <commctrl.h>
#include <shellapi.h>
#include <shobjidl.h>
#pragma comment(lib, "comctl32.lib")
#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "shell32.lib")
// Common controls 6: the progress bar and dialogs in the current Windows style.
#pragma comment(linker, "\"/manifestdependency:type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
// Linux: progress is a line on the console; errors also go to a zenity
// dialog when one can be shown (a desktop session with zenity installed).
#include <sys/wait.h>
#include <unistd.h>
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

    std::wstring wide(const std::string &value)
    {
#ifdef _WIN32
        const int size = MultiByteToWideChar(CP_UTF8, 0, value.c_str(), -1, nullptr, 0);
        std::wstring out(size > 0 ? static_cast<size_t>(size) : 1u, L'\0');
        if (size > 0)
            MultiByteToWideChar(CP_UTF8, 0, value.c_str(), -1, out.data(), size);
        out.resize(std::wcslen(out.c_str()));
        return out;
#else
        return std::wstring(value.begin(), value.end());
#endif
    }

    // Progress goes to standard output (seen when it is redirected) and to a
    // small window of its own: a line saying what is happening, a progress
    // bar and the current file. No console window is ever opened. Closing
    // the window asks whether to stop; the work then sees cancelled().
    // Errors are shown in a message box. quiet: standard output only.
    class SetupOutput
    {
    public:
        explicit SetupOutput(std::wstring title = L"TimeSplitters - first start") : m_title(std::move(title)) {}
        ~SetupOutput() { close(); }

        void setQuiet(bool quiet) { m_quiet = quiet; }
        bool cancelled() const { return m_cancel.load(); }

        void open()
        {
#ifdef _WIN32
            if (m_quiet || m_thread.joinable())
                return;
            std::promise<void> ready;
            std::future<void> created = ready.get_future();
            m_thread = std::thread([this, &ready] { run(ready); });
            created.wait();
#endif
        }

        void close()
        {
#ifdef _WIN32
            if (!m_thread.joinable())
                return;
            if (m_window)
                PostMessageW(m_window, kMsgDestroy, 0, 0);
            m_thread.join();
            m_window = nullptr;
#endif
        }

        // The main line (what is being done).
        void line(const std::string &message)
        {
#ifndef _WIN32
            // Finish a progress line rewritten in place before a new line.
            if (m_lastPercent >= 0 && m_lastPercent < 100 && isatty(STDOUT_FILENO) != 0)
                std::cout << '\n';
            m_lastPercent = -1;
#endif
            std::cout << "[TS:setup] " << message << std::endl;
            set(m_status, message);
        }

        // The small line under the bar (the current file).
        void detail(const std::string &message) { set(m_detail, message); }

        void progress(int percent)
        {
#ifdef _WIN32
            if (m_bar)
                PostMessageW(m_bar, PBM_SETPOS, static_cast<WPARAM>(std::clamp(percent, 0, 100)), 0);
#else
            // One console line, rewritten in place on a terminal; a line
            // every 10% when the output is a file.
            percent = std::clamp(percent, 0, 100);
            const bool terminal = isatty(STDOUT_FILENO) != 0;
            if (percent == m_lastPercent || (!terminal && percent % 10 != 0 && percent != 100))
                return;
            m_lastPercent = percent;
            std::string detail;
            {
                std::lock_guard<std::mutex> lock(m_lock);
                detail = m_detail;
            }
            if (terminal)
                std::cout << "\r[TS:setup] " << percent << "%  " << detail << "\033[K" << (percent == 100 ? "\n" : "")
                          << std::flush;
            else
                std::cout << "[TS:setup] " << percent << "%  " << detail << std::endl;
#endif
        }

        // The reason the work failed: logged, and shown in a message box.
        void fail(const std::string &message)
        {
            std::cerr << "[TS:setup] " << message << std::endl;
            close();
#ifdef _WIN32
            if (!m_quiet)
                MessageBoxW(nullptr, wide(message).c_str(), m_title.c_str(), MB_OK | MB_ICONERROR | MB_SETFOREGROUND);
#else
            if (!m_quiet)
                showDialog(message);
#endif
        }

        const std::wstring &title() const { return m_title; }
        bool quiet() const { return m_quiet; }

    private:
#ifdef _WIN32
        static constexpr UINT kMsgDestroy = WM_APP + 1;
        static constexpr UINT kMsgText = WM_APP + 2;
        static constexpr int kStatusId = 101, kDetailId = 102, kBarId = 103;

        void set(std::string &slot, const std::string &message)
        {
            {
                std::lock_guard<std::mutex> lock(m_lock);
                slot = message;
            }
            if (m_window)
                PostMessageW(m_window, kMsgText, 0, 0);
        }

        static LRESULT CALLBACK windowProc(HWND window, UINT message, WPARAM wParam, LPARAM lParam)
        {
            auto *self = reinterpret_cast<SetupOutput *>(GetWindowLongPtrW(window, GWLP_USERDATA));
            switch (message)
            {
            case WM_NCCREATE:
                SetWindowLongPtrW(window, GWLP_USERDATA,
                                  reinterpret_cast<LONG_PTR>(reinterpret_cast<CREATESTRUCTW *>(lParam)->lpCreateParams));
                break;
            case kMsgText:
                if (self)
                {
                    std::string status, detail;
                    {
                        std::lock_guard<std::mutex> lock(self->m_lock);
                        status = self->m_status;
                        detail = self->m_detail;
                    }
                    SetDlgItemTextW(window, kStatusId, self->m_cancel.load() ? L"Stopping..." : wide(status).c_str());
                    SetDlgItemTextW(window, kDetailId, wide(detail).c_str());
                }
                return 0;
            case WM_CLOSE:
                if (self && !self->m_cancel.load() &&
                    MessageBoxW(window, L"Stop now? What was made so far is thrown away; you can start again later.",
                                self->m_title.c_str(), MB_YESNO | MB_ICONQUESTION) == IDYES)
                {
                    self->m_cancel = true;
                    SetDlgItemTextW(window, kStatusId, L"Stopping...");
                }
                return 0;
            case kMsgDestroy:
                // The game's own window opens next: let it come to the front
                // (this window has the foreground until now).
                AllowSetForegroundWindow(GetCurrentProcessId());
                DestroyWindow(window);
                return 0;
            case WM_DESTROY:
                PostQuitMessage(0);
                return 0;
            case WM_CTLCOLORSTATIC:
                SetBkMode(reinterpret_cast<HDC>(wParam), TRANSPARENT);
                return reinterpret_cast<LRESULT>(GetSysColorBrush(COLOR_WINDOW));
            }
            return DefWindowProcW(window, message, wParam, lParam);
        }

        void run(std::promise<void> &ready)
        {
            INITCOMMONCONTROLSEX controls{sizeof(controls), ICC_PROGRESS_CLASS};
            InitCommonControlsEx(&controls);
            const HINSTANCE instance = GetModuleHandleW(nullptr);
            WNDCLASSEXW cls{sizeof(cls)};
            cls.lpfnWndProc = windowProc;
            cls.hInstance = instance;
            cls.hCursor = LoadCursorW(nullptr, MAKEINTRESOURCEW(32512)) /* IDC_ARROW */;
            cls.hbrBackground = GetSysColorBrush(COLOR_WINDOW);
            cls.lpszClassName = L"TSSetupProgress";
            cls.hIcon = LoadIconW(nullptr, MAKEINTRESOURCEW(32512)) /* IDI_APPLICATION */;
            RegisterClassExW(&cls);

            NONCLIENTMETRICSW metrics{};
            metrics.cbSize = sizeof(metrics);
            SystemParametersInfoW(SPI_GETNONCLIENTMETRICS, sizeof(metrics), &metrics, 0);
            HFONT font = CreateFontIndirectW(&metrics.lfMessageFont);
            HDC screen = GetDC(nullptr);
            const int dpi = GetDeviceCaps(screen, LOGPIXELSY);
            ReleaseDC(nullptr, screen);
            auto px = [dpi](int value) { return MulDiv(value, dpi, 96); };

            const DWORD style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX;
            RECT frame{0, 0, px(480), px(124)};
            AdjustWindowRectEx(&frame, style, FALSE, 0);
            const int width = frame.right - frame.left, height = frame.bottom - frame.top;
            RECT work{};
            SystemParametersInfoW(SPI_GETWORKAREA, 0, &work, 0);
            HWND window = CreateWindowExW(0, cls.lpszClassName, m_title.c_str(), style,
                                          work.left + (work.right - work.left - width) / 2,
                                          work.top + (work.bottom - work.top - height) / 2, width, height, nullptr,
                                          nullptr, instance, this);
            auto child = [&](const wchar_t *className, DWORD extra, int id, int y, int h)
            {
                HWND control = CreateWindowExW(0, className, L"", WS_CHILD | WS_VISIBLE | extra, px(16), px(y),
                                               px(448), px(h), window,
                                               reinterpret_cast<HMENU>(static_cast<INT_PTR>(id)), instance, nullptr);
                SendMessageW(control, WM_SETFONT, reinterpret_cast<WPARAM>(font), TRUE);
                return control;
            };
            child(L"STATIC", SS_LEFT | SS_NOPREFIX, kStatusId, 14, 36);
            HWND bar = child(PROGRESS_CLASSW, 0, kBarId, 56, 20);
            SendMessageW(bar, PBM_SETRANGE32, 0, 100);
            child(L"STATIC", SS_LEFT | SS_NOPREFIX | SS_PATHELLIPSIS, kDetailId, 88, 20);
            m_bar = bar;
            m_window = window;
            ShowWindow(window, SW_SHOWNORMAL);
            SetForegroundWindow(window);
            PostMessageW(window, kMsgText, 0, 0);
            ready.set_value();

            MSG msg;
            while (GetMessageW(&msg, nullptr, 0, 0) > 0)
            {
                TranslateMessage(&msg);
                DispatchMessageW(&msg);
            }
            m_bar = nullptr;
            m_window = nullptr;
            DeleteObject(font);
        }

        std::thread m_thread;
        std::atomic<HWND> m_window{nullptr};
        std::atomic<HWND> m_bar{nullptr};
#else
        void set(std::string &slot, const std::string &message)
        {
            std::lock_guard<std::mutex> lock(m_lock);
            slot = message;
        }

        // zenity's error dialog, when there is a display to show it on and
        // zenity is installed; otherwise the console message is all there is.
        void showDialog(const std::string &message) const
        {
            if (!std::getenv("DISPLAY") && !std::getenv("WAYLAND_DISPLAY"))
                return;
            const std::string title(m_title.begin(), m_title.end());
            const std::string titleArg = "--title=" + title;
            const std::string textArg = "--text=" + message;
            const pid_t pid = fork();
            if (pid == 0)
            {
                execlp("zenity", "zenity", "--error", "--width=420", "--no-markup", titleArg.c_str(), textArg.c_str(),
                       static_cast<char *>(nullptr));
                _exit(127);
            }
            if (pid > 0)
            {
                int status = 0;
                waitpid(pid, &status, 0);
            }
        }

        int m_lastPercent = -1;
#endif
        std::wstring m_title;
        bool m_quiet = false;
        std::atomic<bool> m_cancel{false};
        std::mutex m_lock;
        std::string m_status, m_detail;
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

    // Copies `files` from the disc into `target`, the progress bar going from
    // `from` to `to` percent. Fails with "stopped" when the window is closed.
    bool extract(DiscImage &image, const std::vector<DiscFile> &files, const fs::path &target, SetupOutput &out,
                 int from, int to, std::string &error)
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

        std::cout << "[TS:setup] Unpacking " << files.size() << " files (" << megabytes(total) << ") into "
                  << text(target) << std::endl;
        std::vector<uint8_t> buffer(256u * kSector);
        uint64_t done = 0;
        for (const DiscFile &file : files)
        {
            out.detail(file.path);
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
                if (out.cancelled())
                {
                    error = "stopped";
                    return false;
                }
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
                out.progress(from + static_cast<int>(total ? done * static_cast<uint64_t>(to - from) / total : 0));
            }
            output.close();
            if (!output || fs::file_size(path, ec) != file.size || ec)
            {
                error = "Could not write " + text(path) + " (disk full?)";
                return false;
            }
        }
        out.progress(to);
        return true;
    }

    // A disc dump the player has: the file they see and the file holding the
    // sectors (a .cue names its .bin).
    struct Candidate
    {
        fs::path shown;
        fs::path image;
        uint64_t start = 0;
        std::string problem; // set when it cannot be used
    };

    Candidate candidateFor(const fs::path &file)
    {
        Candidate candidate{file, file, 0, {}};
        if (lower(text(file.extension())) == ".cue")
        {
            std::string problem;
            if (!readCue(file, candidate.image, candidate.start, problem))
                candidate.problem = "the cue sheet " + problem;
        }
        return candidate;
    }

    // Disc dumps in a folder: cue sheets first (with their .bin), then .iso
    // files, then .bin files no cue sheet named.
    std::vector<Candidate> candidatesIn(const fs::path &dir)
    {
        std::error_code ec;
        std::vector<fs::path> cues, isos, bins;
        for (const auto &entry : fs::directory_iterator(dir, ec))
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

        std::vector<Candidate> candidates;
        std::set<std::string> binsNamedByCues;
        for (const fs::path &cue : cues)
        {
            Candidate candidate = candidateFor(cue);
            if (candidate.problem.empty())
                binsNamedByCues.insert(lower(text(fs::weakly_canonical(candidate.image, ec))));
            candidates.push_back(candidate);
        }
        for (const fs::path &iso : isos)
            candidates.push_back({iso, iso, 0, {}});
        for (const fs::path &bin : bins)
        {
            if (!binsNamedByCues.count(lower(text(fs::weakly_canonical(bin, ec)))))
                candidates.push_back({bin, bin, 0, {}});
        }
        return candidates;
    }

    // Opens a candidate and reads its file tree; false (and candidate.problem
    // set) when it is not a TimeSplitters (USA) disc.
    bool openCandidate(Candidate &candidate, std::optional<DiscImage> &image, std::vector<DiscFile> &files)
    {
        files.clear();
        image.reset();
        if (!candidate.problem.empty())
            return false;
        image = probeImage(candidate.image, candidate.start);
        if (!image)
        {
            candidate.problem = "it is not a CD/DVD image this game can read (no ISO 9660 volume found)";
            return false;
        }
        if (!readDisc(*image, files, candidate.problem))
        {
            image.reset();
            return false;
        }
        return true;
    }

    std::string describe(const Candidate &candidate, const DiscImage &image)
    {
        return text(candidate.shown) +
               (candidate.image != candidate.shown ? " (" + text(candidate.image.filename()) + ")" : std::string()) +
               ", " + image.kind;
    }

#ifdef _WIN32
    // The Windows file or folder dialog; empty when the player cancels.
    fs::path pickWithDialog(bool folder, const fs::path &start, const wchar_t *title)
    {
        IFileOpenDialog *dialog = nullptr;
        if (FAILED(CoCreateInstance(__uuidof(FileOpenDialog), nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&dialog))))
            return {};
        DWORD options = 0;
        dialog->GetOptions(&options);
        dialog->SetOptions(options | FOS_FORCEFILESYSTEM | FOS_PATHMUSTEXIST |
                           (folder ? FOS_PICKFOLDERS : FOS_FILEMUSTEXIST));
        dialog->SetTitle(title);
        if (!folder)
        {
            const COMDLG_FILTERSPEC filters[] = {
                {L"TimeSplitters disc dump (*.cue, *.bin, *.iso)", L"*.cue;*.bin;*.iso"},
                {L"All files", L"*.*"}};
            dialog->SetFileTypes(2, filters);
        }
        IShellItem *item = nullptr;
        if (SUCCEEDED(SHCreateItemFromParsingName(start.c_str(), nullptr, IID_PPV_ARGS(&item))))
        {
            dialog->SetFolder(item);
            item->Release();
        }
        fs::path result;
        if (SUCCEEDED(dialog->Show(nullptr)))
        {
            IShellItem *chosen = nullptr;
            if (SUCCEEDED(dialog->GetResult(&chosen)))
            {
                PWSTR path = nullptr;
                if (SUCCEEDED(chosen->GetDisplayName(SIGDN_FILESYSPATH, &path)))
                {
                    result = path;
                    CoTaskMemFree(path);
                }
                chosen->Release();
            }
        }
        dialog->Release();
        return result;
    }
#endif

    fs::path executableDir(const char *argv0)
    {
#ifdef _WIN32
        std::wstring buffer(32768, L'\0');
        const DWORD size = GetModuleFileNameW(nullptr, buffer.data(), static_cast<DWORD>(buffer.size()));
        if (size > 0 && size < buffer.size())
        {
            buffer.resize(size);
            return fs::path(buffer).parent_path();
        }
#elif defined(__linux__)
        {
            std::error_code linkEc;
            const fs::path exe = fs::read_symlink("/proc/self/exe", linkEc);
            if (!linkEc && !exe.empty())
                return exe.parent_path();
        }
#endif
        std::error_code ec;
        return fs::absolute(argv0, ec).parent_path();
    }

    std::string duration(double seconds)
    {
        const int total = static_cast<int>(seconds + 0.5);
        return total >= 60 ? std::to_string(total / 60) + " min " + std::to_string(total % 60) + " s"
                           : std::to_string(total) + " s";
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

    std::vector<Candidate> candidates = candidatesIn(exeDir);
    if (candidates.empty())
    {
        out.fail("TimeSplitters could not find its game files.\n\n"
                 "Put your TimeSplitters (USA) disc dump (a .bin with its .cue, a .bin, or an .iso) in this folder:\n\n" +
                 text(exeDir) +
                 "\n\nthen start the game again. The first start unpacks it into the game-data folder there; "
                 "after that the disc dump is not needed.");
        return {};
    }

    std::string report;
    for (Candidate &candidate : candidates)
    {
        std::vector<DiscFile> files;
        std::optional<DiscImage> image;
        if (!openCandidate(candidate, image, files))
        {
            report += "\n" + text(candidate.shown.filename()) + ": " + candidate.problem;
            std::cerr << "[TS:setup] " << text(candidate.shown) << ": " << candidate.problem << std::endl;
            continue;
        }

        out.open();
        out.line("First start: unpacking the game files from your disc dump.\n"
                 "This happens once and takes a minute or two.");
        std::cout << "[TS:setup] Disc dump: " << describe(candidate, *image) << std::endl;

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
        if (!extract(*image, files, partial, out, 0, 100, error))
        {
            image->in.close();
            fs::remove_all(partial, ec);
            out.fail(error == "stopped" ? "Unpacking the game files was stopped. Start the game again to unpack them."
                                        : "Unpacking the game files failed.\n\n" + error);
            return {};
        }
        image->in.close();
        fs::rename(partial, target, ec);
        if (ec)
        {
            out.fail("Could not rename\n" + text(partial) + "\nto\n" + text(target) + "\n\n" + ec.message());
            return {};
        }
        out.close();
        std::cout << "[TS:setup] Done: " << files.size() << " files in " << text(target)
                  << ". The disc dump is no longer needed. Starting the game." << std::endl;
        return target;
    }

    out.fail("TimeSplitters could not use the disc dump in\n" + text(exeDir) + "\n" + report +
             "\n\nIt needs a dump of TimeSplitters (USA) for the PlayStation 2: a .bin with its .cue, a .bin, or an .iso.");
    return {};
}

int tsPrepareXboxFiles(int argc, char **argv)
{
    using Clock = std::chrono::steady_clock;
    fs::path dumpArg, outArg;
    bool quiet = false;
    for (int i = 2; i < argc; ++i)
    {
        const std::string arg = argv[i];
        if (arg == "--dump" && i + 1 < argc)
            dumpArg = fromUtf8(argv[++i]);
        else if (arg == "--out" && i + 1 < argc)
            outArg = fromUtf8(argv[++i]);
        else if (arg == "--quiet")
            quiet = true;
        else
        {
            std::cerr << "Usage: timesplitters --prepare-xbox [--dump FILE] [--out FOLDER] [--quiet]" << std::endl;
            return 2;
        }
    }
    const fs::path exeDir = executableDir(argv[0]);
    SetupOutput out(L"Prepare Xbox Files");
    out.setQuiet(quiet);
#ifdef _WIN32
    CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED | COINIT_DISABLE_OLE1DDE);
#endif
    std::error_code ec;
    const std::string what =
        "It needs your own dump of the TimeSplitters (USA) PlayStation 2 disc: a .bin with its .cue, a .bin, or an .iso.";

    // 1. The disc dump: given, next to the game, or picked by the player.
    Candidate chosen;
    std::optional<DiscImage> image;
    std::vector<DiscFile> files;
    if (!dumpArg.empty())
    {
        chosen = candidateFor(fs::absolute(dumpArg, ec));
        if (!openCandidate(chosen, image, files))
        {
            out.fail(text(chosen.shown) + " cannot be used: " + chosen.problem + ".\n\n" + what);
            return 2;
        }
    }
    else
    {
        bool found = false;
        for (Candidate &candidate : candidatesIn(exeDir))
        {
            if (openCandidate(candidate, image, files))
            {
                chosen = candidate;
                found = true;
                break;
            }
        }
        while (!found)
        {
#ifdef _WIN32
            if (quiet)
#endif
            {
                out.fail("No TimeSplitters (USA) disc dump was found in " + text(exeDir) + ".\n\n" + what);
                return 2;
            }
#ifdef _WIN32
            const fs::path picked =
                pickWithDialog(false, exeDir, L"Prepare Xbox Files: choose your TimeSplitters (USA) disc dump");
            if (picked.empty())
                return 1;
            chosen = candidateFor(picked);
            if (openCandidate(chosen, image, files))
                found = true;
            else
                MessageBoxW(nullptr,
                            wide(text(picked) + " cannot be used: " + chosen.problem + ".\n\n" + what +
                                 "\n\nChoose another file.").c_str(),
                            out.title().c_str(), MB_OK | MB_ICONWARNING);
#endif
        }
    }
    std::cout << "[TS:setup] Disc dump: " << describe(chosen, *image) << std::endl;

    // 2. The folder to make.
    fs::path target;
    if (!outArg.empty())
        target = fs::absolute(outArg, ec);
    else if (quiet)
        target = exeDir / "TSRecomp";
    else
    {
#ifdef _WIN32
        const fs::path picked = pickWithDialog(
            true, exeDir, L"Prepare Xbox Files: choose where to make the TSRecomp folder for your Xbox");
        if (picked.empty())
            return 1;
        target = lower(text(picked.filename())) == "tsrecomp" ? picked : picked / "TSRecomp";
#endif
    }
    target = target.lexically_normal();
    if (!target.has_filename())
        target = target.parent_path();
    const fs::path parent = target.parent_path();
    const fs::path partial = parent / (target.filename().native() + fs::path(".partial").native());
    const fs::path old = parent / (target.filename().native() + fs::path(".old").native());
    bool replacing = false;
    if (fs::exists(target, ec))
    {
        const bool ours = fs::exists(target / "ps2disc.iso", ec) || fs::exists(target / "default.xbe", ec) ||
                          fs::exists(target / "textures.xtp", ec) || fs::exists(target / "game-data", ec) ||
                          (fs::is_directory(target, ec) && fs::is_empty(target, ec));
        if (!ours)
        {
            out.fail(text(target) + " already exists and is not a folder Prepare Xbox Files made.\n\n"
                     "Choose another place, or move that folder away first.");
            return 2;
        }
#ifdef _WIN32
        if (!quiet && MessageBoxW(nullptr,
                                  wide(text(target) + " already exists.\n\nReplace it with a new one?").c_str(),
                                  out.title().c_str(), MB_YESNO | MB_ICONQUESTION) != IDYES)
            return 1;
#endif
        replacing = true;
    }

    // The Xbox program, shipped next to the game in "xbox" (or, in the
    // development checkout, the Xbox build's output).
    const char *xboxFiles[] = {"default.xbe", "TitleMeta.xbx", "TitleImage.xbx", "SaveImage.xbx"};
    fs::path xboxDir;
    for (const fs::path &dir : {exeDir / "xbox", exeDir / "build" / "xbox" / "iso"})
    {
        bool all = true;
        for (const char *name : xboxFiles)
            all = all && fs::is_regular_file(dir / name, ec);
        if (all)
        {
            xboxDir = dir;
            break;
        }
    }

    // What goes into game-data: the disc's files without the filler.
    std::vector<DiscFile> deploy;
    uint64_t deployBytes = 0;
    const DiscFile *miscPak = nullptr;
    for (const DiscFile &file : files)
    {
        const std::string upper = [&]
        {
            std::string u = file.path;
            std::transform(u.begin(), u.end(), u.begin(), [](unsigned char c) { return static_cast<char>(std::toupper(c)); });
            return u;
        }();
        if (upper == "1" || upper == "2" || upper == "3" || upper == "4" || upper == "ZDATA1")
            continue;
        if (upper == "PAK/MISC.PAK")
            miscPak = &file;
        deploy.push_back(file);
        deployBytes += file.size;
    }
    if (!miscPak)
    {
        out.fail(text(chosen.shown) + " has no PAK/MISC.PAK.\n\n" + what);
        return 2;
    }
    const uint64_t imageBytes = fs::file_size(image->file, ec) - std::min<uint64_t>(image->start, fs::file_size(image->file, ec));
    const uint64_t isoBytes = image->rawSector == kSector ? imageBytes : imageBytes / image->rawSector * kSector;
    uint64_t xboxBytes = 0;
    if (!xboxDir.empty())
        for (const char *name : xboxFiles)
            xboxBytes += fs::file_size(xboxDir / name, ec);
    const uint64_t needed = isoBytes + deployBytes + 16u * 1024u * 1024u + xboxBytes;
    const fs::space_info space = fs::space(parent, ec);
    if (!ec && space.available < needed + 64u * 1024u * 1024u)
    {
        out.fail("There is not enough free space in\n" + text(parent) + "\n\nThe Xbox folder needs about " +
                 megabytes(needed) + ".");
        return 2;
    }

    out.open();
    const auto started = Clock::now();
    auto stepDone = [&, last = Clock::now()](const char *name) mutable
    {
        const auto now = Clock::now();
        std::cout << "[TS:setup] " << name << ": " << std::chrono::duration<double>(now - last).count() << " s" << std::endl;
        last = now;
    };
    auto abandon = [&](const std::string &message) -> int
    {
        image->in.close();
        fs::remove_all(partial, ec);
        out.fail(message == "stopped" ? "Prepare Xbox Files was stopped. Nothing was kept; you can start it again."
                                      : "Prepare Xbox Files failed.\n\n" + message);
        return message == "stopped" ? 1 : 3;
    };
    fs::remove_all(partial, ec);
    if (ec)
        return abandon("Could not remove the unfinished folder from an earlier run:\n" + text(partial));
    fs::create_directories(partial, ec);
    if (ec)
        return abandon("Could not create the folder\n" + text(partial) + "\n\n" + ec.message());

    // Step 1: the disc image, as 2048-byte sectors.
    const fs::path iso = partial / "ps2disc.iso";
    out.line("Step 1 of 4: making the disc image (ps2disc.iso)");
    out.detail(text(chosen.shown.filename()));
    {
        std::ofstream output(iso, std::ios::binary | std::ios::trunc);
        if (!output)
            return abandon("Could not create " + text(iso));
        std::vector<uint8_t> buffer(512u * kSector);
        uint64_t done = 0;
        if (image->rawSector == kSector)
        {
            std::ifstream input(image->file, std::ios::binary);
            input.seekg(static_cast<std::streamoff>(image->start));
            while (done < isoBytes)
            {
                if (out.cancelled())
                    return abandon("stopped");
                const size_t bytes = static_cast<size_t>(std::min<uint64_t>(buffer.size(), isoBytes - done));
                input.read(reinterpret_cast<char *>(buffer.data()), static_cast<std::streamsize>(bytes));
                if (static_cast<size_t>(input.gcount()) != bytes)
                    return abandon("Could not read " + text(image->file));
                output.write(reinterpret_cast<const char *>(buffer.data()), static_cast<std::streamsize>(bytes));
                if (!output)
                    return abandon("Could not write " + text(iso) + " (disk full?)");
                done += bytes;
                out.progress(static_cast<int>(done * 40u / isoBytes));
            }
        }
        else
        {
            const uint32_t sectors = static_cast<uint32_t>(isoBytes / kSector);
            for (uint32_t lbn = 0; lbn < sectors;)
            {
                if (out.cancelled())
                    return abandon("stopped");
                const uint32_t count = std::min<uint32_t>(512u, sectors - lbn);
                if (!image->read(lbn, count, buffer.data()))
                    return abandon("Could not read " + text(image->file) + " (the file is cut short?)");
                output.write(reinterpret_cast<const char *>(buffer.data()), static_cast<std::streamsize>(count) * kSector);
                if (!output)
                    return abandon("Could not write " + text(iso) + " (disk full?)");
                lbn += count;
                out.progress(static_cast<int>(uint64_t(lbn) * 40u / sectors));
            }
        }
        output.close();
        if (!output)
            return abandon("Could not write " + text(iso) + " (disk full?)");
    }
    image->in.close();
    stepDone("disc image");

    // Step 2: the game's files, read back from the new image (before its
    // MISC.PAK gets the Xbox buttons: game-data keeps the disc's own).
    out.line("Step 2 of 4: unpacking the game files (game-data)");
    {
        DiscImage copy;
        copy.file = iso;
        copy.kind = "ISO";
        std::string error;
        if (!extract(copy, deploy, partial / "game-data", out, 40, 75, error))
        {
            copy.in.close();
            return abandon(error);
        }
    }
    stepDone("game files");

    // Step 3: the Xbox button glyphs, written into the image's MISC.PAK.
    out.line("Step 3 of 4: putting the Xbox controller buttons into the disc image");
    out.detail("PAK/MISC.PAK");
    {
        int replaced = 0;
        std::string error;
        if (!tsxbox::patchXboxGlyphs(iso, replaced, error))
            return abandon(error);
        std::cout << "[TS:setup] button textures replaced: " << replaced << std::endl;
    }
    out.progress(76);
    stepDone("button glyphs");

    // Step 4: the texture pack, from the disc's own MISC.PAK.
    out.line("Step 4 of 4: building the texture pack (textures.xtp)\nThis takes the longest.");
    out.detail("PAK/MISC.PAK");
    {
        const fs::path pakPath = partial / "game-data" / "PAK" / "MISC.PAK";
        std::ifstream input(pakPath, std::ios::binary);
        std::vector<uint8_t> pak(static_cast<size_t>(fs::file_size(pakPath, ec)));
        input.read(reinterpret_cast<char *>(pak.data()), static_cast<std::streamsize>(pak.size()));
        if (ec || static_cast<size_t>(input.gcount()) != pak.size())
            return abandon("Could not read " + text(pakPath));
        tsxbox::PackStats stats;
        std::string error;
        std::atomic<bool> cancel{false};
        std::atomic<bool> finished{false};
        // The build checks this flag; the window's Stop sets the other one.
        std::thread watch([&]
        {
            while (!finished.load())
            {
                if (out.cancelled())
                    cancel = true;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
        });
        const bool built = tsxbox::buildXboxTexturePack(pak, partial / "textures.xtp",
                                                        [&](int percent) { out.progress(76 + percent * 22 / 100); },
                                                        &cancel, stats, error);
        finished = true;
        watch.join();
        if (!built)
            return abandon(cancel.load() ? "stopped" : error);
        std::cout << "[TS:setup] textures.xtp: " << stats.entries << " entries, " << stats.bytes << " bytes (DXT1 "
                  << stats.perFormat[0] << ", DXT5 " << stats.perFormat[1] << ", A8R8G8B8 " << stats.perFormat[2]
                  << ", A1R5G5B5 " << stats.perFormat[3] << ")" << std::endl;
    }
    stepDone("texture pack");

    // The Xbox program.
    if (!xboxDir.empty())
    {
        out.detail("default.xbe");
        for (const char *name : xboxFiles)
        {
            fs::copy_file(xboxDir / name, partial / name, fs::copy_options::overwrite_existing, ec);
            if (ec)
                return abandon("Could not copy " + text(xboxDir / name) + "\n\n" + ec.message());
        }
    }
    if (out.cancelled())
        return abandon("stopped");

    // Complete: only now does the folder get its name.
    if (replacing)
    {
        fs::remove_all(old, ec);
        fs::rename(target, old, ec);
        if (ec)
            return abandon("Could not move the old " + text(target) + " out of the way (is a file in it open?)\n\n" +
                           ec.message());
    }
    fs::rename(partial, target, ec);
    if (ec)
        return abandon("Could not rename\n" + text(partial) + "\nto\n" + text(target) + "\n\n" + ec.message());
    if (replacing)
        fs::remove_all(old, ec);
    out.progress(100);
    out.close();

    uint64_t folderBytes = 0;
    for (const auto &entry : fs::recursive_directory_iterator(target, ec))
    {
        std::error_code typeEc;
        if (entry.is_regular_file(typeEc))
            folderBytes += entry.file_size(typeEc);
    }
    const double seconds = std::chrono::duration<double>(Clock::now() - started).count();
    std::cout << "[TS:setup] Done in " << seconds << " s: " << text(target) << " (" << folderBytes << " bytes)"
              << std::endl;
    std::string message = "The Xbox files are ready (it took " + duration(seconds) + "):\n\n" + text(target) +
                          "\n\nCopy the whole TSRecomp folder to the Xbox hard disk, for example to E:\\TSRecomp "
                          "(with an FTP program), and start default.xbe in it. It needs " +
                          megabytes(folderBytes) + " of free space there.";
    if (xboxDir.empty())
        message += "\n\nNot included: the Xbox program (default.xbe, TitleMeta.xbx, TitleImage.xbx, SaveImage.xbx) "
                   "was not found in\n" + text(exeDir / "xbox") +
                   "\nPut those four files into the TSRecomp folder before copying it.";
    if (quiet)
    {
        std::cout << "[TS:setup] " << message << std::endl;
        return 0;
    }
#ifdef _WIN32
    message += "\n\nOpen the folder now?";
    if (MessageBoxW(nullptr, wide(message).c_str(), out.title().c_str(),
                    MB_YESNO | (xboxDir.empty() ? MB_ICONWARNING : MB_ICONINFORMATION) | MB_SETFOREGROUND) == IDYES)
        ShellExecuteW(nullptr, L"open", target.c_str(), nullptr, nullptr, SW_SHOWNORMAL);
#endif
    return 0;
}
