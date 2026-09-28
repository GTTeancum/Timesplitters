// std::filesystem for the Xbox.
//
// nxdk's libc++ 10 ships the <filesystem> header but not its library. This
// file supplies the parts the shared runtime uses:
//   - path parsing, copied from libc++ 10 src/filesystem/operations.cpp
//     (Apache-2.0 WITH LLVM-exception) with '\' accepted as a separator as
//     well as '/', because Xbox paths look like "D:\game-data\PAK";
//   - file operations and directory iteration on nxdk's Win32 API;
//   - ps2xXboxFopen, which the prelude substitutes for fopen so paths built
//     with '/' still open (the Xbox kernel only accepts '\').
#include <cstring>
#include <filesystem>
#include <memory>
#include <string>
#include <system_error>
#include <vector>

#define NOMINMAX
#include <windows.h>

_LIBCPP_BEGIN_NAMESPACE_FILESYSTEM

namespace {
namespace parser {

using string_view_t = path::__string_view;
using string_view_pair = pair<string_view_t, string_view_t>;
using PosPtr = path::value_type const*;

// Xbox paths use '\'; paths built with operator/ use '/'. Both separate.
inline bool isSep(char c) noexcept { return c == '/' || c == 0x5C; }

struct PathParser {
  enum ParserState : unsigned char {
    // Zero is a special sentinel value used by default constructed iterators.
    PS_BeforeBegin = path::iterator::_BeforeBegin,
    PS_InRootName = path::iterator::_InRootName,
    PS_InRootDir = path::iterator::_InRootDir,
    PS_InFilenames = path::iterator::_InFilenames,
    PS_InTrailingSep = path::iterator::_InTrailingSep,
    PS_AtEnd = path::iterator::_AtEnd
  };

  const string_view_t Path;
  string_view_t RawEntry;
  ParserState State;

private:
  PathParser(string_view_t P, ParserState State) noexcept : Path(P),
                                                            State(State) {}

public:
  PathParser(string_view_t P, string_view_t E, unsigned char S)
      : Path(P), RawEntry(E), State(static_cast<ParserState>(S)) {
    // S cannot be '0' or PS_BeforeBegin.
  }

  static PathParser CreateBegin(string_view_t P) noexcept {
    PathParser PP(P, PS_BeforeBegin);
    PP.increment();
    return PP;
  }

  static PathParser CreateEnd(string_view_t P) noexcept {
    PathParser PP(P, PS_AtEnd);
    return PP;
  }

  PosPtr peek() const noexcept {
    auto TkEnd = getNextTokenStartPos();
    auto End = getAfterBack();
    return TkEnd == End ? nullptr : TkEnd;
  }

  void increment() noexcept {
    const PosPtr End = getAfterBack();
    const PosPtr Start = getNextTokenStartPos();
    if (Start == End)
      return makeState(PS_AtEnd);

    switch (State) {
    case PS_BeforeBegin: {
      PosPtr TkEnd = consumeSeparator(Start, End);
      if (TkEnd)
        return makeState(PS_InRootDir, Start, TkEnd);
      else
        return makeState(PS_InFilenames, Start, consumeName(Start, End));
    }
    case PS_InRootDir:
      return makeState(PS_InFilenames, Start, consumeName(Start, End));

    case PS_InFilenames: {
      PosPtr SepEnd = consumeSeparator(Start, End);
      if (SepEnd != End) {
        PosPtr TkEnd = consumeName(SepEnd, End);
        if (TkEnd)
          return makeState(PS_InFilenames, SepEnd, TkEnd);
      }
      return makeState(PS_InTrailingSep, Start, SepEnd);
    }

    case PS_InTrailingSep:
      return makeState(PS_AtEnd);

    case PS_InRootName:
    case PS_AtEnd:
      _LIBCPP_UNREACHABLE();
    }
  }

