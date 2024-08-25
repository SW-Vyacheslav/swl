#include "swl/math/vec4.h"

namespace sw
{

template<typename T>
constexpr vec<4, T>::vec()
    : x(0), y(0), z(0), w(0) {}

template<typename T>
constexpr vec<4, T>::vec(const vec<4, T>& other)
    : x(other.x), y(other.y), z(other.z), w(other.w) {}

template<typename T>
constexpr vec<4, T>::vec(T scalar)
    : x(scalar), y(scalar), z(scalar), w(scalar) {}

template<typename T>
constexpr vec<4, T>::vec(T x, T y, T z, T w)
    : x(x), y(y), z(z), w(w) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(T0 x, T1 y, T2 z, T3 w)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(z)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(const vec<1, T0>& x, T1 y, T2 z, T3 w)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(z)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(T0 x, const vec<1, T1>& y, T2 z, T3 w)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(z)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(T0 x, T1 y, const vec<1, T2>& z, T3 w)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(z.x)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(T0 x, T1 y, T2 z, const vec<1, T3>& w)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(z)),
      w(static_cast<T>(w.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(const vec<1, T0>& x, const vec<1, T1>& y, T2 z, T3 w)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(z)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(T0 x, const vec<1, T1>& y, const vec<1, T2>& z, T3 w)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(z.x)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(T0 x, T1 y, const vec<1, T2>& z, const vec<1, T3>& w)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(z.x)),
      w(static_cast<T>(w.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(const vec<1, T0>& x, T1 y, const vec<1, T2>& z, T3 w)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(z.x)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(const vec<1, T0>& x, T1 y, T2 z, const vec<1, T3>& w)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(z)),
      w(static_cast<T>(w.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(T0 x, const vec<1, T1>& y, T2 z, const vec<1, T3>& w)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(z)),
      w(static_cast<T>(w.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(const vec<1, T0>& x, const vec<1, T1>& y, const vec<1, T2>& z, T3 w)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(z.x)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(T0 x, const vec<1, T1>& y, const vec<1, T2>& z, const vec<1, T3>& w)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(z.x)),
      w(static_cast<T>(w.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2, typename T3>
constexpr vec<4, T>::vec(const vec<1, T0>& x, const vec<1, T1>& y, const vec<1, T2>& z, const vec<1, T3>& w)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(z.x)),
      w(static_cast<T>(w.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(const vec<2, T0>& xy, T1 z, T2 w)
    : x(static_cast<T>(xy.x)),
      y(static_cast<T>(xy.y)),
      z(static_cast<T>(z)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(const vec<2, T0>& xy, const vec<1, T1>& z, T2 w)
    : x(static_cast<T>(xy.x)),
      y(static_cast<T>(xy.y)),
      z(static_cast<T>(z.x)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(const vec<2, T0>& xy, T1 z, const vec<1, T2>& w)
    : x(static_cast<T>(xy.x)),
      y(static_cast<T>(xy.y)),
      z(static_cast<T>(z)),
      w(static_cast<T>(w.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(const vec<2, T0>& xy, const vec<1, T1>& z, const vec<1, T2>& w)
    : x(static_cast<T>(xy.x)),
      y(static_cast<T>(xy.y)),
      z(static_cast<T>(z.x)),
      w(static_cast<T>(w.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(T0 x, const vec<2, T1>& yz, T2 w)
    : x(static_cast<T>(x)),
      y(static_cast<T>(yz.x)),
      z(static_cast<T>(yz.y)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(const vec<1, T0>& x, const vec<2, T1>& yz, T2 w)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(yz.x)),
      z(static_cast<T>(yz.y)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(T0 x, const vec<2, T1>& yz, const vec<1, T2>& w)
    : x(static_cast<T>(x)),
      y(static_cast<T>(yz.x)),
      z(static_cast<T>(yz.y)),
      w(static_cast<T>(w.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(const vec<1, T0>& x, const vec<2, T1>& yz, const vec<1, T2>& w)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(yz.x)),
      z(static_cast<T>(yz.y)),
      w(static_cast<T>(w.x)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(T0 x, T1 y, const vec<2, T2>& zw)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(zw.x)),
      w(static_cast<T>(zw.y)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(const vec<1, T0>& x, T1 y, const vec<2, T2>& zw)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y)),
      z(static_cast<T>(zw.x)),
      w(static_cast<T>(zw.y)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(T0 x, const vec<1, T1>& y, const vec<2, T2>& zw)
    : x(static_cast<T>(x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(zw.x)),
      w(static_cast<T>(zw.y)) {}

template<typename T>
template<typename T0, typename T1, typename T2>
constexpr vec<4, T>::vec(const vec<1, T0>& x, const vec<1, T1>& y, const vec<2, T2>& zw)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(y.x)),
      z(static_cast<T>(zw.x)),
      w(static_cast<T>(zw.y)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<4, T>::vec(const vec<3, T0>& xyz, T1 w)
    : x(static_cast<T>(xyz.x)),
      y(static_cast<T>(xyz.y)),
      z(static_cast<T>(xyz.z)),
      w(static_cast<T>(w)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<4, T>::vec(const vec<3, T0>& xyz, const vec<1, T1>& w)
    : x(static_cast<T>(xyz.x)),
      y(static_cast<T>(xyz.y)),
      z(static_cast<T>(xyz.z)),
      w(static_cast<T>(w.x)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<4, T>::vec(T0 x, const vec<3, T1>& yzw)
    : x(static_cast<T>(x)),
      y(static_cast<T>(yzw.x)),
      z(static_cast<T>(yzw.y)),
      w(static_cast<T>(yzw.z)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<4, T>::vec(const vec<1, T0>& x, const vec<3, T1>& yzw)
    : x(static_cast<T>(x.x)),
      y(static_cast<T>(yzw.x)),
      z(static_cast<T>(yzw.y)),
      w(static_cast<T>(yzw.z)) {}

template<typename T>
template<typename T0, typename T1>
constexpr vec<4, T>::vec(const vec<2, T0>& xy, const vec<2, T1>& zw)
    : x(static_cast<T>(xy.x)),
      y(static_cast<T>(xy.y)),
      z(static_cast<T>(zw.x)),
      w(static_cast<T>(zw.y)) {}

template<typename T>
template<typename T0>
constexpr vec<4, T>::vec(const vec<1, T0>& other)
    : x(static_cast<T>(other.x)),
      y(static_cast<T>(other.x)),
      z(static_cast<T>(other.x)),
      w(static_cast<T>(other.x)) {}

template<typename T>
template<typename T0>
constexpr vec<4, T>::vec(const vec<4, T0>& other)
    : x(static_cast<T>(other.x)),
      y(static_cast<T>(other.y)),
      z(static_cast<T>(other.z)),
      w(static_cast<T>(other.w)) {}

template<typename T>
constexpr T& vec<4, T>::operator[](std::size_t idx)
{
    // TODO: ASSERT OUT OF BOUNDS
    return data[idx];
}

template<typename T>
constexpr const T& vec<4, T>::operator[](std::size_t idx) const
{
    // TODO: ASSERT OUT OF BOUNDS
    return data[idx];
}

template<typename T>
constexpr vec<4, T>& vec<4, T>::operator=(const vec<4, T>& rhs)
{
    x = rhs.x;
    y = rhs.y;
    z = rhs.z;
    w = rhs.w;

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator=(const vec<4, T0>& rhs)
{
    x = static_cast<T>(rhs.x);
    y = static_cast<T>(rhs.y);
    z = static_cast<T>(rhs.z);
    w = static_cast<T>(rhs.w);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator+=(T0 rhs)
{
    x += static_cast<T>(rhs);
    y += static_cast<T>(rhs);
    z += static_cast<T>(rhs);
    w += static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator+=(const vec<1, T0>& rhs)
{
    x += static_cast<T>(rhs.x);
    y += static_cast<T>(rhs.x);
    z += static_cast<T>(rhs.x);
    w += static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator+=(const vec<4, T0>& rhs)
{
    x += static_cast<T>(rhs.x);
    y += static_cast<T>(rhs.y);
    z += static_cast<T>(rhs.z);
    w += static_cast<T>(rhs.w);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator-=(T0 rhs)
{
    x -= static_cast<T>(rhs);
    y -= static_cast<T>(rhs);
    z -= static_cast<T>(rhs);
    w -= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator-=(const vec<1, T0>& rhs)
{
    x -= static_cast<T>(rhs.x);
    y -= static_cast<T>(rhs.x);
    z -= static_cast<T>(rhs.x);
    w -= static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator-=(const vec<4, T0>& rhs)
{
    x -= static_cast<T>(rhs.x);
    y -= static_cast<T>(rhs.y);
    z -= static_cast<T>(rhs.z);
    w -= static_cast<T>(rhs.w);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator*=(T0 rhs)
{
    x *= static_cast<T>(rhs);
    y *= static_cast<T>(rhs);
    z *= static_cast<T>(rhs);
    w *= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator*=(const vec<1, T0>& rhs)
{
    x *= static_cast<T>(rhs.x);
    y *= static_cast<T>(rhs.x);
    z *= static_cast<T>(rhs.x);
    w *= static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator*=(const vec<4, T0>& rhs)
{
    x *= static_cast<T>(rhs.x);
    y *= static_cast<T>(rhs.y);
    z *= static_cast<T>(rhs.z);
    w *= static_cast<T>(rhs.w);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator/=(T0 rhs)
{
    x /= static_cast<T>(rhs);
    y /= static_cast<T>(rhs);
    z /= static_cast<T>(rhs);
    w /= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator/=(const vec<1, T0>& rhs)
{
    x /= static_cast<T>(rhs.x);
    y /= static_cast<T>(rhs.x);
    z /= static_cast<T>(rhs.x);
    w /= static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<4, T>& vec<4, T>::operator/=(const vec<4, T0>& rhs)
{
    x /= static_cast<T>(rhs.x);
    y /= static_cast<T>(rhs.y);
    z /= static_cast<T>(rhs.z);
    w /= static_cast<T>(rhs.w);

    return *this;
}

template<typename T>
constexpr vec<4, T> operator-(const vec<4, T>& rhs)
{
    return vec<4, T>(-rhs.x, -rhs.y, -rhs.z, -rhs.w);
}

template<typename T>
constexpr vec<4, T> operator+(const vec<4, T>& lhs, T rhs)
{
    return vec<4, T>(lhs.x + rhs,
                     lhs.y + rhs,
                     lhs.z + rhs,
                     lhs.w + rhs);
}

template<typename T>
constexpr vec<4, T> operator+(const vec<4, T>& lhs, const vec<1, T>& rhs)
{
    return vec<4, T>(lhs.x + rhs.x,
                     lhs.y + rhs.x,
                     lhs.z + rhs.x,
                     lhs.w + rhs.x);
}

template<typename T>
constexpr vec<4, T> operator+(T lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs + rhs.x,
                     lhs + rhs.y,
                     lhs + rhs.z,
                     lhs + rhs.w);
}

template<typename T>
constexpr vec<4, T> operator+(const vec<1, T>& lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs.x + rhs.x,
                     lhs.x + rhs.y,
                     lhs.x + rhs.z,
                     lhs.x + rhs.w);
}

template<typename T>
constexpr vec<4, T> operator+(const vec<4, T>& lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs.x + rhs.x,
                     lhs.y + rhs.y,
                     lhs.z + rhs.z,
                     lhs.w + rhs.w);
}

template<typename T>
constexpr vec<4, T> operator-(const vec<4, T>& lhs, T rhs)
{
    return vec<4, T>(lhs.x - rhs,
                     lhs.y - rhs,
                     lhs.z - rhs,
                     lhs.w - rhs);
}

template<typename T>
constexpr vec<4, T> operator-(const vec<4, T>& lhs, const vec<1, T>& rhs)
{
    return vec<4, T>(lhs.x - rhs.x,
                     lhs.y - rhs.x,
                     lhs.z - rhs.x,
                     lhs.w - rhs.x);
}

template<typename T>
constexpr vec<4, T> operator-(T lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs - rhs.x,
                     lhs - rhs.y,
                     lhs - rhs.z,
                     lhs - rhs.w);
}

template<typename T>
constexpr vec<4, T> operator-(const vec<1, T>& lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs.x - rhs.x,
                     lhs.x - rhs.y,
                     lhs.x - rhs.z,
                     lhs.x - rhs.w);
}

template<typename T>
constexpr vec<4, T> operator-(const vec<4, T>& lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs.x - rhs.x,
                     lhs.y - rhs.y,
                     lhs.z - rhs.z,
                     lhs.w - rhs.w);
}

template<typename T>
constexpr vec<4, T> operator*(const vec<4, T>& lhs, T rhs)
{
    return vec<4, T>(lhs.x * rhs,
                     lhs.y * rhs,
                     lhs.z * rhs,
                     lhs.w * rhs);
}

template<typename T>
constexpr vec<4, T> operator*(const vec<4, T>& lhs, const vec<1, T>& rhs)
{
    return vec<4, T>(lhs.x * rhs.x,
                     lhs.y * rhs.x,
                     lhs.z * rhs.x,
                     lhs.w * rhs.x);
}

template<typename T>
constexpr vec<4, T> operator*(T lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs * rhs.x,
                     lhs * rhs.y,
                     lhs * rhs.z,
                     lhs * rhs.w);
}

template<typename T>
constexpr vec<4, T> operator*(const vec<1, T>& lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs.x * rhs.x,
                     lhs.x * rhs.y,
                     lhs.x * rhs.z,
                     lhs.x * rhs.w);
}

template<typename T>
constexpr vec<4, T> operator*(const vec<4, T>& lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs.x * rhs.x,
                     lhs.y * rhs.y,
                     lhs.z * rhs.z,
                     lhs.w * rhs.w);
}

template<typename T>
constexpr vec<4, T> operator/(const vec<4, T>& lhs, T rhs)
{
    return vec<4, T>(lhs.x / rhs,
                     lhs.y / rhs,
                     lhs.z / rhs,
                     lhs.w / rhs);
}

template<typename T>
constexpr vec<4, T> operator/(const vec<4, T>& lhs, const vec<1, T>& rhs)
{
    return vec<4, T>(lhs.x / rhs.x,
                     lhs.y / rhs.x,
                     lhs.z / rhs.x,
                     lhs.w / rhs.x);
}

template<typename T>
constexpr vec<4, T> operator/(T lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs / rhs.x,
                     lhs / rhs.y,
                     lhs / rhs.z,
                     lhs / rhs.w);
}

template<typename T>
constexpr vec<4, T> operator/(const vec<1, T>& lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs.x / rhs.x,
                     lhs.x / rhs.y,
                     lhs.x / rhs.z,
                     lhs.x / rhs.w);
}

template<typename T>
constexpr vec<4, T> operator/(const vec<4, T>& lhs, const vec<4, T>& rhs)
{
    return vec<4, T>(lhs.x / rhs.x,
                     lhs.y / rhs.y,
                     lhs.z / rhs.z,
                     lhs.w / rhs.w);
}

template<typename T>
constexpr bool operator==(const vec<4, T>& lhs, const vec<4, T>& rhs)
{
    // TODO: FLOATING POINT COMPARE
    return lhs.x == rhs.x &&
           lhs.y == rhs.y &&
           lhs.z == rhs.z &&
           lhs.w == rhs.w;
}

template<typename T>
constexpr bool operator!=(const vec<4, T>& lhs, const vec<4, T>& rhs)
{
    return !(lhs == rhs);
}

} // namespace sw
