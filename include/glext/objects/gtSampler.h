#include "../core.h"
#include "objects/gtContext.h"

namespace glx {

    class gtSampler_t : public std::enable_shared_from_this<gtSampler_t> {
    protected:
        std::shared_ptr<gtContext_t> context = {};

        // OpenGL compatible
        uint32_t reflectID = 0u;
        vkh::VkSamplerCreateInfo info = {};

        // 
        VkSampler sampler = {};


    public:
        // 
        gtSampler_t(std::shared_ptr<gtContext_t> context = {}) : context(context) 
        {
            
        };

        // 
        ~gtSampler_t() 
        {
            
        };

        // 
        uint32_t reflectGL();

        // 
        vkh::VkSamplerCreateInfo& getInfo() { return this->info; };
        const vkh::VkSamplerCreateInfo& getInfo() const { return this->info; };
    };

};
