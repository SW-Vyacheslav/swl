message(STATUS "Build swe_tests")

set(SWE_TESTS_EXECUTABLE_NAME "swe-tests-${SWE_VERSION}")

if (CMAKE_BUILD_TYPE MATCHES "(Debug)")
    string(APPEND SWE_TESTS_EXECUTABLE_NAME "d")
elseif (CMAKE_BUILD_TYPE MATCHES "(RelWithDebInfo)")
    string(APPEND SWE_TESTS_EXECUTABLE_NAME "rd")
endif ()

Include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.6.0
)

FetchContent_MakeAvailable(Catch2)

add_executable(swe_tests)

set_target_properties(swe_tests
    PROPERTIES
        OUTPUT_NAME "${SWE_TESTS_EXECUTABLE_NAME}"
)

add_custom_command(
    TARGET swe_tests
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E create_symlink ${SWE_TESTS_EXECUTABLE_NAME} "swe-tests"
)

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
