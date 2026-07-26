#ifndef SWE_MATH_VEC1_HPP_
#define SWE_MATH_VEC1_HPP_

#include "swe/math/common.hpp"

namespace swe
{

template<typename T>
struct vec<1, T>
{
public:
    constexpr vec();
    constexpr vec(const vec<1, T>& other);
    constexpr explicit vec(T scalar);

    template<typename T0> constexpr explicit vec(const vec<1, T0>& other);
    template<typename T0> constexpr explicit vec(const vec<2, T0>& other);
    template<typename T0> constexpr explicit vec(const vec<3, T0>& other);
    template<typename T0> constexpr explicit vec(const vec<4, T0>& other);

public:
    static constexpr std::size_t size() { return 1; }
    static constexpr std::size_t sizeb() { return 1 * sizeof(T); }
    constexpr T& operator[](std::size_t idx);
    constexpr const T& operator[](std::size_t idx) const;

public:
    constexpr vec<1, T>& operator=(const vec<1, T>& rhs);
    template<typename T0> constexpr vec<1, T>& operator=(const vec<1, T0>& rhs);

    template<typename T0> constexpr vec<1, T>& operator+=(T0 rhs);
    template<typename T0> constexpr vec<1, T>& operator+=(const vec<1, T0>& rhs);

    template<typename T0> constexpr vec<1, T>& operator-=(T0 rhs);
    template<typename T0> constexpr vec<1, T>& operator-=(const vec<1, T0>& rhs);

    template<typename T0> constexpr vec<1, T>& operator*=(T0 rhs);
    template<typename T0> constexpr vec<1, T>& operator*=(const vec<1, T0>& rhs);

    template<typename T0> constexpr vec<1, T>& operator/=(T0 rhs);
    template<typename T0> constexpr vec<1, T>& operator/=(const vec<1, T0>& rhs);

public:
    union
    {
        struct { T x; };
        T data[1];
    };
};

template<typename T> constexpr vec<1, T> operator-(const vec<1, T>& rhs);

template<typename T> constexpr vec<1, T> operator+(const vec<1, T>& lhs, T rhs);
template<typename T> constexpr vec<1, T> operator+(T lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<1, T> operator+(const vec<1, T>& lhs, const vec<1, T>& rhs);

template<typename T> constexpr vec<1, T> operator-(const vec<1, T>& lhs, T rhs);
template<typename T> constexpr vec<1, T> operator-(T lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<1, T> operator-(const vec<1, T>& lhs, const vec<1, T>& rhs);

template<typename T> constexpr vec<1, T> operator*(const vec<1, T>& lhs, T rhs);
template<typename T> constexpr vec<1, T> operator*(T lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<1, T> operator*(const vec<1, T>& lhs, const vec<1, T>& rhs);

template<typename T> constexpr vec<1, T> operator/(const vec<1, T>& lhs, T rhs);
template<typename T> constexpr vec<1, T> operator/(T lhs, const vec<1, T>& rhs);
template<typename T> constexpr vec<1, T> operator/(const vec<1, T>& lhs, const vec<1, T>& rhs);

template<typename T> constexpr bool operator==(const vec<1, T>& lhs, const vec<1, T>& rhs);
template<typename T> constexpr bool operator!=(const vec<1, T>& lhs, const vec<1, T>& rhs);

} // namespace swe

#include "swe/math/inl/vec1.inl"

#endif // SWE_MATH_VEC1_HPP_
