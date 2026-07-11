message(STATUS "Build swe_tests")

Include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.6.0
)

FetchContent_MakeAvailable(Catch2)

add_executable(swe_tests)

target_sources(swe_tests
    PRIVATE
        tests/math_tests.cpp
)

target_link_libraries(swe_tests
    PRIVATE
        Catch2::Catch2WithMain
        swe
)

message(STATUS)
