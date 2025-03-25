set(SWL_CMAKE_MIN_VERSION 3.21.0)
set(SWL_VERSION 0.0.1.0)

cmake_minimum_required(VERSION ${SWL_CMAKE_MIN_VERSION})
project(swl)

enable_language(CXX)

option(SWL_BUILD_TESTS "Build tests" OFF)

add_subdirectory(external/fmt)

message(STATUS)
message(STATUS "Build swl: ${SWL_VERSION} (CMake: ${CMAKE_VERSION})")
message(STATUS "    Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "    Target system: ${CMAKE_SYSTEM}")
message(STATUS "    Host system: ${CMAKE_HOST_SYSTEM}")
message(STATUS "    Host arch: ${CMAKE_HOST_SYSTEM_PROCESSOR}")
message(STATUS "    Options:")
message(STATUS "        SWL_BUILD_TESTS: ${SWL_BUILD_TESTS}")
message(STATUS)

add_library(swl)

set_target_properties(swl
    PROPERTIES
        CXX_STANDARD          17
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS        OFF
        VERSION               ${SWL_VERSION}
)

target_sources(swl
    PRIVATE
        src/math.cpp
)

target_include_directories(swl
    PUBLIC
        include
)

target_link_libraries(swl
    PUBLIC
        fmt::fmt
)

target_precompile_headers(swl
    PUBLIC
        src/pch.h
)

if(SWL_BUILD_TESTS)
    add_subdirectory(tests)
endif()