  void decrement() noexcept {
    const PosPtr REnd = getBeforeFront();
    const PosPtr RStart = getCurrentTokenStartPos() - 1;
    if (RStart == REnd) // we're decrementing the begin
      return makeState(PS_BeforeBegin);

    switch (State) {
    case PS_AtEnd: {
      // Try to consume a trailing separator or root directory first.
      if (PosPtr SepEnd = consumeSeparator(RStart, REnd)) {
        if (SepEnd == REnd)
          return makeState(PS_InRootDir, Path.data(), RStart + 1);
        return makeState(PS_InTrailingSep, SepEnd + 1, RStart + 1);
      } else {
        PosPtr TkStart = consumeName(RStart, REnd);
        return makeState(PS_InFilenames, TkStart + 1, RStart + 1);
      }
    }
    case PS_InTrailingSep:
      return makeState(PS_InFilenames, consumeName(RStart, REnd) + 1,
                       RStart + 1);
    case PS_InFilenames: {
      PosPtr SepEnd = consumeSeparator(RStart, REnd);
      if (SepEnd == REnd)
        return makeState(PS_InRootDir, Path.data(), RStart + 1);
      PosPtr TkEnd = consumeName(SepEnd, REnd);
      return makeState(PS_InFilenames, TkEnd + 1, SepEnd + 1);
    }
    case PS_InRootDir:
      // return makeState(PS_InRootName, Path.data(), RStart + 1);
    case PS_InRootName:
    case PS_BeforeBegin:
      _LIBCPP_UNREACHABLE();
    }
  }

  /// \brief Return a view with the "preferred representation" of the current
  ///   element. For example trailing separators are represented as a '.'
  string_view_t operator*() const noexcept {
    switch (State) {
    case PS_BeforeBegin:
    case PS_AtEnd:
      return "";
    case PS_InRootDir:
      return "/";
    case PS_InTrailingSep:
      return "";
    case PS_InRootName:
    case PS_InFilenames:
      return RawEntry;
    }
    _LIBCPP_UNREACHABLE();
  }

  explicit operator bool() const noexcept {
    return State != PS_BeforeBegin && State != PS_AtEnd;
  }

  PathParser& operator++() noexcept {
    increment();
    return *this;
  }

  PathParser& operator--() noexcept {
    decrement();
    return *this;
  }

  bool atEnd() const noexcept {
    return State == PS_AtEnd;
  }

  bool inRootDir() const noexcept {
    return State == PS_InRootDir;
  }

  bool inRootName() const noexcept {
    return State == PS_InRootName;
  }

  bool inRootPath() const noexcept {
    return inRootName() || inRootDir();
  }

private:
  void makeState(ParserState NewState, PosPtr Start, PosPtr End) noexcept {
    State = NewState;
    RawEntry = string_view_t(Start, End - Start);
  }
  void makeState(ParserState NewState) noexcept {
    State = NewState;
    RawEntry = {};
  }

  PosPtr getAfterBack() const noexcept { return Path.data() + Path.size(); }

  PosPtr getBeforeFront() const noexcept { return Path.data() - 1; }

  /// \brief Return a pointer to the first character after the currently
  ///   lexed element.
  PosPtr getNextTokenStartPos() const noexcept {
    switch (State) {
    case PS_BeforeBegin:
      return Path.data();
    case PS_InRootName:
    case PS_InRootDir:
    case PS_InFilenames:
      return &RawEntry.back() + 1;
    case PS_InTrailingSep:
    case PS_AtEnd:
      return getAfterBack();
    }
    _LIBCPP_UNREACHABLE();
  }

  /// \brief Return a pointer to the first character in the currently lexed
  ///   element.
  PosPtr getCurrentTokenStartPos() const noexcept {
    switch (State) {
    case PS_BeforeBegin:
    case PS_InRootName:
      return &Path.front();
    case PS_InRootDir:
    case PS_InFilenames:
    case PS_InTrailingSep:
      return &RawEntry.front();
    case PS_AtEnd:
      return &Path.back() + 1;
    }
    _LIBCPP_UNREACHABLE();
  }

