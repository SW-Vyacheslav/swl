#ifndef SWL_MATH_VEC1_H_
#define SWL_MATH_VEC1_H_

#include "swl/math/common.h"

namespace sw
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

} // namespace sw

#include "swl/math/inl/vec1.inl"

#endif // SWL_MATH_VEC1_H_
