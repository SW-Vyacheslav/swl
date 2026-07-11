#ifndef SWE_MATH_MAT3X3_H_
#define SWE_MATH_MAT3X3_H_

#include "swe/math/common.h"
#include "swe/math/vec3.h"

namespace swe
{

// TODO
template<typename T>
struct mat<3, 3, T>
{
public:
    constexpr mat();

public:
    static constexpr std::size_t size() { return 9; }

public:
    union
    {
        vec<3, T> rows[3];
        T data[9];
    };
};

template<typename T>
constexpr mat<3, 3, T>::mat()
    : data{} {}

} // namespace swe

#endif // SWE_MATH_MAT3X3_H_
