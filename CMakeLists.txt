cmake_minimum_required(VERSION 3.21)

include(cmake/options.cmake)

project(swe)

set(CMAKE_C_STANDARD          11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS        OFF)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

enable_language(C CXX)

include(cmake/version.cmake)
include(cmake/generated.cmake)
include(cmake/external.cmake)

include(cmake/swe.cmake)

if (SWE_BUILD_EDITOR)
    include(cmake/swe_editor.cmake)
endif ()

if (SWE_BUILD_TESTS)
    include(cmake/tests.cmake)
endif ()
