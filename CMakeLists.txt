set(SWL_CMAKE_MIN_VERSION 3.21.0)
set(SWL_VERSION 0.0.1)

cmake_minimum_required(VERSION ${SWL_CMAKE_MIN_VERSION})
project(swl VERSION ${SWL_VERSION} LANGUAGES CXX)

option(SWL_BUILD_TESTS "Build tests" OFF)

message(STATUS "Build ${PROJECT_NAME}: ${PROJECT_VERSION} (CMake: ${CMAKE_VERSION})")
message(STATUS "    Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "    Target system: ${CMAKE_SYSTEM}")
message(STATUS "    Host system: ${CMAKE_HOST_SYSTEM}")
message(STATUS "    Host arch: ${CMAKE_HOST_SYSTEM_PROCESSOR}")
message(STATUS "    Options:")
message(STATUS "        SWL_BUILD_TESTS: ${SWL_BUILD_TESTS}")

add_library(${PROJECT_NAME} INTERFACE)

include(cmake/external.cmake)

target_precompile_headers(${PROJECT_NAME}
    INTERFACE
        src/pch.h
)

target_include_directories(${PROJECT_NAME}
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

set_target_properties(${PROJECT_NAME}
    PROPERTIES
        CXX_STANDARD          17
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS        OFF
)

if(SWL_BUILD_TESTS)
    add_subdirectory(tests)
endif()
