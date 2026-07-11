#ifndef SWE_MATH_MAT3X2_H_
#define SWE_MATH_MAT3X2_H_

#include "swe/math/common.h"
#include "swe/math/vec2.h"

namespace swe
{

// TODO
template<typename T>
struct mat<3, 2, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 6; }

public:
    union
    {
        vec<2, T> rows[3];
        T data[6];
    };
};

template<typename T>
constexpr mat<3, 2, T>::mat()
    : data{} {}

} // namespace swe

#endif // SWE_MATH_MAT3X2_H_
