#ifndef SWE_CORE_PRINT_HPP_
#define SWE_CORE_PRINT_HPP_

#include <cstdio>
#include <cstring>
#include <string>

#include <fmt/chrono.h>
#include <fmt/color.h>
#include <fmt/ranges.h>

#include "swe/common/datetime.hpp"
#include "swe/core/compiler.hpp"

#define SWE_PRINT_INFO(...)           ::swe::detail::swe_print_info(__VA_ARGS__)
#define SWE_PRINT_INFO_EX(...)        ::swe::detail::swe_print_info_ex(__FILE__, SWE_PRETTY_FUNCTION, __LINE__, __VA_ARGS__)
#define SWE_PRINT_ERROR(...)          ::swe::detail::swe_print_error(__VA_ARGS__)
#define SWE_PRINT_ERROR_EX(...)       ::swe::detail::swe_print_error_ex(__FILE__, SWE_PRETTY_FUNCTION, __LINE__, __VA_ARGS__)
#define SWE_PRINT_ERROR_EX_ERRNO(...) ::swe::detail::swe_print_error_ex_errno(__FILE__, SWE_PRETTY_FUNCTION, __LINE__, __VA_ARGS__)
#define SWE_PRINT_WARN(...)           ::swe::detail::swe_print_warn(__VA_ARGS__)
#define SWE_PRINT_WARN_EX(...)        ::swe::detail::swe_print_warn_ex(__FILE__, SWE_PRETTY_FUNCTION, __LINE__, __VA_ARGS__)

#ifdef SWE_DEBUG
#define SWE_DEBUG_PRINT_INFO(...)        SWE_PRINT_INFO_EX(__VA_ARGS__)
#define SWE_DEBUG_PRINT_ERROR(...)       SWE_PRINT_ERROR_EX(__VA_ARGS__)
#define SWE_DEBUG_PRINT_ERROR_ERRNO(...) SWE_PRINT_ERROR_EX_ERRNO(__VA_ARGS__)
#define SWE_DEBUG_PRINT_WARN(...)        SWE_PRINT_WARN_EX(__VA_ARGS__)
#else
#define SWE_DEBUG_PRINT_INFO(...)
#define SWE_DEBUG_PRINT_ERROR(...)
#define SWE_DEBUG_PRINT_ERROR_ERRNO(...)
#define SWE_DEBUG_PRINT_WARN(...)
#endif

namespace swe
{
namespace detail
{

#define SWE_FORMAT_STRING_INFO_TYPE  "INFO"
#define SWE_FORMAT_STRING_ERROR_TYPE "ERROR"
#define SWE_FORMAT_STRING_WARN_TYPE  "WARNING"

#define SWE_FORMAT_STRING_PRINT                "[{}] [{}] {}\n"
#define SWE_FORMAT_EX_STRING_PRINT             "{}:{}:\n    {}:\n        [{}] [{}] {}\n"
#define SWE_FORMAT_EX_ERRNO_STRING_PRINT_ERROR "{}:{}:\n    {}:\n        [{}] [{}] [ERRNO {}] {}: {}\n"

inline std::string swe_get_current_time()
{
    DateTime datetime = DateTime::Now().ToLocal();
    return fmt::format("{:02}:{:02}:{:02}", datetime.hours, datetime.minutes, datetime.seconds);
}

template<typename... Args>
inline void swe_print_info(const Args&... args)
{
    fmt::print(stdout,
               fmt::fg(fmt::terminal_color::green),
               SWE_FORMAT_STRING_PRINT,
               swe_get_current_time(),
               SWE_FORMAT_STRING_INFO_TYPE,
               fmt::format(args...));
    std::fflush(stdout);
}

template<typename... Args>
inline void swe_print_info_ex(const char* file, const char* func, int line, const Args&... args)
{
    fmt::print(stdout,
               fmt::fg(fmt::terminal_color::green),
               SWE_FORMAT_EX_STRING_PRINT,
               file,
               line,
               func,
               swe_get_current_time(),
               SWE_FORMAT_STRING_INFO_TYPE,
               fmt::format(args...));
    std::fflush(stdout);
}

template<typename... Args>
inline void swe_print_error(const Args&... args)
{
    fmt::print(stderr,
               fmt::emphasis::bold | fmt::fg(fmt::terminal_color::red),
               SWE_FORMAT_STRING_PRINT,
               swe_get_current_time(),
               SWE_FORMAT_STRING_ERROR_TYPE,
               fmt::format(args...));
}

template<typename... Args>
inline void swe_print_error_ex(const char* file, const char* func, int line, const Args&... args)
{
    fmt::print(stderr,
               fmt::emphasis::bold | fmt::fg(fmt::terminal_color::red),
               SWE_FORMAT_EX_STRING_PRINT,
               file,
               line,
               func,
               swe_get_current_time(),
               SWE_FORMAT_STRING_ERROR_TYPE,
               fmt::format(args...));
}

template<typename... Args>
inline void swe_print_error_ex_errno(const char* file, const char* func, int line, const Args&... args)
{
    fmt::print(stderr,
               fmt::emphasis::bold | fmt::fg(fmt::terminal_color::red),
               SWE_FORMAT_EX_ERRNO_STRING_PRINT_ERROR,
               file,
               line,
               func,
               swe_get_current_time(),
               SWE_FORMAT_STRING_ERROR_TYPE,
               errno,
               std::strerror(errno),
               fmt::format(args...));
}

template<typename... Args>
inline void swe_print_warn(const Args&... args)
{
    fmt::print(stderr,
               fmt::emphasis::bold | fmt::fg(fmt::terminal_color::yellow),
               SWE_FORMAT_STRING_PRINT,
               swe_get_current_time(),
               SWE_FORMAT_STRING_WARN_TYPE,
               fmt::format(args...));
}

template<typename... Args>
inline void swe_print_warn_ex(const char* file, const char* func, int line, const Args&... args)
{
    fmt::print(stderr,
               fmt::emphasis::bold | fmt::fg(fmt::terminal_color::yellow),
               SWE_FORMAT_EX_STRING_PRINT,
               file,
               line,
               func,
               swe_get_current_time(),
               SWE_FORMAT_STRING_WARN_TYPE,
               fmt::format(args...));
}

#undef SWE_FORMAT_STRING_INFO_TYPE
#undef SWE_FORMAT_STRING_ERROR_TYPE
#undef SWE_FORMAT_STRING_WARN_TYPE

#undef SWE_FORMAT_STRING_PRINT
#undef SWE_FORMAT_EX_STRING_PRINT
#undef SWE_FORMAT_EX_ERRNO_STRING_PRINT_ERROR

} // namespace detail
} // namespace swe

#endif // SWE_CORE_PRINT_HPP_