  PosPtr consumeSeparator(PosPtr P, PosPtr End) const noexcept {
    if (P == End || !isSep(*P))
      return nullptr;
    const int Inc = P < End ? 1 : -1;
    P += Inc;
    while (P != End && isSep(*P))
      P += Inc;
    return P;
  }

  PosPtr consumeName(PosPtr P, PosPtr End) const noexcept {
    if (P == End || isSep(*P))
      return nullptr;
    const int Inc = P < End ? 1 : -1;
    P += Inc;
    while (P != End && !isSep(*P))
      P += Inc;
    return P;
  }
};

string_view_pair separate_filename(string_view_t const& s) {
  if (s == "." || s == ".." || s.empty())
    return string_view_pair{s, ""};
  auto pos = s.find_last_of('.');
  if (pos == string_view_t::npos || pos == 0)
    return string_view_pair{s, string_view_t{}};
  return string_view_pair{s.substr(0, pos), s.substr(pos)};
}

string_view_t createView(PosPtr S, PosPtr E) noexcept {
  return {S, static_cast<size_t>(E - S) + 1};
}


} // namespace parser
} // namespace

using parser::PathParser;
using parser::createView;
using parser::string_view_t;

string_view_t path::__root_name() const {
  auto PP = PathParser::CreateBegin(__pn_);
  if (PP.State == PathParser::PS_InRootName)
    return *PP;
  return {};
}

string_view_t path::__root_directory() const {
  auto PP = PathParser::CreateBegin(__pn_);
  if (PP.State == PathParser::PS_InRootName)
    ++PP;
  if (PP.State == PathParser::PS_InRootDir)
    return *PP;
  return {};
}

string_view_t path::__root_path_raw() const {
  auto PP = PathParser::CreateBegin(__pn_);
  if (PP.State == PathParser::PS_InRootName) {
    auto NextCh = PP.peek();
    if (NextCh && parser::isSep(*NextCh)) {
      ++PP;
      return createView(__pn_.data(), &PP.RawEntry.back());
    }
    return PP.RawEntry;
  }
  if (PP.State == PathParser::PS_InRootDir)
    return *PP;
  return {};
}

static bool ConsumeRootName(PathParser *PP) {
  static_assert(PathParser::PS_BeforeBegin == 1 &&
      PathParser::PS_InRootName == 2,
      "Values for enums are incorrect");
  while (PP->State <= PathParser::PS_InRootName)
    ++(*PP);
  return PP->State == PathParser::PS_AtEnd;
}

static bool ConsumeRootDir(PathParser* PP) {
  static_assert(PathParser::PS_BeforeBegin == 1 &&
                PathParser::PS_InRootName == 2 &&
                PathParser::PS_InRootDir == 3, "Values for enums are incorrect");
  while (PP->State <= PathParser::PS_InRootDir)
    ++(*PP);
  return PP->State == PathParser::PS_AtEnd;
}

string_view_t path::__relative_path() const {
  auto PP = PathParser::CreateBegin(__pn_);
  if (ConsumeRootDir(&PP))
    return {};
  return createView(PP.RawEntry.data(), &__pn_.back());
}

string_view_t path::__parent_path() const {
  if (empty())
    return {};
  // Determine if we have a root path but not a relative path. In that case
  // return *this.
  {
    auto PP = PathParser::CreateBegin(__pn_);
    if (ConsumeRootDir(&PP))
      return __pn_;
  }
  // Otherwise remove a single element from the end of the path, and return
  // a string representing that path
  {
    auto PP = PathParser::CreateEnd(__pn_);
    --PP;
    if (PP.RawEntry.data() == __pn_.data())
      return {};
    --PP;
    return createView(__pn_.data(), &PP.RawEntry.back());
  }
}

string_view_t path::__filename() const {
  if (empty())
    return {};
  {
    PathParser PP = PathParser::CreateBegin(__pn_);
    if (ConsumeRootDir(&PP))
      return {};
  }
  return *(--PathParser::CreateEnd(__pn_));
}

