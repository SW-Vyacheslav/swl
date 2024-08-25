#include "swl/math/vec4.h"

namespace sw
{

template<typename T>
constexpr vec<4, T>::vec()
    : x(0), y(0), z(0), w(0) {}

template<typename T>
constexpr vec<4, T>::vec(T scalar)
    : x(scalar), y(scalar), z(scalar), w(scalar) {}

template<typename T>
constexpr vec<4, T>::vec(T x, T y, T z, T w)
    : x(x), y(y), z(z), w(w) {}

} // namespace sw
