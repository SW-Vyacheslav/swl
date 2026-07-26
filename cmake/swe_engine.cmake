add_library(swe)

set(SWE_LIBRARY_NAME "swe-${SWE_VERSION}")

if (CMAKE_BUILD_TYPE MATCHES "(Debug)")
    string(APPEND SWE_LIBRARY_NAME "d")
elseif (CMAKE_BUILD_TYPE MATCHES "(RelWithDebInfo)")
    string(APPEND SWE_LIBRARY_NAME "rd")
endif ()

set_target_properties(swe
    PROPERTIES
        OUTPUT_NAME "${SWE_LIBRARY_NAME}"
)

target_sources(swe
    PRIVATE
        swe_engine/src/swe/common/datetime.cpp

        swe_engine/src/swe/math.cpp
)

target_include_directories(swe
    PUBLIC
        swe_engine/src
        ${SWE_GENERATED_INCLUDE_DIRS}
    PRIVATE
        swe_engine/src/swe
)

set(SWE_COMPILE_OPTIONS)

if (CMAKE_BUILD_TYPE MATCHES "(Debug)")
    list(APPEND SWE_COMPILE_OPTIONS
        -DSWE_DEBUG
        $<$<COMPILE_LANGUAGE:C,CXX>:-Wall>
    )
endif ()

if (CMAKE_BUILD_TYPE MATCHES "(RelWithDebInfo)")
    list(APPEND SWE_COMPILE_OPTIONS
        -DSWE_RELDEBUG
    )
endif ()

target_compile_options(swe
    PUBLIC
        ${SWE_COMPILE_OPTIONS}
)

message(STATUS)
message(STATUS "Build swe: ${SWE_VERSION} (CMake: ${CMAKE_VERSION})")
message(STATUS "    Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "    Target system: ${CMAKE_SYSTEM}")
message(STATUS "    Target system arch: ${CMAKE_SYSTEM_PROCESSOR}")
message(STATUS "    Host system: ${CMAKE_HOST_SYSTEM}")
message(STATUS "    Host arch: ${CMAKE_HOST_SYSTEM_PROCESSOR}")
message(STATUS "    C standard: ${CMAKE_C_STANDARD}")
message(STATUS "    C compiler: ${CMAKE_C_COMPILER}")
message(STATUS "    C++ standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "    C++ compiler: ${CMAKE_CXX_COMPILER}")
message(STATUS "    Compile options: ${SWE_COMPILE_OPTIONS}")
message(STATUS "    Options:")
message(STATUS "        SWE_BUILD_TESTS: ${SWE_BUILD_TESTS}")
message(STATUS "        SWE_BUILD_EDITOR: ${SWE_BUILD_EDITOR}")
message(STATUS)

add_external(swe)
