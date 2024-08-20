#ifndef SWL_MATH_VEC3_H_
#define SWL_MATH_VEC3_H_

#include "swl/math/common.h"

namespace swl
{

template<typename T>
struct vec<3, T>
{
public:
    constexpr vec();
    constexpr explicit vec(T scalar);
    constexpr vec(T x, T y, T z);

public:
    static constexpr std::size_t size() { return 3; }

public:
    union
    {
        struct { T x, y, z; };
        T data[3];
    };
};

template<typename T>
constexpr vec<3, T>::vec()
    : x(0), y(0), z(0) {}

template<typename T>
constexpr vec<3, T>::vec(T scalar)
    : x(scalar), y(scalar), z(scalar) {}

template<typename T>
constexpr vec<3, T>::vec(T x, T y, T z)
    : x(x), y(y), z(z) {}

} // namespace swl

#endif // SWL_MATH_VEC3_H_
