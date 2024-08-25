#include "swl/math/vec.h"

namespace sw
{

template<std::size_t Size, typename T>
T len(const vec<Size, T>& v)
{
    if constexpr(Size == 1)
        return std::abs(v.x);
    else
        return std::sqrt(dot(v, v));
}

template<std::size_t Size, typename T>
vec<Size, T> norm(const vec<Size, T>& v)
{
    return v / len(v);
}

template<std::size_t Size, typename T>
T dist(const vec<Size, T>& v1, const vec<Size, T>& v2)
{
    return len(v2 - v1);
}

template<std::size_t Size, typename T>
T reflect(const vec<Size, T>& v, const vec<Size, T>& n)
{
    return v - static_cast<T>(2) * dot(v, n) * n;
}

template<std::size_t Size, typename T>
vec<Size, T> refract(const vec<Size, T>& v, const vec<Size, T>& n, T k)
{
    T nv_dot = -dot(n, v);
    T a = k * k * (static_cast<T>(1) - nv_dot * nv_dot);

    if (a > static_cast<T>(1))
        return vec<Size, T>(0);

    return k * v + (k * nv_dot - std::sqrt(static_cast<T>(1) - a)) * n;
}

template<typename T>
T dot(const vec<1, T>& v1, const vec<1, T>& v2)
{
    return v1.x * v2.x;
}

template<typename T>
T dot(const vec<2, T>& v1, const vec<2, T>& v2)
{
    return v1.x * v2.x +
           v1.y * v2.y;
}

template<typename T>
T dot(const vec<3, T>& v1, const vec<3, T>& v2)
{
    return v1.x * v2.x +
           v1.y * v2.y +
           v1.z * v2.z;
}

template<typename T>
T dot(const vec<4, T>& v1, const vec<4, T>& v2)
{
    return v1.x * v2.x +
           v1.y * v2.y +
           v1.z * v2.z +
           v1.w * v2.w;
}

template<typename T>
T cross(const vec<2, T>& v1, const vec<2, T>& v2)
{
    return v1.x * v2.y - v1.y * v2.x;
}

template<typename T>
vec<3, T> cross(const vec<3, T>& v1, const vec<3, T>& v2)
{
    return vec<3, T>(v1.y * v2.z - v1.z * v2.y,
                     v1.z * v2.x - v1.x * v2.z,
                     v1.x * v2.y - v1.y * v2.x);
}

} // namespace sw
