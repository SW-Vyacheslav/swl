#ifndef SWE_MATH_MAT2X3_HPP_
#define SWE_MATH_MAT2X3_HPP_

#include "swe/math/common.hpp"
#include "swe/math/vec3.hpp"

namespace swe
{

// TODO
template<typename T>
struct mat<2, 3, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 6; }

public:
    union
    {
        vec<3, T> rows[2];
        T data[6];
    };
};

template<typename T>
constexpr mat<2, 3, T>::mat()
    : data{} {}

} // namespace swe

#endif // SWE_MATH_MAT2X3_HPP_
