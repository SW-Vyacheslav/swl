#include "math.h"

#define SWE_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(t) \
    template struct vec<1, t>;                        \
    template struct vec<2, t>;                        \
    template struct vec<3, t>;                        \
    template struct vec<4, t>;

#define SWE_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(t) \
    template struct mat<2, 2, t>;                     \
    template struct mat<2, 3, t>;                     \
    template struct mat<2, 4, t>;                     \
    template struct mat<3, 2, t>;                     \
    template struct mat<3, 3, t>;                     \
    template struct mat<3, 4, t>;                     \
    template struct mat<4, 2, t>;                     \
    template struct mat<4, 3, t>;                     \
    template struct mat<4, 4, t>;

namespace swe
{

SWE_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(double)
SWE_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(float)
SWE_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::uint64_t)
SWE_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::int64_t)
SWE_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::uint32_t)
SWE_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::int32_t)
SWE_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::uint16_t)
SWE_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::int16_t)
SWE_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::uint8_t)
SWE_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::int8_t)

SWE_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(double)
SWE_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(float)
SWE_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::uint64_t)
SWE_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::int64_t)
SWE_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::uint32_t)
SWE_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::int32_t)
SWE_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::uint16_t)
SWE_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::int16_t)
SWE_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::uint8_t)
SWE_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::int8_t)

} // namespace swe
