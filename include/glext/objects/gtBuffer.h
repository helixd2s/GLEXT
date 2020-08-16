#include "../core.h"
#include "objects/gtContext.h"

namespace glx {

    class gtBuffer_t : public std::enable_shared_from_this<gtBuffer_t> {
    protected:
        std::shared_ptr<gtContext_t> context = {};

        // OpenGL compatible
        uint32_t glID = 0u, reflectID = 0u; // If direct, `glID` and `reflectID` should have SAME value
        vkh::VkBufferCreateInfo info = {};
        bool direct = false; // Means, that buffer used directly from Vulkan API memory, if not - needs copying on device side

        // 
        VkBuffer buffer = {};
        VkDeviceMemory memory = {};


    public:
        // 
        gtBuffer_t(std::shared_ptr<gtContext_t> context = {}) : context(context) 
        {
            
        };

        // 
        ~gtBuffer_t() 
        {
            
        };

        // 
        uint32_t upload();
        uint32_t download();

        // 
        vkh::VkBufferCreateInfo& getInfo() { return this->info; };
        const vkh::VkBufferCreateInfo& getInfo() const { return this->info; };
    };

};
