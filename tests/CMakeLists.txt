cmake_minimum_required(VERSION 3.21.0)
project(swl_tests LANGUAGES CXX)

message(STATUS "Build ${PROJECT_NAME}")

Include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.6.0
)

FetchContent_MakeAvailable(Catch2)

add_executable(${PROJECT_NAME}
    src/math_tests.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Catch2::Catch2WithMain
        swl
)
