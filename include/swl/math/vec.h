#ifndef SWL_MATH_VEC_H_
#define SWL_MATH_VEC_H_

#include "swl/math/vec1.h"
#include "swl/math/vec2.h"
#include "swl/math/vec3.h"
#include "swl/math/vec4.h"

namespace sw
{

template<std::size_t Size, typename T> T len(const vec<Size, T>& v);

template<std::size_t Size, typename T> vec<Size, T> norm(const vec<Size, T>& v);

template<std::size_t Size, typename T> T dist(const vec<Size, T>& v1, const vec<Size, T>& v2);

template<std::size_t Size, typename T> T reflect(const vec<Size, T>& v, const vec<Size, T>& n);

template<std::size_t Size, typename T> vec<Size, T> refract(const vec<Size, T>& v, const vec<Size, T>& n, T k);

template<typename T> T dot(const vec<2, T>& v1, const vec<2, T>& v2);
template<typename T> T dot(const vec<3, T>& v1, const vec<3, T>& v2);
template<typename T> T dot(const vec<4, T>& v1, const vec<4, T>& v2);

template<typename T> T cross(const vec<2, T>& v1, const vec<2, T>& v2);
template<typename T> vec<3, T> cross(const vec<3, T>& v1, const vec<3, T>& v2);

} // namespace sw

#include "swl/math/inl/vec.inl"

#endif // SWL_MATH_VEC_H_
