#include <catch2/catch_test_macros.hpp>
// #include <catch2/benchmark/catch_benchmark.hpp>

#include <fmt/format.h>
#include <fmt/ranges.h>

#include "swl/math.h"

TEST_CASE("TEST_VECTOR_OPERATIONS")
{
    using namespace sw;

    vec3f v1(6, 2.0f, 3.0);
    vec3f v2(3.0f, 2, 1.0);
    vec3f v3(1, 3, 4);
    vec3f v4(2, 7, -5);

    auto r_sum = v1 + v2;
    auto r_sub = v1 - v2;
    auto r_mul = v1 * v2;
    auto r_div = v1 / v2;
    auto r_dot = dot(v1, v2);
    auto r_cross = cross(v3, v4);

    CHECK(r_sum == vec3f(9, 4, 4));
    CHECK(r_sub == vec3f(3, 0, 2));
    CHECK(r_mul == vec3f(18, 4, 3));
    CHECK(r_div == vec3f(2, 1, 3));
    CHECK(r_dot == 25);
    CHECK(r_cross == vec3f(-43, 13, 1));
}
