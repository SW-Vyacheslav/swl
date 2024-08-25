#ifndef SWL_MATH_VEC4_H_
#define SWL_MATH_VEC4_H_

#include "swl/math/common.h"

namespace sw
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

} // namespace sw

#include "swl/math/inl/vec4.inl"

#endif // SWL_MATH_VEC4_H_
