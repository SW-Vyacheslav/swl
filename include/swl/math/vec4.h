#ifndef SWL_MATH_VEC4_H_
#define SWL_MATH_VEC4_H_

#include "swl/math/common.h"

namespace swl
{

template<typename T>
struct vec<4, T>
{
public:
    constexpr vec();
    constexpr explicit vec(T scalar);
    constexpr vec(T x, T y, T z, T w);

public:
    static constexpr std::size_t size() { return 4; }

public:
    union
    {
        struct { T x, y, z, w; };
        T data[4];
    };
};

template<typename T>
constexpr vec<4, T>::vec()
    : x(0), y(0), z(0), w(0) {}

template<typename T>
constexpr vec<4, T>::vec(T scalar)
    : x(scalar), y(scalar), z(scalar), w(scalar) {}

template<typename T>
constexpr vec<4, T>::vec(T x, T y, T z, T w)
    : x(x), y(y), z(z), w(w) {}

} // namespace swl

#endif // SWL_MATH_VEC4_H_
