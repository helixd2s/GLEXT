#include "../core.h"

namespace glx {

    class gtContext_t : public std::enable_shared_from_this<gtContext_t> {
    protected:
        std::shared_ptr<xvk::Instance> instance = {};
        std::shared_ptr<xvk::Device> device = {};
        VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;
        VkCommandPool commandPool = VK_NULL_HANDLE;
        VkDescriptorPool descriptorPool = VK_NULL_HANDLE;
        VkQueue defaultQueue = VK_NULL_HANDLE;
        vkh::VkDeviceCreateInfo deviceInfo = {};
        vkh::VkPhysicalDeviceFeatures2 features = {};
        vkh::VkPhysicalDeviceProperties2 properties = {};

        // By ReflectID
        std::unordered_map<uint32_t, gtBuffer> buffers = {};
        std::unordered_map<uint32_t, gtTexture> textures = {};
        std::unordered_map<uint32_t, gtSampler> samplers = {};

        //
        

    public:
        //
        gtContext_t() 
        {
            
        };

        // 
        ~gtContext_t() 
        {
            
        };

        // 
        operator VkPhysicalDevice&() { return physicalDevice; };
        operator const VkPhysicalDevice&() const { return physicalDevice; };

        // 
        operator VkCommandPool&() { return commandPool; };
        operator const VkCommandPool&() const { return commandPool; };

        // 
        operator VkQueue&() { return defaultQueue; };
        operator const VkQueue&() const { return defaultQueue; };

        // 
        operator std::shared_ptr<xvk::Instance>&() { return instance; };
        operator const std::shared_ptr<xvk::Instance>&() const { return instance; };

        // 
        operator std::shared_ptr<xvk::Device>&() { return device; };
        operator const std::shared_ptr<xvk::Device>&() const { return device; };

        // 
        xvk::Device* operator->() { return device.get(); };
        const xvk::Device* operator->() const { return device.get(); };

        // 
        uint32_t reflectGL();
    };

    std::shared_ptr<gtContext_t> glExt = {};

};
