#ifndef SWE_MATH_MAT4X3_H_
#define SWE_MATH_MAT4X3_H_

#include "swe/math/common.h"
#include "swe/math/vec3.h"

namespace swe
{

// TODO
template<typename T>
struct mat<4, 3, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 12; }

public:
    union
    {
        vec<3, T> rows[4];
        T data[12];
    };
};

template<typename T>
constexpr mat<4, 3, T>::mat()
    : data{} {}

} // namespace swe

#endif // SWE_MATH_MAT4X3_H_
