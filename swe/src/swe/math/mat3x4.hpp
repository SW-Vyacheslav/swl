#ifndef SWE_MATH_MAT3X4_HPP_
#define SWE_MATH_MAT3X4_HPP_

#include "swe/math/common.hpp"
#include "swe/math/vec4.hpp"

namespace swe
{

// TODO
template<typename T>
struct mat<3, 4, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 12; }

public:
    union
    {
        vec<4, T> rows[3];
        T data[12];
    };
};

template<typename T>
constexpr mat<3, 4, T>::mat()
    : data{} {}

} // namespace swe

#endif // SWE_MATH_MAT3X4_HPP_
