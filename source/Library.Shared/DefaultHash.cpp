#include "pch.h"
#include "DefaultHash.h"
#include <limits>

namespace FieaGameEngine::__DefaultHash_NumericLimits {
    std::size_t max_char_value() {
        return static_cast<std::size_t>(std::numeric_limits<char>::max());
    }
}
