#ifndef SWL_MATH_MAT3X4_H_
#define SWL_MATH_MAT3X4_H_

#include "swl/math/common.h"
#include "swl/math/vec4.h"

namespace swl
{

// TODO
template<typename T>
struct mat<3, 4, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 12; }

public:
    union
    {
        vec<4, T> rows[3];
        T data[12];
    };
};

template<typename T>
constexpr mat<3, 4, T>::mat()
    : data{} {}

} // namespace swl

#endif // SWL_MATH_MAT3X4_H_
