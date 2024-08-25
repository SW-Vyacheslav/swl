#include "swl/math/vec3.h"

namespace sw
{

template<typename T>
constexpr vec<3, T>::vec()
    : x(0), y(0), z(0) {}

template<typename T>
constexpr vec<3, T>::vec(const vec<3, T>& other)
    : x(other.x), y(other.y), z(other.z) {}

template<typename T>
constexpr vec<3, T>::vec(T scalar)
    : x(scalar), y(scalar), z(scalar) {}

template<typename T>
constexpr vec<3, T>::vec(T x, T y, T z)
    : x(x), y(y), z(z) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<3, T>::vec(T0 x, T1 y, T2 z)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(z)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<3, T>::vec(const vec<1, T0>& x, T1 y, T2 z)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(z)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<3, T>::vec(T0 x, const vec<1, T1>& y, T2 z)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(z)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<3, T>::vec(T0 x, T1 y, const vec<1, T2>& z)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(z.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<3, T>::vec(const vec<1, T0>& x, const vec<1, T1>& y, T2 z)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(z)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<3, T>::vec(T0 x, const vec<1, T1>& y, const vec<1, T2>& z)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(z.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<3, T>::vec(const vec<1, T0>& x, T1 y, const vec<1, T2>& z)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(z.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<3, T>::vec(const vec<1, T0>& x, const vec<1, T1>& y, const vec<1, T2>& z)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(z.x)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<3, T>::vec(const vec<2, T0>& xy, T1 z)
    : x(static_cast<T>(xy.x)),
      y(static_cast<T>(xy.y)),
      z(static_cast<T>(z)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<3, T>::vec(const vec<2, T0>& xy, const vec<1, T1>& z)
    : x(static_cast<T>(xy.x)),
      y(static_cast<T>(xy.y)),
      z(static_cast<T>(z.x)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<3, T>::vec(T0 x, const vec<2, T1>& yz)
    : x(static_cast<T>(x)),
      y(static_cast<T>(yz.x)),
      z(static_cast<T>(yz.y)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<3, T>::vec(const vec<1, T0>& x, const vec<2, T1>& yz)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(yz.x)),
      z(static_cast<T>(yz.y)) {}

template<typename T>
template<typename T0>
constexpr vec<3, T>::vec(const vec<1, T0>& other)
    : x(static_cast<T>(other.x)),
      y(static_cast<T>(other.x)),
      z(static_cast<T>(other.x)) {}

template<typename T>
template<typename T0>
constexpr vec<3, T>::vec(const vec<3, T0>& other)
    : x(static_cast<T>(other.x)),
      y(static_cast<T>(other.y)),
      z(static_cast<T>(other.z)) {}

template<typename T>
template<typename T0>
constexpr vec<3, T>::vec(const vec<4, T0>& other)
    : x(static_cast<T>(other.x)),
      y(static_cast<T>(other.y)),
      z(static_cast<T>(other.z)) {}

template<typename T>
constexpr vec<3, T>& vec<3, T>::operator=(const vec<3, T>& rhs)
{
    x = rhs.x;
    y = rhs.y;
    z = rhs.z;

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator=(const vec<3, T0>& rhs)
{
    x = static_cast<T>(rhs.x);
    y = static_cast<T>(rhs.y);
    z = static_cast<T>(rhs.z);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator+=(T0 rhs)
{
    x += static_cast<T>(rhs);
    y += static_cast<T>(rhs);
    z += static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator+=(const vec<1, T0>& rhs)
{
    x += static_cast<T>(rhs.x);
    y += static_cast<T>(rhs.x);
    z += static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator+=(const vec<3, T0>& rhs)
{
    x += static_cast<T>(rhs.x);
    y += static_cast<T>(rhs.y);
    z += static_cast<T>(rhs.z);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator-=(T0 rhs)
{
    x -= static_cast<T>(rhs);
    y -= static_cast<T>(rhs);
    z -= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator-=(const vec<1, T0>& rhs)
{
    x -= static_cast<T>(rhs.x);
    y -= static_cast<T>(rhs.x);
    z -= static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator-=(const vec<3, T0>& rhs)
{
    x -= static_cast<T>(rhs.x);
    y -= static_cast<T>(rhs.y);
    z -= static_cast<T>(rhs.z);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator*=(T0 rhs)
{
    x *= static_cast<T>(rhs);
    y *= static_cast<T>(rhs);
    z *= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator*=(const vec<1, T0>& rhs)
{
    x *= static_cast<T>(rhs.x);
    y *= static_cast<T>(rhs.x);
    z *= static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator*=(const vec<3, T0>& rhs)
{
    x *= static_cast<T>(rhs.x);
    y *= static_cast<T>(rhs.y);
    z *= static_cast<T>(rhs.z);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator/=(T0 rhs)
{
    x /= static_cast<T>(rhs);
    y /= static_cast<T>(rhs);
    z /= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator/=(const vec<1, T0>& rhs)
{
    x /= static_cast<T>(rhs.x);
    y /= static_cast<T>(rhs.x);
    z /= static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<3, T>& vec<3, T>::operator/=(const vec<3, T0>& rhs)
{
    x /= static_cast<T>(rhs.x);
    y /= static_cast<T>(rhs.y);
    z /= static_cast<T>(rhs.z);

    return *this;
}

template<typename T>
constexpr vec<3, T> operator-(const vec<3, T>& rhs)
{
    return vec<3, T>(-rhs.x, -rhs.y, -rhs.z);
}

template<typename T>
constexpr vec<3, T> operator+(const vec<3, T>& lhs, T rhs)
{
    return vec<3, T>(lhs.x + rhs,
                     lhs.y + rhs,
                     lhs.z + rhs);
}

template<typename T>
constexpr vec<3, T> operator+(const vec<3, T>& lhs, const vec<1, T>& rhs)
{
    return vec<3, T>(lhs.x + rhs.x,
                     lhs.y + rhs.x,
                     lhs.z + rhs.x);
}

template<typename T>
constexpr vec<3, T> operator+(T lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs + rhs.x,
                     lhs + rhs.y,
                     lhs + rhs.z);
}

template<typename T>
constexpr vec<3, T> operator+(const vec<1, T>& lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs.x + rhs.x,
                     lhs.x + rhs.y,
                     lhs.x + rhs.z);
}

template<typename T>
constexpr vec<3, T> operator+(const vec<3, T>& lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs.x + rhs.x,
                     lhs.y + rhs.y,
                     lhs.z + rhs.z);
}

template<typename T>
constexpr vec<3, T> operator-(const vec<3, T>& lhs, T rhs)
{
    return vec<3, T>(lhs.x - rhs,
                     lhs.y - rhs,
                     lhs.z - rhs);
}

template<typename T>
constexpr vec<3, T> operator-(const vec<3, T>& lhs, const vec<1, T>& rhs)
{
    return vec<3, T>(lhs.x - rhs.x,
                     lhs.y - rhs.x,
                     lhs.z - rhs.x);
}

template<typename T>
constexpr vec<3, T> operator-(T lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs - rhs.x,
                     lhs - rhs.y,
                     lhs - rhs.z);
}

template<typename T>
constexpr vec<3, T> operator-(const vec<1, T>& lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs.x - rhs.x,
                     lhs.x - rhs.y,
                     lhs.x - rhs.z);
}

template<typename T>
constexpr vec<3, T> operator-(const vec<3, T>& lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs.x - rhs.x,
                     lhs.y - rhs.y,
                     lhs.z - rhs.z);
}

template<typename T>
constexpr vec<3, T> operator*(const vec<3, T>& lhs, T rhs)
{
    return vec<3, T>(lhs.x * rhs,
                     lhs.y * rhs,
                     lhs.z * rhs);
}

template<typename T>
constexpr vec<3, T> operator*(const vec<3, T>& lhs, const vec<1, T>& rhs)
{
    return vec<3, T>(lhs.x * rhs.x,
                     lhs.y * rhs.x,
                     lhs.z * rhs.x);
}

template<typename T>
constexpr vec<3, T> operator*(T lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs * rhs.x,
                     lhs * rhs.y,
                     lhs * rhs.z);
}

template<typename T>
constexpr vec<3, T> operator*(const vec<1, T>& lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs.x * rhs.x,
                     lhs.x * rhs.y,
                     lhs.x * rhs.z);
}

template<typename T>
constexpr vec<3, T> operator*(const vec<3, T>& lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs.x * rhs.x,
                     lhs.y * rhs.y,
                     lhs.z * rhs.z);
}

template<typename T>
constexpr vec<3, T> operator/(const vec<3, T>& lhs, T rhs)
{
    return vec<3, T>(lhs.x / rhs,
                     lhs.y / rhs,
                     lhs.z / rhs);
}

template<typename T>
constexpr vec<3, T> operator/(const vec<3, T>& lhs, const vec<1, T>& rhs)
{
    return vec<3, T>(lhs.x / rhs.x,
                     lhs.y / rhs.x,
                     lhs.z / rhs.x);
}

template<typename T>
constexpr vec<3, T> operator/(T lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs / rhs.x,
                     lhs / rhs.y,
                     lhs / rhs.z);
}

template<typename T>
constexpr vec<3, T> operator/(const vec<1, T>& lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs.x / rhs.x,
                     lhs.x / rhs.y,
                     lhs.x / rhs.z);
}

template<typename T>
constexpr vec<3, T> operator/(const vec<3, T>& lhs, const vec<3, T>& rhs)
{
    return vec<3, T>(lhs.x / rhs.x,
                     lhs.y / rhs.y,
                     lhs.z / rhs.z);
}

template<typename T>
constexpr bool operator==(const vec<3, T>& lhs, const vec<3, T>& rhs)
{
    // TODO: FLOATING POINT COMPARE
    return lhs.x == rhs.x &&
           lhs.y == rhs.y &&
           lhs.z == rhs.z;
}

template<typename T>
constexpr bool operator!=(const vec<3, T>& lhs, const vec<3, T>& rhs)
{
    return !(lhs == rhs);
}

} // namespace sw
