#ifndef SWE_MATH_MAT4X2_HPP_
#define SWE_MATH_MAT4X2_HPP_

#include "swe/math/common.hpp"
#include "swe/math/vec2.hpp"

namespace swe
{

// TODO
template<typename T>
struct mat<4, 2, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 8; }

public:
    union
    {
        vec<2, T> rows[4];
        T data[8];
    };
};

template<typename T>
constexpr mat<4, 2, T>::mat()
    : data{} {}

} // namespace swe

#endif // SWE_MATH_MAT4X2_HPP_
