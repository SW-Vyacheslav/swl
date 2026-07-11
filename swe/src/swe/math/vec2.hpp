#ifndef SWE_MATH_VEC2_HPP_
#define SWE_MATH_VEC2_HPP_

#include "swe/math/common.hpp"

namespace swe
{

template<typename T>
struct vec<2, T>
{
public:
    constexpr vec();
    constexpr vec(const vec<2, T>& other);
    constexpr explicit vec(T scalar);
    constexpr vec(T x, T y);

    template<typename T0, typename T1> constexpr vec(T0 x, T1 y);
    template<typename T0, typename T1> constexpr vec(const vec<1, T0>& x, T1 y);
    template<typename T0, typename T1> constexpr vec(T0 x, const vec<1, T1>& y);
    template<typename T0, typename T1> constexpr vec(const vec<1, T0>& x, const vec<1, T1>& y);

    template<typename T0> constexpr explicit vec(const vec<1, T0>& other);
    template<typename T0> constexpr explicit vec(const vec<2, T0>& other);
    template<typename T0> constexpr explicit vec(const vec<3, T0>& other);
    template<typename T0> constexpr explicit vec(const vec<4, T0>& other);

public:
    static constexpr std::size_t size() { return 2; }
    static constexpr std::size_t sizeb() { return 2 * sizeof(T); }
    constexpr T& operator[](std::size_t idx);
    constexpr const T& operator[](std::size_t idx) const;

public:
    constexpr vec<2, T>& operator=(const vec<2, T>& rhs);
    template<typename T0> constexpr vec<2, T>& operator=(const vec<2, T0>& rhs);

    template<typename T0> constexpr vec<2, T>& operator+=(T0 rhs);
    template<typename T0> constexpr vec<2, T>& operator+=(const vec<1, T0>& rhs);
    template<typename T0> constexpr vec<2, T>& operator+=(const vec<2, T0>& rhs);

    template<typename T0> constexpr vec<2, T>& operator-=(T0 rhs);
    template<typename T0> constexpr vec<2, T>& operator-=(const vec<1, T0>& rhs);
    template<typename T0> constexpr vec<2, T>& operator-=(const vec<2, T0>& rhs);

    template<typename T0> constexpr vec<2, T>& operator*=(T0 rhs);
    template<typename T0> constexpr vec<2, T>& operator*=(const vec<1, T0>& rhs);
    template<typename T0> constexpr vec<2, T>& operator*=(const vec<2, T0>& rhs);

    template<typename T0> constexpr vec<2, T>& operator/=(T0 rhs);
    template<typename T0> constexpr vec<2, T>& operator/=(const vec<1, T0>& rhs);
    template<typename T0> constexpr vec<2, T>& operator/=(const vec<2, T0>& rhs);

public:
    union
    {
        struct { T x, y; };
        T data[2];
    };
};

template<typename T> constexpr vec<2, T> operator-(const vec<2, T>& rhs);

template<typename T> constexpr vec<2, T> operator+(const vec<2, T>& lhs, T rhs);
template<typename T> constexpr vec<2, T> operator+(const vec<2, T>& lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<2, T> operator+(T lhs, const vec<2, T>& rhs);
template<typename T> constexpr vec<2, T> operator+(const vec<1, T>& lhs, const vec<2, T>& rhs);
template<typename T> constexpr vec<2, T> operator+(const vec<2, T>& lhs, const vec<2, T>& rhs);

template<typename T> constexpr vec<2, T> operator-(const vec<2, T>& lhs, T rhs);
template<typename T> constexpr vec<2, T> operator-(const vec<2, T>& lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<2, T> operator-(T lhs, const vec<2, T>& rhs);
template<typename T> constexpr vec<2, T> operator-(const vec<1, T>& lhs, const vec<2, T>& rhs);
template<typename T> constexpr vec<2, T> operator-(const vec<2, T>& lhs, const vec<2, T>& rhs);

template<typename T> constexpr vec<2, T> operator*(const vec<2, T>& lhs, T rhs);
template<typename T> constexpr vec<2, T> operator*(const vec<2, T>& lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<2, T> operator*(T lhs, const vec<2, T>& rhs);
template<typename T> constexpr vec<2, T> operator*(const vec<1, T>& lhs, const vec<2, T>& rhs);
template<typename T> constexpr vec<2, T> operator*(const vec<2, T>& lhs, const vec<2, T>& rhs);

template<typename T> constexpr vec<2, T> operator/(const vec<2, T>& lhs, T rhs);
template<typename T> constexpr vec<2, T> operator/(const vec<2, T>& lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<2, T> operator/(T lhs, const vec<2, T>& rhs);
template<typename T> constexpr vec<2, T> operator/(const vec<1, T>& lhs, const vec<2, T>& rhs);
template<typename T> constexpr vec<2, T> operator/(const vec<2, T>& lhs, const vec<2, T>& rhs);

template<typename T> constexpr bool operator==(const vec<2, T>& lhs, const vec<2, T>& rhs);
template<typename T> constexpr bool operator!=(const vec<2, T>& lhs, const vec<2, T>& rhs);

} // namespace swe

#include "swe/math/inl/vec2.inl"

#endif // SWE_MATH_VEC2_HPP_
