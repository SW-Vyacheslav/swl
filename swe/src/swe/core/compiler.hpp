#ifndef SWE_CORE_COMPILER_HPP_
#define SWE_CORE_COMPILER_HPP_

#if defined(__GNUC__) || defined(__GNUG__)
    #define SWE_COMPILER_GCC
#elif defined(__clang__)
    #define SWE_COMPILER_CLANG
#elif defined(_MSC_VER)
    #define SWE_COMPILER_MSVC
#else
    #error "SWE does not support the current compiler"
#endif

#if defined(SWE_COMPILER_CLANG) || defined(SWE_COMPILER_GCC)
    #define SWE_PRETTY_FUNCTION __PRETTY_FUNCTION__
#elif defined(SWE_COMPILER_MSVC)
    #define SWE_PRETTY_FUNCTION __FUNCSIG__
#else
    #define SWE_PRETTY_FUNCTION __func__
#endif

#endif // SWE_CORE_COMPILER_HPP_
