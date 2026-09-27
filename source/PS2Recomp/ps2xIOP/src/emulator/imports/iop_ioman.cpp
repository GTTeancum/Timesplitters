#include "iop_ioman.h"

#include "../core/iop_cpu.h"
#include "../core/iop_memory.h"
#include "../services/iop_rpc.h"
#include "ps2x/iop/iop_host.h"

#include <cstdio>
#include <cstdlib>
#include <vector>

#include <algorithm>

namespace ps2x::iop::detail
{
    IopIoman::IopIoman(IopMemory &memory, IopHost &host) noexcept
        : m_memory(memory), m_host(host)
    {
    }

    void IopIoman::reset()
    {
        m_devices.clear();
        for (auto &file : m_files)
            m_host.closeHostFile(file.second.handle);
        m_files.clear();
        m_nextFd = 3;
    }

    bool IopIoman::dispatchImport(uint16_t ordinal, IopCpuState &cpu, IopGuestExecutor &executor)
    {
        constexpr size_t kMaxDevices = 16u;
        const uint32_t a0 = cpu.gpr[4];
        const auto setV0 = [&](uint32_t value)
        {
            cpu.gpr[2] = value;
        };

        constexpr uint32_t kErrorNoEntry = static_cast<uint32_t>(-2);
        constexpr uint32_t kErrorBadFd = static_cast<uint32_t>(-9);
        switch (ordinal)
        {
        case 4: // open(name, mode): read-only host files
        {
            const std::string name = m_memory.readString(a0, 1024u);
            std::string hostPath = m_host.translateGuestPath(name);
            if (hostPath.empty())
            {
                // "cdrom0:/DIR/FILE;1": retry without the ISO version suffix
                std::string trimmed = name;
                if (const size_t semicolon = trimmed.rfind(';'); semicolon != std::string::npos)
                    trimmed.erase(semicolon);
                hostPath = m_host.translateGuestPath(trimmed);
            }
            const uint64_t handle = hostPath.empty() ? 0u : m_host.openHostFile(hostPath);
            uint64_t size = 0u;
            if (handle == 0u || !m_host.hostFileSize(handle, size))
            {
                if (handle != 0u)
                    m_host.closeHostFile(handle);
                std::fprintf(stderr, "[ps2xIOP] ioman open failed: %s\n", name.c_str());
                setV0(kErrorNoEntry);
                return true;
            }
            const int32_t fd = m_nextFd++;
            m_files[fd] = {handle, size, 0u};
            setV0(static_cast<uint32_t>(fd));
            return true;
        }
        case 5: // close(fd)
        {
            const auto file = m_files.find(static_cast<int32_t>(a0));
            if (file == m_files.end())
            {
                setV0(kErrorBadFd);
                return true;
            }
            m_host.closeHostFile(file->second.handle);
            m_files.erase(file);
            setV0(0u);
            return true;
        }
        case 6: // read(fd, buffer, size)
        {
            const auto file = m_files.find(static_cast<int32_t>(a0));
            if (file == m_files.end())
            {
                setV0(kErrorBadFd);
                return true;
            }
            OpenFile &f = file->second;
            const uint32_t buffer = cpu.gpr[5];
            const uint64_t remaining = f.size > f.position ? f.size - f.position : 0u;
            const size_t wanted = static_cast<size_t>(std::min<uint64_t>(cpu.gpr[6], remaining));
            std::vector<uint8_t> bytes(wanted);
            size_t got = 0u;
            if (wanted != 0u &&
                (!m_host.readHostFile(f.handle, f.position, bytes.data(), wanted, got) ||
                 !m_memory.writeRam(buffer, bytes.data(), got)))
                got = 0u;
            f.position += got;
            setV0(static_cast<uint32_t>(got));
            return true;
        }
        case 8: // lseek(fd, offset, whence)
        {
            const auto file = m_files.find(static_cast<int32_t>(a0));
            if (file == m_files.end())
            {
                setV0(kErrorBadFd);
                return true;
            }
            OpenFile &f = file->second;
            const int64_t offset = static_cast<int32_t>(cpu.gpr[5]);
            const uint32_t whence = cpu.gpr[6];
            const int64_t base = whence == 1u ? static_cast<int64_t>(f.position)
                                 : whence == 2u ? static_cast<int64_t>(f.size)
                                                : 0;
            const int64_t target = std::clamp<int64_t>(base + offset, 0, static_cast<int64_t>(f.size));
            f.position = static_cast<uint64_t>(target);
            setV0(static_cast<uint32_t>(target));
            return true;
        }
        case 20: // AddDrv
        {
            if (a0 == 0u || m_devices.size() >= kMaxDevices)
            {
                setV0(0xFFFFFFFFu);
                return true;
            }

            const uint32_t nameAddress = m_memory.read32(a0);
            const uint32_t operations = m_memory.read32(a0 + 16u);
            const std::string name = m_memory.readString(nameAddress, 64u);
            if (nameAddress == 0u || operations == 0u || name.empty())
            {
                setV0(0xFFFFFFFFu);
                return true;
            }

            m_devices.push_back({a0, cpu.gpr[28], name});
            const uint32_t init = m_memory.read32(operations);
            if (init != 0u)
            {
                const int32_t result = static_cast<int32_t>(
                    executor.executeGuestFunction(init, a0, 0u, 0u, 0u, cpu.gpr[28]));
                if (result < 0)
                {
                    m_devices.pop_back();
                    setV0(0xFFFFFFFFu);
                    return true;
                }
            }

            setV0(0u);
            return true;
        }
        case 21: // DelDrv
        {
            const std::string name = m_memory.readString(a0, 64u);
            const auto device = std::find_if(
                m_devices.begin(), m_devices.end(),
                [&](const Device &candidate)
                { return candidate.name == name; });
            if (device == m_devices.end())
            {
                setV0(0xFFFFFFFFu);
                return true;
            }

            const uint32_t operations = m_memory.read32(device->address + 16u);
            const uint32_t deinit = operations != 0u ? m_memory.read32(operations + 4u) : 0u;
            if (deinit != 0u)
                (void)executor.executeGuestFunction(deinit, device->address, 0u, 0u, 0u, device->gp);
            m_devices.erase(device);
            setV0(0u);
            return true;
        }
        default:
            return false;
        }
    }
}
