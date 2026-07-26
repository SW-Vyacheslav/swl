#ifndef SWE_MATH_MAT4X4_HPP_
#define SWE_MATH_MAT4X4_HPP_

#include "swe/math/common.hpp"
#include "swe/math/vec4.hpp"

namespace swe
{

// TODO
template<typename T>
struct mat<4, 4, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 16; }

public:
    union
    {
        vec<4, T> rows[4];
        T data[16];
    };
};

template<typename T>
constexpr mat<4, 4, T>::mat()
    : data{} {}

} // namespace swe

#endif // SWE_MATH_MAT4X4_HPP_
