#ifndef SWL_MATH_MAT2X3_H_
#define SWL_MATH_MAT2X3_H_

#include "swl/math/common.h"
#include "swl/math/vec3.h"

namespace swl
{

// TODO
template<typename T>
struct mat<2, 3, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 6; }

public:
    union
    {
        vec<3, T> rows[2];
        T data[6];
    };
};

template<typename T>
constexpr mat<2, 3, T>::mat()
    : data{} {}

} // namespace swl

#endif // SWL_MATH_MAT2X3_H_
