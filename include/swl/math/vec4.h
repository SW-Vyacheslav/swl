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
    constexpr vec(const vec<4, T>& other);
    constexpr explicit vec(T scalar);
    constexpr vec(T x, T y, T z, T w);

    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(T0 x, T1 y, T2 z, T3 w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(const vec<1, T0>& x, T1 y, T2 z, T3 w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(T0 x, const vec<1, T1>& y, T2 z, T3 w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(T0 x, T1 y, const vec<1, T2>& z, T3 w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(T0 x, T1 y, T2 z, const vec<1, T3>& w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(const vec<1, T0>& x, const vec<1, T1>& y, T2 z, T3 w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(T0 x, const vec<1, T1>& y, const vec<1, T2>& z, T3 w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(T0 x, T1 y, const vec<1, T2>& z, const vec<1, T3>& w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(const vec<1, T0>& x, T1 y, const vec<1, T2>& z, T3 w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(const vec<1, T0>& x, T1 y, T2 z, const vec<1, T3>& w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(T0 x, const vec<1, T1>& y, T2 z, const vec<1, T3>& w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(const vec<1, T0>& x, const vec<1, T1>& y, const vec<1, T2>& z, T3 w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(T0 x, const vec<1, T1>& y, const vec<1, T2>& z, const vec<1, T3>& w);
    template<typename T0, typename T1, typename T2, typename T3> constexpr vec(const vec<1, T0>& x, const vec<1, T1>& y, const vec<1, T2>& z, const vec<1, T3>& w);

    template<typename T0, typename T1, typename T2> constexpr vec(const vec<2, T0>& xy, T1 z, T2 w);
    template<typename T0, typename T1, typename T2> constexpr vec(const vec<2, T0>& xy, const vec<1, T1>& z, T2 w);
    template<typename T0, typename T1, typename T2> constexpr vec(const vec<2, T0>& xy, T1 z, const vec<1, T2>& w);
    template<typename T0, typename T1, typename T2> constexpr vec(const vec<2, T0>& xy, const vec<1, T1>& z, const vec<1, T2>& w);

    template<typename T0, typename T1, typename T2> constexpr vec(T0 x, const vec<2, T1>& yz, T2 w);
    template<typename T0, typename T1, typename T2> constexpr vec(const vec<1, T0>& x, const vec<2, T1>& yz, T2 w);
    template<typename T0, typename T1, typename T2> constexpr vec(T0 x, const vec<2, T1>& yz, const vec<1, T2>& w);
    template<typename T0, typename T1, typename T2> constexpr vec(const vec<1, T0>& x, const vec<2, T1>& yz, const vec<1, T2>& w);

    template<typename T0, typename T1, typename T2> constexpr vec(T0 x, T1 y, const vec<2, T2>& zw);
    template<typename T0, typename T1, typename T2> constexpr vec(const vec<1, T0>& x, T1 y, const vec<2, T2>& zw);
    template<typename T0, typename T1, typename T2> constexpr vec(T0 x, const vec<1, T1>& y, const vec<2, T2>& zw);
    template<typename T0, typename T1, typename T2> constexpr vec(const vec<1, T0>& x, const vec<1, T1>& y, const vec<2, T2>& zw);

    template<typename T0, typename T1> constexpr vec(const vec<3, T0>& xyz, T1 w);
    template<typename T0, typename T1> constexpr vec(const vec<3, T0>& xyz, const vec<1, T1>& w);

    template<typename T0, typename T1> constexpr vec(T0 x, const vec<3, T1>& yzw);
    template<typename T0, typename T1> constexpr vec(const vec<1, T0>& x, const vec<3, T1>& yzw);

    template<typename T0, typename T1> constexpr vec(const vec<2, T0>& xy, const vec<2, T1>& zw);

    template<typename T0> constexpr explicit vec(const vec<1, T0>& other);
    template<typename T0> constexpr explicit vec(const vec<4, T0>& other);

public:
    static constexpr std::size_t size() { return 4; }
    static constexpr std::size_t sizeb() { return 4 * sizeof(T); }
    constexpr T& operator[](std::size_t idx);
    constexpr const T& operator[](std::size_t idx) const;

public:
    constexpr vec<4, T>& operator=(const vec<4, T>& rhs);
    template<typename T0> constexpr vec<4, T>& operator=(const vec<4, T0>& rhs);

    template<typename T0> constexpr vec<4, T>& operator+=(T0 rhs);
    template<typename T0> constexpr vec<4, T>& operator+=(const vec<1, T0>& rhs);
    template<typename T0> constexpr vec<4, T>& operator+=(const vec<4, T0>& rhs);

    template<typename T0> constexpr vec<4, T>& operator-=(T0 rhs);
    template<typename T0> constexpr vec<4, T>& operator-=(const vec<1, T0>& rhs);
    template<typename T0> constexpr vec<4, T>& operator-=(const vec<4, T0>& rhs);

    template<typename T0> constexpr vec<4, T>& operator*=(T0 rhs);
    template<typename T0> constexpr vec<4, T>& operator*=(const vec<1, T0>& rhs);
    template<typename T0> constexpr vec<4, T>& operator*=(const vec<4, T0>& rhs);

    template<typename T0> constexpr vec<4, T>& operator/=(T0 rhs);
    template<typename T0> constexpr vec<4, T>& operator/=(const vec<1, T0>& rhs);
    template<typename T0> constexpr vec<4, T>& operator/=(const vec<4, T0>& rhs);

public:
    union
    {
        struct { T x, y, z, w; };
        T data[4];
    };
};

template<typename T> constexpr vec<4, T> operator-(const vec<4, T>& rhs);

template<typename T> constexpr vec<4, T> operator+(const vec<4, T>& lhs, T rhs);
template<typename T> constexpr vec<4, T> operator+(const vec<4, T>& lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<4, T> operator+(T lhs, const vec<4, T>& rhs);
template<typename T> constexpr vec<4, T> operator+(const vec<1, T>& lhs, const vec<4, T>& rhs);
template<typename T> constexpr vec<4, T> operator+(const vec<4, T>& lhs, const vec<4, T>& rhs);

template<typename T> constexpr vec<4, T> operator-(const vec<4, T>& lhs, T rhs);
template<typename T> constexpr vec<4, T> operator-(const vec<4, T>& lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<4, T> operator-(T lhs, const vec<4, T>& rhs);
template<typename T> constexpr vec<4, T> operator-(const vec<1, T>& lhs, const vec<4, T>& rhs);
template<typename T> constexpr vec<4, T> operator-(const vec<4, T>& lhs, const vec<4, T>& rhs);

template<typename T> constexpr vec<4, T> operator*(const vec<4, T>& lhs, T rhs);
template<typename T> constexpr vec<4, T> operator*(const vec<4, T>& lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<4, T> operator*(T lhs, const vec<4, T>& rhs);
template<typename T> constexpr vec<4, T> operator*(const vec<1, T>& lhs, const vec<4, T>& rhs);
template<typename T> constexpr vec<4, T> operator*(const vec<4, T>& lhs, const vec<4, T>& rhs);

template<typename T> constexpr vec<4, T> operator/(const vec<4, T>& lhs, T rhs);
template<typename T> constexpr vec<4, T> operator/(const vec<4, T>& lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<4, T> operator/(T lhs, const vec<4, T>& rhs);
template<typename T> constexpr vec<4, T> operator/(const vec<1, T>& lhs, const vec<4, T>& rhs);
template<typename T> constexpr vec<4, T> operator/(const vec<4, T>& lhs, const vec<4, T>& rhs);

template<typename T> constexpr bool operator==(const vec<4, T>& lhs, const vec<4, T>& rhs);
template<typename T> constexpr bool operator!=(const vec<4, T>& lhs, const vec<4, T>& rhs);

} // namespace sw

#include "swl/math/inl/vec4.inl"

#endif // SWL_MATH_VEC4_H_