string_view_t path::__stem() const {
  return parser::separate_filename(__filename()).first;
}

string_view_t path::__extension() const {
  return parser::separate_filename(__filename()).second;
}

////////////////////////////////////////////////////////////////////////////
// path.gen

enum PathPartKind : unsigned char {
  PK_None,
  PK_RootSep,
  PK_Filename,
  PK_Dot,
  PK_DotDot,
  PK_TrailingSep
};

static PathPartKind ClassifyPathPart(string_view_t Part) {
  if (Part.empty())
    return PK_TrailingSep;
  if (Part == ".")
    return PK_Dot;
  if (Part == "..")
    return PK_DotDot;
  if (Part == "/")
    return PK_RootSep;
  return PK_Filename;
}

path path::lexically_normal() const {
  if (__pn_.empty())
    return *this;

  using PartKindPair = pair<string_view_t, PathPartKind>;
  vector<PartKindPair> Parts;
  // Guess as to how many elements the path has to avoid reallocating.
  Parts.reserve(32);

  // Track the total size of the parts as we collect them. This allows the
  // resulting path to reserve the correct amount of memory.
  size_t NewPathSize = 0;
  auto AddPart = [&](PathPartKind K, string_view_t P) {
    NewPathSize += P.size();
    Parts.emplace_back(P, K);
  };
  auto LastPartKind = [&]() {
    if (Parts.empty())
      return PK_None;
    return Parts.back().second;
  };

  bool MaybeNeedTrailingSep = false;
  // Build a stack containing the remaining elements of the path, popping off
  // elements which occur before a '..' entry.
  for (auto PP = PathParser::CreateBegin(__pn_); PP; ++PP) {
    auto Part = *PP;
    PathPartKind Kind = ClassifyPathPart(Part);
    switch (Kind) {
    case PK_Filename:
    case PK_RootSep: {
      // Add all non-dot and non-dot-dot elements to the stack of elements.
      AddPart(Kind, Part);
      MaybeNeedTrailingSep = false;
      break;
    }
    case PK_DotDot: {
      // Only push a ".." element if there are no elements preceding the "..",
      // or if the preceding element is itself "..".
      auto LastKind = LastPartKind();
      if (LastKind == PK_Filename) {
        NewPathSize -= Parts.back().first.size();
        Parts.pop_back();
      } else if (LastKind != PK_RootSep)
        AddPart(PK_DotDot, "..");
      MaybeNeedTrailingSep = LastKind == PK_Filename;
      break;
    }
    case PK_Dot:
    case PK_TrailingSep: {
      MaybeNeedTrailingSep = true;
      break;
    }
    case PK_None:
      _LIBCPP_UNREACHABLE();
    }
  }
  // [fs.path.generic]p6.8: If the path is empty, add a dot.
  if (Parts.empty())
    return ".";

  // [fs.path.generic]p6.7: If the last filename is dot-dot, remove any
  // trailing directory-separator.
  bool NeedTrailingSep = MaybeNeedTrailingSep && LastPartKind() == PK_Filename;

  path Result;
  Result.__pn_.reserve(Parts.size() + NewPathSize + NeedTrailingSep);
  for (auto& PK : Parts)
    Result /= PK.first;

  if (NeedTrailingSep)
    Result /= "";

  return Result;
}

static int DetermineLexicalElementCount(PathParser PP) {
  int Count = 0;
  for (; PP; ++PP) {
    auto Elem = *PP;
    if (Elem == "..")
      --Count;
    else if (Elem != "." && Elem != "")
      ++Count;
  }
  return Count;
}

