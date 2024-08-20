#ifndef SWL_MATH_VEC1_H_
#define SWL_MATH_VEC1_H_

#include "swl/math/common.h"

namespace swl
{

template<typename T>
struct vec<1, T>
{
public:
    constexpr vec()
        : x(0) {}

    constexpr vec(const vec<1, T>& other)
        : x(other.x) {}

    explicit vec(T scalar)
        : x(scalar) {}

    template<typename A>
    explicit vec(const vec<1, A>& other)
        : x(static_cast<T>(other.x)) {}

    template<typename A>
    explicit vec(const vec<2, A>& other)
        : x(static_cast<T>(other.x)) {}

    template<typename A>
    explicit vec(const vec<3, A>& other)
        : x(static_cast<T>(other.x)) {}

    template<typename A>
    explicit vec(const vec<4, A>& other)
        : x(static_cast<T>(other.x)) {}

public:
    static constexpr std::size_t size() { return 1; }
    constexpr T& operator[](std::size_t idx);
    constexpr const T& operator[](std::size_t idx) const;

public:
    constexpr vec<1, T>& operator=(const vec<1, T>& rhs);
    template<typename A> constexpr vec<1, T>& operator=(const vec<1, A>& rhs);
    template<typename A> constexpr vec<1, T>& operator+=(A rhs);
    template<typename A> constexpr vec<1, T>& operator+=(const vec<1, A>& rhs);
    template<typename A> constexpr vec<1, T>& operator-=(A rhs);
    template<typename A> constexpr vec<1, T>& operator-=(const vec<1, A>& rhs);
    template<typename A> constexpr vec<1, T>& operator*=(A rhs);
    template<typename A> constexpr vec<1, T>& operator*=(const vec<1, A>& rhs);
    template<typename A> constexpr vec<1, T>& operator/=(A rhs);
    template<typename A> constexpr vec<1, T>& operator/=(const vec<1, A>& rhs);

public:
    union
    {
        struct { T x; };
        T data[1];
    };
};

template<typename T>
constexpr T& vec<1, T>::operator[](std::size_t idx)
{
    // TODO: ASSERT OUT OF BOUNDS
    return data[idx];
}

template<typename T>
constexpr const T& vec<1, T>::operator[](std::size_t idx) const
{
    // TODO: ASSERT OUT OF BOUNDS
    return data[idx];
}

template<typename T>
constexpr vec<1, T>& vec<1, T>::operator=(const vec& rhs)
{
    x = rhs.x;
    return *this;
}

template<typename T>
template<typename A>
constexpr vec<1, T>& vec<1, T>::operator=(const vec<1, A>& rhs)
{
    x = static_cast<T>(rhs.x);
    return *this;
}

template<typename T>
template<typename A>
constexpr vec<1, T>& vec<1, T>::operator+=(A rhs)
{
    x += static_cast<T>(rhs);
    return *this;
}

template<typename T>
template<typename A>
constexpr vec<1, T>& vec<1, T>::operator+=(const vec<1, A>& rhs)
{
    x += static_cast<T>(rhs.x);
    return *this;
}

template<typename T>
template<typename A>
constexpr vec<1, T>& vec<1, T>::operator-=(A rhs)
{
    x -= static_cast<T>(rhs);
    return *this;
}

template<typename T>
template<typename A>
constexpr vec<1, T>& vec<1, T>::operator-=(const vec<1, A>& rhs)
{
    x -= static_cast<T>(rhs.x);
    return *this;
}

template<typename T>
template<typename A>
constexpr vec<1, T>& vec<1, T>::operator*=(A rhs)
{
    x *= static_cast<T>(rhs);
    return *this;
}

template<typename T>
template<typename A>
constexpr vec<1, T>& vec<1, T>::operator*=(const vec<1, A>& rhs)
{
    x *= static_cast<T>(rhs.x);
    return *this;
}

template<typename T>
template<typename A>
constexpr vec<1, T>& vec<1, T>::operator/=(A rhs)
{
    x /= static_cast<T>(rhs);
    return *this;
}

template<typename T>
template<typename A>
constexpr vec<1, T>& vec<1, T>::operator/=(const vec<1, A>& rhs)
{
    x /= static_cast<T>(rhs.x);
    return *this;
}

template<typename T>
constexpr vec<1, T> operator-(const vec<1, T>& rhs)
{
    return vec<1, T>(-rhs.x);
}

template<typename T>
constexpr vec<1, T> operator+(const vec<1, T>& lhs, T rhs)
{
    return vec<1, T>(lhs.x + rhs);
}

template<typename T>
constexpr vec<1, T> operator+(T lhs, const vec<1, T>& rhs)
{
    return vec<1, T>(lhs + rhs.x);
}

template<typename T>
constexpr vec<1, T> operator+(const vec<1, T>& lhs, const vec<1, T>& rhs)
{
    return vec<1, T>(lhs.x + rhs.x);
}

template<typename T>
constexpr vec<1, T> operator-(const vec<1, T>& lhs, T rhs)
{
    return vec<1, T>(lhs.x - rhs);
}

template<typename T>
constexpr vec<1, T> operator-(T lhs, const vec<1, T>& rhs)
{
    return vec<1, T>(lhs - rhs.x);
}

template<typename T>
constexpr vec<1, T> operator-(const vec<1, T>& lhs, const vec<1, T>& rhs)
{
    return vec<1, T>(lhs.x - rhs.x);
}

template<typename T>
constexpr vec<1, T> operator*(const vec<1, T>& lhs, T rhs)
{
    return vec<1, T>(lhs.x * rhs);
}

template<typename T>
constexpr vec<1, T> operator*(T lhs, const vec<1, T>& rhs)
{
    return vec<1, T>(lhs * rhs.x);
}

template<typename T>
constexpr vec<1, T> operator*(const vec<1, T>& lhs, const vec<1, T>& rhs)
{
    return vec<1, T>(lhs.x * rhs.x);
}

template<typename T>
constexpr vec<1, T> operator/(const vec<1, T>& lhs, T rhs)
{
    return vec<1, T>(lhs.x / rhs);
}

template<typename T>
constexpr vec<1, T> operator/(T lhs, const vec<1, T>& rhs)
{
    return vec<1, T>(lhs / rhs.x);
}

template<typename T>
constexpr vec<1, T> operator/(const vec<1, T>& lhs, const vec<1, T>& rhs)
{
    return vec<1, T>(lhs.x / rhs.x);
}

template<typename T>
constexpr bool operator==(const vec<1, T>& lhs, const vec<1, T>& rhs)
{
    // TODO: FLOATING POINT COMPARE
    return lhs.x == rhs.x;
}

template<typename T>
constexpr vec<1, T> operator!=(const vec<1, T>& lhs, const vec<1, T>& rhs)
{
    return !(lhs == rhs);
}

} // namespace swl

#endif // SWL_MATH_VEC1_H_
