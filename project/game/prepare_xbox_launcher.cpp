// "Prepare Xbox Files.exe": starts timesplitters.exe from its own folder in
// its Prepare Xbox Files mode (disc_setup.h). A Windows (GUI) program, so no
// console window opens. A disc dump dropped onto it is passed on as --dump.
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#include <shellapi.h>

#include <string>

#pragma comment(lib, "shell32.lib")

int WINAPI wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
    std::wstring self(32768, L'\0');
    self.resize(GetModuleFileNameW(nullptr, self.data(), static_cast<DWORD>(self.size())));
    const std::wstring dir = self.substr(0, self.find_last_of(L"\\/"));
    const std::wstring exe = dir + L"\\timesplitters.exe";
    if (GetFileAttributesW(exe.c_str()) == INVALID_FILE_ATTRIBUTES)
    {
        MessageBoxW(nullptr, (L"timesplitters.exe was not found next to this program:\n\n" + dir).c_str(),
                    L"Prepare Xbox Files", MB_OK | MB_ICONERROR);
        return 1;
    }
    std::wstring command = L"\"" + exe + L"\" --prepare-xbox";
    int argc = 0;
    if (LPWSTR *argv = CommandLineToArgvW(GetCommandLineW(), &argc))
    {
        if (argc >= 2)
            command += L" --dump \"" + std::wstring(argv[1]) + L"\"";
        LocalFree(argv);
    }
    AllowSetForegroundWindow(ASFW_ANY);
    STARTUPINFOW startup{};
    startup.cb = sizeof(startup);
    PROCESS_INFORMATION process{};
    if (!CreateProcessW(exe.c_str(), command.data(), nullptr, nullptr, FALSE, 0, nullptr, dir.c_str(), &startup,
                        &process))
    {
        MessageBoxW(nullptr, (L"Could not start\n" + exe).c_str(), L"Prepare Xbox Files", MB_OK | MB_ICONERROR);
        return 1;
    }
    CloseHandle(process.hThread);
    CloseHandle(process.hProcess);
    return 0;
}