path path::lexically_relative(const path& base) const {
  { // perform root-name/root-directory mismatch checks
    auto PP = PathParser::CreateBegin(__pn_);
    auto PPBase = PathParser::CreateBegin(base.__pn_);
    auto CheckIterMismatchAtBase = [&]() {
      return PP.State != PPBase.State &&
             (PP.inRootPath() || PPBase.inRootPath());
    };
    if (PP.inRootName() && PPBase.inRootName()) {
      if (*PP != *PPBase)
        return {};
    } else if (CheckIterMismatchAtBase())
      return {};

    if (PP.inRootPath())
      ++PP;
    if (PPBase.inRootPath())
      ++PPBase;
    if (CheckIterMismatchAtBase())
      return {};
  }

  // Find the first mismatching element
  auto PP = PathParser::CreateBegin(__pn_);
  auto PPBase = PathParser::CreateBegin(base.__pn_);
  while (PP && PPBase && PP.State == PPBase.State && *PP == *PPBase) {
    ++PP;
    ++PPBase;
  }

  // If there is no mismatch, return ".".
  if (!PP && !PPBase)
    return ".";

  // Otherwise, determine the number of elements, 'n', which are not dot or
  // dot-dot minus the number of dot-dot elements.
  int ElemCount = DetermineLexicalElementCount(PPBase);
  if (ElemCount < 0)
    return {};

  // if n == 0 and (a == end() || a->empty()), returns path("."); otherwise
  if (ElemCount == 0 && (PP.atEnd() || *PP == ""))
    return ".";

  // return a path constructed with 'n' dot-dot elements, followed by the the
  // elements of '*this' after the mismatch.
  path Result;
  // FIXME: Reserve enough room in Result that it won't have to re-allocate.
  while (ElemCount--)
    Result /= "..";
  for (; PP; ++PP)
    Result /= *PP;
  return Result;
}

////////////////////////////////////////////////////////////////////////////
// path.comparisons
static int CompareRootName(PathParser *LHS, PathParser *RHS) {
  if (!LHS->inRootName() && !RHS->inRootName())
    return 0;

  auto GetRootName = [](PathParser *Parser) -> string_view_t {
    return Parser->inRootName() ? **Parser : "";
  };
  int res = GetRootName(LHS).compare(GetRootName(RHS));
  ConsumeRootName(LHS);
  ConsumeRootName(RHS);
  return res;
}

static int CompareRootDir(PathParser *LHS, PathParser *RHS) {
  if (!LHS->inRootDir() && RHS->inRootDir())
    return -1;
  else if (LHS->inRootDir() && !RHS->inRootDir())
    return 1;
  else {
    ConsumeRootDir(LHS);
    ConsumeRootDir(RHS);
    return 0;
  }
}

static int CompareRelative(PathParser *LHSPtr, PathParser *RHSPtr) {
  auto &LHS = *LHSPtr;
  auto &RHS = *RHSPtr;
  
  int res;
  while (LHS && RHS) {
    if ((res = (*LHS).compare(*RHS)) != 0)
      return res;
    ++LHS;
    ++RHS;
  }
  return 0;
}

static int CompareEndState(PathParser *LHS, PathParser *RHS) {
  if (LHS->atEnd() && !RHS->atEnd())
    return -1;
  else if (!LHS->atEnd() && RHS->atEnd())
    return 1;
  return 0;
}

int path::__compare(string_view_t __s) const {
  auto LHS = PathParser::CreateBegin(__pn_);
  auto RHS = PathParser::CreateBegin(__s);
  int res;

  if ((res = CompareRootName(&LHS, &RHS)) != 0)
    return res;

  if ((res = CompareRootDir(&LHS, &RHS)) != 0)
    return res;

  if ((res = CompareRelative(&LHS, &RHS)) != 0)
    return res;

  return CompareEndState(&LHS, &RHS);
}

////////////////////////////////////////////////////////////////////////////
// path.itr
path::iterator path::begin() const {
  auto PP = PathParser::CreateBegin(__pn_);
  iterator it;
  it.__path_ptr_ = this;
  it.__state_ = static_cast<path::iterator::_ParserState>(PP.State);
  it.__entry_ = PP.RawEntry;
  it.__stashed_elem_.__assign_view(*PP);
  return it;
}

