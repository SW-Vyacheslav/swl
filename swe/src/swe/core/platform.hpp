#ifndef SWE_CORE_PLATFORM_HPP_
#define SWE_CORE_PLATFORM_HPP_

#ifndef SWE_DISABLE_PLATFORM_DETECTION
    #if defined(_WIN32)
        #if defined(_WIN64)
            #define SWE_PLATFORM_WIN64
        #else
            #define SWE_PLATFORM_WIN32
        #endif
        #define SWE_PLATFORM_WINDOWS
    #elif defined(__linux__)
        #define SWE_PLATFORM_LINUX
    #else
        #error "SWE does not support the current platform"
    #endif
#endif

#ifdef SWE_DEBUG
    #if defined(SWE_PLATFORM_WINDOWS)
        #define SWE_DEBUG_BREAK __debugbreak()
    #elif defined(SWE_PLATFORM_LINUX)
        #include <signal.h>
        #define SWE_DEBUG_BREAK raise(SIGTRAP)
    #else
        #error "SWE_DEBUG_BREAK is not supported on the current platform"
    #endif
    #define SWE_ENABLE_ASSERTS
#else
    #define SWE_DEBUG_BREAK
#endif

#endif // SWE_CORE_PLATFORM_HPP_
