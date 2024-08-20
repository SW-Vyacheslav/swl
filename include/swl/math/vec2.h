#ifndef SWL_MATH_VEC2_H_
#define SWL_MATH_VEC2_H_

#include "swl/math/common.h"

namespace swl
{

template<typename T>
struct vec<2, T>
{
public:
    constexpr vec()
        : x(0), y(0) {}

    constexpr vec(const vec<2, T>& other)
        : x(other.x), y(other.y) {}

    explicit vec(T scalar)
        : x(scalar), y(scalar) {}

    vec(T x, T y)
        : x(x), y(y) {}

    template<typename A, typename B>
    vec(A x, B y)
        : x(static_cast<T>(x)), y(static_cast<T>(y)) {}

    template<typename A, typename B>
    vec(const vec<1, A>& x, B y)
        : x(static_cast<T>(x.x)), y(static_cast<T>(y)) {}

    template<typename A, typename B>
    vec(A x, const vec<1, B>& y)
        : x(static_cast<T>(x)), y(static_cast<T>(y.y)) {}

    template<typename A, typename B>
    vec(const vec<1, A>& x, const vec<1, B>& y)
        : x(static_cast<T>(x.x)), y(static_cast<T>(y.y)) {}

    template<typename A>
    explicit vec(const vec<1, A>& other)
        : x(static_cast<T>(other.x)), y(0) {}

    template<typename A>
    explicit vec(const vec<2, A>& other)
        : x(static_cast<T>(other.x)), y(static_cast<T>(other.y)) {}

    template<typename A>
    explicit vec(const vec<3, A>& other)
        : x(static_cast<T>(other.x)), y(static_cast<T>(other.y)) {}

    template<typename A>
    explicit vec(const vec<4, A>& other)
        : x(static_cast<T>(other.x)), y(static_cast<T>(other.y)) {}

public:
    static constexpr std::size_t size() { return 2; }
    constexpr T& operator[](std::size_t idx);
    constexpr const T& operator[](std::size_t idx) const;

public:


public:
    union
    {
        struct { T x, y; };
        T data[2];
    };
};

} // namespace swl

#endif // SWL_MATH_VEC2_H_
