#ifndef SWE_MATH_MAT2X4_HPP_
#define SWE_MATH_MAT2X4_HPP_

#include "swe/math/common.hpp"
#include "swe/math/vec4.hpp"

namespace swe
{

// TODO
template<typename T>
struct mat<2, 4, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 8; }

public:
    union
    {
        vec<4, T> rows[2];
        T data[8];
    };
};

template<typename T>
constexpr mat<2, 4, T>::mat()
    : data{} {}

} // namespace swe

#endif // SWE_MATH_MAT2X4_HPP_
