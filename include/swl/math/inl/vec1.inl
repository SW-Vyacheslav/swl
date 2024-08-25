#include "swl/math/vec1.h"

namespace sw
{

template<typename T>
constexpr vec<1, T>::vec()
    : x(0) {}

template<typename T>
constexpr vec<1, T>::vec(const vec<1, T>& other)
    : x(other.x) {}

template<typename T>
constexpr vec<1, T>::vec(T scalar)
    : x(scalar) {}

template<typename T>
template<typename T0>
constexpr vec<1, T>::vec(const vec<1, T0>& other)
    : x(static_cast<T>(other.x)) {}

template<typename T>
template<typename T0>
constexpr vec<1, T>::vec(const vec<2, T0>& other)
    : x(static_cast<T>(other.x)) {}

template<typename T>
template<typename T0>
constexpr vec<1, T>::vec(const vec<3, T0>& other)
    : x(static_cast<T>(other.x)) {}

template<typename T>
template<typename T0>
constexpr vec<1, T>::vec(const vec<4, T0>& other)
    : x(static_cast<T>(other.x)) {}

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
template<typename T0>
constexpr vec<1, T>& vec<1, T>::operator=(const vec<1, T0>& rhs)
{
    x = static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<1, T>& vec<1, T>::operator+=(T0 rhs)
{
    x += static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<1, T>& vec<1, T>::operator+=(const vec<1, T0>& rhs)
{
    x += static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<1, T>& vec<1, T>::operator-=(T0 rhs)
{
    x -= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<1, T>& vec<1, T>::operator-=(const vec<1, T0>& rhs)
{
    x -= static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<1, T>& vec<1, T>::operator*=(T0 rhs)
{
    x *= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<1, T>& vec<1, T>::operator*=(const vec<1, T0>& rhs)
{
    x *= static_cast<T>(rhs.x);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<1, T>& vec<1, T>::operator/=(T0 rhs)
{
    x /= static_cast<T>(rhs);

    return *this;
}

template<typename T>
template<typename T0>
constexpr vec<1, T>& vec<1, T>::operator/=(const vec<1, T0>& rhs)
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
constexpr bool operator!=(const vec<1, T>& lhs, const vec<1, T>& rhs)
{
    return !(lhs == rhs);
}

} // namespace sw