path::iterator path::end() const {
  iterator it{};
  it.__state_ = path::iterator::_AtEnd;
  it.__path_ptr_ = this;
  return it;
}

path::iterator& path::iterator::__increment() {
  PathParser PP(__path_ptr_->native(), __entry_, __state_);
  ++PP;
  __state_ = static_cast<_ParserState>(PP.State);
  __entry_ = PP.RawEntry;
  __stashed_elem_.__assign_view(*PP);
  return *this;
}

path::iterator& path::iterator::__decrement() {
  PathParser PP(__path_ptr_->native(), __entry_, __state_);
  --PP;
  __state_ = static_cast<_ParserState>(PP.State);
  __entry_ = PP.RawEntry;
  __stashed_elem_.__assign_view(*PP);
  return *this;
}

///////////////////////////////////////////////////////////////////////////////
// Operations, on nxdk's Win32 API. Paths are converted to '\' separators
// before they reach the kernel, which does not accept '/'.
///////////////////////////////////////////////////////////////////////////////

namespace
{
    std::string kernelPath(const path &p)
    {
        std::string s = p.native();
        for (char &c : s)
            if (c == '/')
                c = '\\';
        // "D:" alone means the drive's root.
        if (s.size() == 2 && s[1] == ':')
            s += '\\';
        return s;
    }

    void setError(error_code *ec, DWORD win32Error)
    {
        if (ec)
            *ec = error_code(static_cast<int>(win32Error), system_category());
    }

    void clearError(error_code *ec)
    {
        if (ec)
            ec->clear();
    }

    file_time_type toFileTime(const FILETIME &time)
    {
        ULARGE_INTEGER value;
        value.LowPart = time.dwLowDateTime;
        value.HighPart = time.dwHighDateTime;
        // 100 ns ticks since 1601.
        return file_time_type(chrono::duration_cast<file_time_type::duration>(
            chrono::duration<long long, ratio<1, 10000000>>(static_cast<long long>(value.QuadPart))));
    }

    bool getAttributes(const path &p, WIN32_FILE_ATTRIBUTE_DATA &data)
    {
        return GetFileAttributesExA(kernelPath(p).c_str(), GetFileExInfoStandard, &data) != 0;
    }
}

file_status __status(const path &p, error_code *ec)
{
    WIN32_FILE_ATTRIBUTE_DATA data;
    if (!getAttributes(p, data))
    {
        const DWORD error = GetLastError();
        if (error == ERROR_FILE_NOT_FOUND || error == ERROR_PATH_NOT_FOUND)
        {
            clearError(ec);
            return file_status(file_type::not_found);
        }
        setError(ec, error);
        return file_status(file_type::none);
    }
    clearError(ec);
    return file_status((data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) ? file_type::directory : file_type::regular,
                       perms::all);
}

file_status __symlink_status(const path &p, error_code *ec) { return __status(p, ec); }

uintmax_t __file_size(const path &p, error_code *ec)
{
    WIN32_FILE_ATTRIBUTE_DATA data;
    if (!getAttributes(p, data))
    {
        setError(ec, GetLastError());
        return static_cast<uintmax_t>(-1);
    }
    clearError(ec);
    return (uintmax_t(data.nFileSizeHigh) << 32) | data.nFileSizeLow;
}

file_time_type __last_write_time(const path &p, error_code *ec)
{
    WIN32_FILE_ATTRIBUTE_DATA data;
    if (!getAttributes(p, data))
    {
        setError(ec, GetLastError());
        return file_time_type::min();
    }
    clearError(ec);
    return toFileTime(data.ftLastWriteTime);
}

bool __create_directory(const path &p, error_code *ec)
{
    if (CreateDirectoryA(kernelPath(p).c_str(), nullptr))
    {
        clearError(ec);
        return true;
    }
    const DWORD error = GetLastError();
    if (error == ERROR_ALREADY_EXISTS)
        clearError(ec);
    else
        setError(ec, error);
    return false;
}

