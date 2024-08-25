#ifndef SWL_MATH_MAT2X2_H_
#define SWL_MATH_MAT2X2_H_

#include "swl/math/common.h"
#include "swl/math/vec2.h"

namespace sw
{

// TODO
template<typename T>
struct mat<2, 2, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 4; }
    constexpr T& operator[](std::size_t idx);
    constexpr const T& operator[](std::size_t idx) const;
    constexpr vec<2, T>& row(std::size_t idx);
    constexpr const vec<2, T>& row(std::size_t idx) const;
    constexpr vec<2, T>& col(std::size_t idx);
    constexpr const vec<2, T>& col(std::size_t idx) const;

public:
    union
    {
        vec<2, T> rows[2];
        T data[4];
    };
};

template<typename T>
constexpr mat<2, 2, T>::mat()
    : data{} {}

} // namespace sw

#endif // SWL_MATH_MAT2X2_H_
