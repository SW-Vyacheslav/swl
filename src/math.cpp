#include "swl/math.h"

#define SWL_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(t) \
    template struct vec<1, t>;                        \
    template struct vec<2, t>;                        \
    template struct vec<3, t>;                        \
    template struct vec<4, t>;

#define SWL_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(t) \
    template struct mat<2, 2, t>;                     \
    template struct mat<2, 3, t>;                     \
    template struct mat<2, 4, t>;                     \
    template struct mat<3, 2, t>;                     \
    template struct mat<3, 3, t>;                     \
    template struct mat<3, 4, t>;                     \
    template struct mat<4, 2, t>;                     \
    template struct mat<4, 3, t>;                     \
    template struct mat<4, 4, t>;

namespace swl
{

SWL_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(double)
SWL_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(float)
SWL_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::uint64_t)
SWL_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::int64_t)
SWL_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::uint32_t)
SWL_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::int32_t)
SWL_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::uint16_t)
SWL_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::int16_t)
SWL_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::uint8_t)
SWL_MATH_DEFINE_VEC_EXPLICIT_INSTANTIATION(std::int8_t)

SWL_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(double)
SWL_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(float)
SWL_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::uint64_t)
SWL_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::int64_t)
SWL_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::uint32_t)
SWL_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::int32_t)
SWL_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::uint16_t)
SWL_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::int16_t)
SWL_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::uint8_t)
SWL_MATH_DEFINE_MAT_EXPLICIT_INSTANTIATION(std::int8_t)

} // namespace swl