bool __create_directories(const path &p, error_code *ec)
{
    if (p.empty())
    {
        clearError(ec);
        return false;
    }
    error_code local;
    const file_status st = __status(p, &local);
    if (is_directory(st))
    {
        clearError(ec);
        return false;
    }
    const path parent = p.parent_path();
    if (!parent.empty() && parent != p)
        __create_directories(parent, nullptr);
    return __create_directory(p, ec);
}

bool __remove(const path &p, error_code *ec)
{
    const std::string k = kernelPath(p);
    const DWORD attributes = GetFileAttributesA(k.c_str());
    if (attributes == INVALID_FILE_ATTRIBUTES)
    {
        setError(ec, GetLastError());
        return false;
    }
    const BOOL ok = (attributes & FILE_ATTRIBUTE_DIRECTORY) ? RemoveDirectoryA(k.c_str()) : DeleteFileA(k.c_str());
    if (!ok)
    {
        setError(ec, GetLastError());
        return false;
    }
    clearError(ec);
    return true;
}

uintmax_t __remove_all(const path &p, error_code *ec)
{
    uintmax_t count = 0;
    error_code local;
    if (is_directory(__status(p, &local)))
    {
        WIN32_FIND_DATAA data;
        HANDLE h = FindFirstFileA((kernelPath(p) + "\\*").c_str(), &data);
        if (h != INVALID_HANDLE_VALUE)
        {
            do
            {
                if (std::strcmp(data.cFileName, ".") && std::strcmp(data.cFileName, ".."))
                    count += __remove_all(p / data.cFileName, nullptr);
            } while (FindNextFileA(h, &data));
            FindClose(h);
        }
    }
    if (__remove(p, &local))
        ++count;
    clearError(ec);
    return count;
}

void __rename(const path &from, const path &to, error_code *ec)
{
    if (MoveFileA(kernelPath(from).c_str(), kernelPath(to).c_str()))
        clearError(ec);
    else
        setError(ec, GetLastError());
}

bool __fs_is_empty(const path &p, error_code *ec)
{
    error_code local;
    const file_status st = __status(p, &local);
    if (is_directory(st))
    {
        WIN32_FIND_DATAA data;
        HANDLE h = FindFirstFileA((kernelPath(p) + "\\*").c_str(), &data);
        bool empty = true;
        if (h != INVALID_HANDLE_VALUE)
        {
            do
                empty = empty && (!std::strcmp(data.cFileName, ".") || !std::strcmp(data.cFileName, ".."));
            while (empty && FindNextFileA(h, &data));
            FindClose(h);
        }
        clearError(ec);
        return empty;
    }
    clearError(ec);
    return __file_size(p, nullptr) == 0;
}

// There is no working directory on the Xbox; relative paths are taken as
// relative to the disc.
path __current_path(error_code *ec)
{
    clearError(ec);
    return path("D:\\");
}

void __current_path(const path &, error_code *ec) { clearError(ec); }

path __absolute(const path &p, error_code *ec)
{
    clearError(ec);
    const std::string &s = p.native();
    if (s.size() >= 2 && s[1] == ':')
        return p;
    return path("D:\\") / p;
}

path __canonical(const path &p, error_code *ec) { return __absolute(p, ec).lexically_normal(); }

path __weakly_canonical(const path &p, error_code *ec) { return __canonical(p, ec); }

path __temp_directory_path(error_code *ec)
{
    clearError(ec);
    return path("E:\\TimeSplitters");
}

file_time_type _FilesystemClock::now() noexcept
{
    FILETIME ft;
    GetSystemTimeAsFileTime(&ft);
    return toFileTime(ft);
}

///////////////////////////////////////////////////////////////////////////////
// Directory iteration
///////////////////////////////////////////////////////////////////////////////

