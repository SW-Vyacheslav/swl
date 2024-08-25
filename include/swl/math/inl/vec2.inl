#include "swl/math/vec2.h"

namespace sw
{

template<typename T>
constexpr vec<2, T>::vec()
    : x(0), y(0) {}

template<typename T>
constexpr vec<2, T>::vec(const vec<2, T>& other)
    : x(other.x), y(other.y) {}

template<typename T>
constexpr vec<2, T>::vec(T scalar)
    : x(scalar), y(scalar) {}

template<typename T>
constexpr vec<2, T>::vec(T x, T y)
    : x(x), y(y) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<2, T>::vec(T0 x, T1 y)
    : x(static_cast<T>(x)), y(static_cast<T>(y)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<2, T>::vec(const vec<1, T0>& x, T1 y)
    : x(static_cast<T>(x.x)), y(static_cast<T>(y)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<2, T>::vec(T0 x, const vec<1, T1>& y)
    : x(static_cast<T>(x)), y(static_cast<T>(y.y)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<2, T>::vec(const vec<1, T0>& x, const vec<1, T1>& y)
    : x(static_cast<T>(x.x)), y(static_cast<T>(y.y)) {}

template<typename T>
template<typename T0>
constexpr vec<2, T>::vec(const vec<1, T0>& other)
    : x(static_cast<T>(other.x)), y(0) {}

template<typename T>
template<typename T0>
constexpr vec<2, T>::vec(const vec<2, T0>& other)
    : x(static_cast<T>(other.x)), y(static_cast<T>(other.y)) {}

template<typename T>
template<typename T0>
constexpr vec<2, T>::vec(const vec<3, T0>& other)
    : x(static_cast<T>(other.x)), y(static_cast<T>(other.y)) {}

template<typename T>
template<typename T0>
constexpr vec<2, T>::vec(const vec<4, T0>& other)
    : x(static_cast<T>(other.x)), y(static_cast<T>(other.y)) {}

template<typename T>
constexpr T& vec<2, T>::operator[](std::size_t idx)
{
    // TODO: ASSERT OUT OF BOUNDS
    return data[idx];
}

template<typename T>
constexpr const T& vec<2, T>::operator[](std::size_t idx) const
{
    // TODO: ASSERT OUT OF BOUNDS
    return data[idx];
}

template<typename T>
constexpr vec<2, T>& vec<2, T>::operator=(const vec<2, T>& rhs)
{
    x = rhs.x;
    y = rhs.y;

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator=(const vec<2, T0>& rhs)
{
    x = static_cast<T>(rhs.x);
    y = static_cast<T>(rhs.y);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator+=(T0 rhs)
{
    x += static_cast<T>(rhs);
    y += static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator+=(const vec<1, T0>& rhs)
{
    x += static_cast<T>(rhs.x);
    y += static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator+=(const vec<2, T0>& rhs)
{
    x += static_cast<T>(rhs.x);
    y += static_cast<T>(rhs.y);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator-=(T0 rhs)
{
    x -= static_cast<T>(rhs);
    y -= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator-=(const vec<1, T0>& rhs)
{
    x -= static_cast<T>(rhs.x);
    y -= static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator-=(const vec<2, T0>& rhs)
{
    x -= static_cast<T>(rhs.x);
    y -= static_cast<T>(rhs.y);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator*=(T0 rhs)
{
    x *= static_cast<T>(rhs);
    y *= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator*=(const vec<1, T0>& rhs)
{
    x *= static_cast<T>(rhs.x);
    y *= static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator*=(const vec<2, T0>& rhs)
{
    x *= static_cast<T>(rhs.x);
    y *= static_cast<T>(rhs.y);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator/=(T0 rhs)
{
    x /= static_cast<T>(rhs);
    y /= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator/=(const vec<1, T0>& rhs)
{
    x /= static_cast<T>(rhs.x);
    y /= static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<2, T>& vec<2, T>::operator/=(const vec<2, T0>& rhs)
{
    x /= static_cast<T>(rhs.x);
    y /= static_cast<T>(rhs.y);

    return *this;
}

template<typename T>
constexpr vec<2, T> operator-(const vec<2, T>& rhs)
{
    return vec<2, T>(-rhs.x, -rhs.y);
}

template<typename T>
constexpr vec<2, T> operator+(const vec<2, T>& lhs, T rhs)
{
    return vec<2, T>(lhs.x + rhs,
                     lhs.y + rhs);
}

template<typename T>
constexpr vec<2, T> operator+(const vec<2, T>& lhs, const vec<1, T>& rhs)
{
    return vec<2, T>(lhs.x + rhs.x,
                     lhs.y + rhs.x);
}

template<typename T>
constexpr vec<2, T> operator+(T lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs + rhs.x,
                     lhs + rhs.y);
}

template<typename T>
constexpr vec<2, T> operator+(const vec<1, T>& lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs.x + rhs.x,
                     lhs.x + rhs.y);
}

template<typename T>
constexpr vec<2, T> operator+(const vec<2, T>& lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs.x + rhs.x,
                     lhs.y + rhs.y);
}

template<typename T>
constexpr vec<2, T> operator-(const vec<2, T>& lhs, T rhs)
{
    return vec<2, T>(lhs.x - rhs,
                     lhs.y - rhs);
}

template<typename T>
constexpr vec<2, T> operator-(const vec<2, T>& lhs, const vec<1, T>& rhs)
{
    return vec<2, T>(lhs.x - rhs.x,
                     lhs.y - rhs.x);
}

template<typename T>
constexpr vec<2, T> operator-(T lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs - rhs.x,
                     lhs - rhs.y);
}

template<typename T>
constexpr vec<2, T> operator-(const vec<1, T>& lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs.x - rhs.x,
                     lhs.x - rhs.y);
}

template<typename T>
constexpr vec<2, T> operator-(const vec<2, T>& lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs.x - rhs.x,
                     lhs.y - rhs.y);
}

template<typename T>
constexpr vec<2, T> operator*(const vec<2, T>& lhs, T rhs)
{
    return vec<2, T>(lhs.x * rhs,
                     lhs.y * rhs);
}

template<typename T>
constexpr vec<2, T> operator*(const vec<2, T>& lhs, const vec<1, T>& rhs)
{
    return vec<2, T>(lhs.x * rhs.x,
                     lhs.y * rhs.x);
}

template<typename T>
constexpr vec<2, T> operator*(T lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs * rhs.x,
                     lhs * rhs.y);
}

template<typename T>
constexpr vec<2, T> operator*(const vec<1, T>& lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs.x * rhs.x,
                     lhs.x * rhs.y);
}

template<typename T>
constexpr vec<2, T> operator*(const vec<2, T>& lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs.x * rhs.x,
                     lhs.y * rhs.y);
}

template<typename T>
constexpr vec<2, T> operator/(const vec<2, T>& lhs, T rhs)
{
    return vec<2, T>(lhs.x / rhs,
                     lhs.y / rhs);
}

template<typename T>
constexpr vec<2, T> operator/(const vec<2, T>& lhs, const vec<1, T>& rhs)
{
    return vec<2, T>(lhs.x / rhs.x,
                     lhs.y / rhs.x);
}

template<typename T>
constexpr vec<2, T> operator/(T lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs / rhs.x,
                     lhs / rhs.y);
}

template<typename T>
constexpr vec<2, T> operator/(const vec<1, T>& lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs.x / rhs.x,
                     lhs.x / rhs.y);
}

template<typename T>
constexpr vec<2, T> operator/(const vec<2, T>& lhs, const vec<2, T>& rhs)
{
    return vec<2, T>(lhs.x / rhs.x,
                     lhs.y / rhs.y);
}

template<typename T>
constexpr bool operator==(const vec<2, T>& lhs, const vec<2, T>& rhs)
{
    // TODO: FLOATING POINT COMPARE
    return lhs.x == rhs.x &&
           lhs.y == rhs.y;
}

template<typename T>
constexpr bool operator!=(const vec<2, T>& lhs, const vec<2, T>& rhs)
{
    return !(lhs == rhs);
}

} // namespace sw

