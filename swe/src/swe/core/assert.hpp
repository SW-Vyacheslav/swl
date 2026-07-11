#ifndef SWE_CORE_ASSERT_HPP_
#define SWE_CORE_ASSERT_HPP_

#include <fmt/color.h>

#include "swe/core/compiler.hpp"
#include "swe/core/platform.hpp"

#ifdef SWE_ENABLE_ASSERTS
    #define SWE_ASSERTM(condition, ...) ::swe::detail::swe_assertm((condition), #condition, __FILE__, SWE_PRETTY_FUNCTION, __LINE__, __VA_ARGS__)
    #define SWE_ASSERT(condition)       ::swe::detail::swe_assert((condition), #condition, __FILE__, SWE_PRETTY_FUNCTION, __LINE__)
#else
    #define SWE_ASSERTM(condition, ...)
    #define SWE_ASSERT(condition)
#endif

namespace swe
{
namespace detail
{

template<typename... Args>
inline void swe_assertm(bool        condition,
                        const char* condition_str,
                        const char* file,
                        const char* func,
                        int         line,
                        const Args&... args)
{
    if (!condition)
    {
        fmt::print(stderr,
                   fmt::emphasis::bold | fmt::fg(fmt::color::red),
                   "{}:{}:\n    {}:\n        [ASSERT] \'{}\': {}\n",
                   file,
                   line,
                   func,
                   condition_str,
                   fmt::format(args...));
        SWE_DEBUG_BREAK;
    }
}

inline void swe_assert(bool condition, const char* condition_str, const char* file, const char* func, int line)
{
    if (!condition)
    {
        fmt::print(stderr,
                   fmt::emphasis::bold | fmt::fg(fmt::color::red),
                   "{}:{}:\n    {}:\n        [ASSERT] \'{}\'\n",
                   file,
                   line,
                   func,
                   condition_str);
        SWE_DEBUG_BREAK;
    }
}

} // namespace detail
} // namespace swe

#endif // SWE_CORE_ASSERT_HPP_