class __dir_stream
{
public:
    __dir_stream(const path &root, directory_options, error_code &ec) : root_(root)
    {
        handle_ = FindFirstFileA((kernelPath(root) + "\\*").c_str(), &data_);
        if (handle_ == INVALID_HANDLE_VALUE)
        {
            ec = error_code(static_cast<int>(GetLastError()), system_category());
            return;
        }
        ec.clear();
        if (isDots())
            advance(ec);
        else
            assign();
    }
    __dir_stream(const __dir_stream &) = delete;
    __dir_stream &operator=(const __dir_stream &) = delete;
    ~__dir_stream() { close(); }

    bool good() const { return handle_ != INVALID_HANDLE_VALUE; }

    bool advance(error_code &ec)
    {
        while (FindNextFileA(handle_, &data_))
        {
            if (isDots())
                continue;
            assign();
            ec.clear();
            return true;
        }
        close();
        ec.clear();
        return false;
    }

    directory_entry entry_;

private:
    bool isDots() const { return !std::strcmp(data_.cFileName, ".") || !std::strcmp(data_.cFileName, ".."); }

    void assign()
    {
        auto data = directory_entry::__create_iter_result(
            (data_.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) ? file_type::directory : file_type::regular);
        entry_.__assign_iter_entry(root_ / data_.cFileName, data);
    }

    void close()
    {
        if (handle_ != INVALID_HANDLE_VALUE)
            FindClose(handle_);
        handle_ = INVALID_HANDLE_VALUE;
    }

    path root_;
    HANDLE handle_ = INVALID_HANDLE_VALUE;
    WIN32_FIND_DATAA data_{};
};

directory_iterator::directory_iterator(const path &p, error_code *ec, directory_options opts)
{
    error_code local;
    __imp_ = make_shared<__dir_stream>(p, opts, local);
    if (ec)
        *ec = local;
    if (!__imp_->good())
        __imp_.reset();
}

directory_iterator &directory_iterator::__increment(error_code *ec)
{
    error_code local;
    if (!__imp_->advance(local))
        __imp_.reset();
    if (ec)
        *ec = local;
    return *this;
}

const directory_entry &directory_iterator::__dereference() const { return __imp_->entry_; }

struct recursive_directory_iterator::__shared_imp
{
    std::vector<std::unique_ptr<__dir_stream>> stack_;
    directory_options options_;
};

recursive_directory_iterator::recursive_directory_iterator(const path &p, directory_options opts, error_code *ec)
    : __imp_(nullptr), __rec_(true)
{
    error_code local;
    auto stream = std::make_unique<__dir_stream>(p, opts, local);
    if (ec)
        *ec = local;
    if (!stream->good())
        return;
    __imp_ = make_shared<__shared_imp>();
    __imp_->options_ = opts;
    __imp_->stack_.push_back(std::move(stream));
}

recursive_directory_iterator &recursive_directory_iterator::__increment(error_code *ec)
{
    error_code local;
    if (ec)
        ec->clear();
    auto &stack = __imp_->stack_;
    const directory_entry &current = stack.back()->entry_;
    if (__rec_ && current.__data_.__type_ == file_type::directory)
    {
        auto child = std::make_unique<__dir_stream>(current.path(), __imp_->options_, local);
        if (child->good())
        {
            stack.push_back(std::move(child));
            __rec_ = true;
            return *this;
        }
    }
    __rec_ = true;
    while (!stack.empty() && !stack.back()->advance(local))
        stack.pop_back();
    if (stack.empty())
        __imp_.reset();
    return *this;
}

const directory_entry &recursive_directory_iterator::__dereference() const { return __imp_->stack_.back()->entry_; }

_LIBCPP_END_NAMESPACE_FILESYSTEM

///////////////////////////////////////////////////////////////////////////////
// fopen with '/' separators (see compat/xbox_prelude.h)
///////////////////////////////////////////////////////////////////////////////

#undef fopen
extern "C" FILE *ps2xXboxFopen(const char *name, const char *mode)
{
    if (!name)
        return nullptr;
    std::string converted(name);
    for (char &c : converted)
        if (c == '/')
            c = '\\';
    return fopen(converted.c_str(), mode);
}
