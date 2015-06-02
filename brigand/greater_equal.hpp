
#pragma once

#include <brigand/bool.hpp>

namespace brigand
{
  template <typename A, typename B>
  using greater_equal = bool_<(A::value >= B::value)>;
}
