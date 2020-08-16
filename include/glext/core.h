#include "vkt3/core.hpp"
#include "vkh/structures.hpp"
#include "vkh/helpers.hpp"
#include "vkh/spirv-mod.hpp"

namespace glx {
    
    // 
    class gtBuffer_t;
    class gtTexture_t;
    class gtSampler_t;

    // 
    using gtBuffer = std::shared_ptr<gtBuffer_t>;
    using gtTexture = std::shared_ptr<gtTexture_t>;
    using gtSampler = std::shared_ptr<gtSampler_t>;

};
