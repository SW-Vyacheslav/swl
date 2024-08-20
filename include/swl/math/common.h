#ifndef SWL_MATH_COMMON_H_
#define SWL_MATH_COMMON_H_

namespace swl
{

template<std::size_t Size, typename T> struct vec;

template<typename T> using vec1 = vec<1, T>;
template<typename T> using vec2 = vec<2, T>;
template<typename T> using vec3 = vec<3, T>;
template<typename T> using vec4 = vec<4, T>;

#define SWL_DEFINE_VEC_TYPES(t, l) \
    using vec1 ## l = vec<1, t>;   \
    using vec2 ## l = vec<2, t>;   \
    using vec3 ## l = vec<3, t>;   \
    using vec4 ## l = vec<4, t>;

SWL_DEFINE_VEC_TYPES(double, d)
SWL_DEFINE_VEC_TYPES(float, f)

#undef SWL_DEFINE_VEC_TYPES

template<std::size_t Rows, std::size_t Cols, typename T> struct mat;

template<typename T> using mat2x2 = mat<2, 2, T>;
template<typename T> using mat2x3 = mat<2, 3, T>;
template<typename T> using mat2x4 = mat<2, 4, T>;
template<typename T> using mat3x2 = mat<3, 2, T>;
template<typename T> using mat3x3 = mat<3, 3, T>;
template<typename T> using mat3x4 = mat<3, 4, T>;
template<typename T> using mat4x2 = mat<4, 2, T>;
template<typename T> using mat4x3 = mat<4, 3, T>;
template<typename T> using mat4x4 = mat<4, 4, T>;

#define SWL_DEFINE_MAT_TYPES(t, l)    \
    using mat2x2 ## l = mat<2, 2, t>; \
    using mat2x3 ## l = mat<2, 3, t>; \
    using mat2x4 ## l = mat<2, 4, t>; \
    using mat3x2 ## l = mat<3, 2, t>; \
    using mat3x3 ## l = mat<3, 3, t>; \
    using mat3x4 ## l = mat<3, 4, t>; \
    using mat4x2 ## l = mat<4, 2, t>; \
    using mat4x3 ## l = mat<4, 3, t>; \
    using mat4x4 ## l = mat<4, 4, t>;

SWL_DEFINE_MAT_TYPES(double, d)
SWL_DEFINE_MAT_TYPES(float, f)

#undef SWL_DEFINE_MAT_TYPES

} // namespace swl

#endif // SWL_MATH_COMMON_H_
