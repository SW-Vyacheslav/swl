#ifndef SWL_MATH_MAT4X2_H_
#define SWL_MATH_MAT4X2_H_

#include "swl/math/common.h"
#include "swl/math/vec2.h"

namespace swl
{

// TODO
template<typename T>
struct mat<4, 2, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 8; }

public:
    union
    {
        vec<2, T> rows[4];
        T data[8];
    };
};

template<typename T>
constexpr mat<4, 2, T>::mat()
    : data{} {}

} // namespace swl

#endif // SWL_MATH_MAT4X2_H_
