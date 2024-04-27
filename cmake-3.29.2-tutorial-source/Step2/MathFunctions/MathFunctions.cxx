#include "MathFunctions.h"

// TODO 11: include cmath
// TODO 11: 添加进 cmath
// TODO 10: Wrap the mysqrt include in a precompiled ifdef based on USE_MYMATH
// TODO 10: 根据USE_MYMATH的值，将mysqrt的包含语句包裹在预编译的#ifdef条件指令中。
#ifdef USE_MYMATH
#include "mysqrt.h"
#else
#include <cmath>
#endif

namespace mathfunctions {
double sqrt(double x)
{
  // TODO 9: If USE_MYMATH is defined, use detail::mysqrt.
  // Otherwise, use std::sqrt.
  // TODO 9: 如果定义了 USE_MYMATH，使用 detail::mysqrt，否则，使用 std::sqrt
#ifdef USE_MYMATH
  return detail::mysqrt(x);
#else
  return std::sqrt(x);
#endif
}
}
