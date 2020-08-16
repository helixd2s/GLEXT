#include "../core.h"
#include "objects/gtContext.h"

namespace glx {

    class gtTexture_t : public std::enable_shared_from_this<gtTexture_t> {
    protected:
        std::shared_ptr<gtContext_t> context = {};

        // OpenGL compatible
        uint32_t glID = 0u, reflectID = 0u; // If direct, `glID` and `reflectID` should have SAME value
        vkh::VkImageCreateInfo info = {};
        bool direct = false; // Means, that buffer used directly from Vulkan API memory, if not - needs copying on device side

        // 
        VkImage image = {};
        VkDeviceMemory memory = {};


    public:
        // 
        ~gtTexture_t() 
        {
            
        };

        // 
        gtTexture_t(std::shared_ptr<gtContext_t> context = {}) : context(context)
        {
            
        };

        // 
        uint32_t upload();
        uint32_t download();

        // 
        vkh::VkImageCreateInfo& getInfo() { return this->info; };
        const vkh::VkImageCreateInfo& getInfo() const { return this->info; };
};
