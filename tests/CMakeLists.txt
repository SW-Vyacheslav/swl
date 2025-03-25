cmake_minimum_required(VERSION 3.21.0)
project(swl_tests)

enable_language(CXX)

message(STATUS "Build swl_tests")

Include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.6.0
)

FetchContent_MakeAvailable(Catch2)

add_executable(swl_tests
    src/math_tests.cpp
)

set_target_properties(swl_tests
    PROPERTIES
        CXX_STANDARD          17
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS        OFF
)

target_link_libraries(swl_tests
    PRIVATE
        Catch2::Catch2WithMain
        swl
)
