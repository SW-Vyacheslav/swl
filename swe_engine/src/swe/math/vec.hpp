#ifndef SWE_MATH_VEC_HPP_
#define SWE_MATH_VEC_HPP_

#include "swe/math/vec1.hpp"
#include "swe/math/vec2.hpp"
#include "swe/math/vec3.hpp"
#include "swe/math/vec4.hpp"

namespace swe
{

template<std::size_t Size, typename T> T len(const vec<Size, T>& v);

template<std::size_t Size, typename T> vec<Size, T> norm(const vec<Size, T>& v);

template<std::size_t Size, typename T> T dist(const vec<Size, T>& v1, const vec<Size, T>& v2);

template<std::size_t Size, typename T> T reflect(const vec<Size, T>& v, const vec<Size, T>& n);

template<std::size_t Size, typename T> vec<Size, T> refract(const vec<Size, T>& v, const vec<Size, T>& n, T k);

template<typename T> T dot(const vec<1, T>& v1, const vec<1, T>& v2);
template<typename T> T dot(const vec<2, T>& v1, const vec<2, T>& v2);
template<typename T> T dot(const vec<3, T>& v1, const vec<3, T>& v2);
template<typename T> T dot(const vec<4, T>& v1, const vec<4, T>& v2);

template<typename T> T cross(const vec<2, T>& v1, const vec<2, T>& v2);
template<typename T> vec<3, T> cross(const vec<3, T>& v1, const vec<3, T>& v2);

} // namespace swe

#include "swe/math/inl/vec.inl"

#endif // SWE_MATH_VEC_HPP_
