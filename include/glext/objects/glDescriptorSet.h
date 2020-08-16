#include "../core.h"
#include "objects/gtContext.h"

namespace glx {

    // 
    struct description 
    {
        std::vector<uint32_t> glIDs = {};
        std::vector<uint32_t> offsets = {};
        std::vector<uint32_t> ranges = {};
        VkDescriptorType type = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;

        // 
        uint32_t _index = 0u;
    };

    //
    struct description_storage 
    {
        std::vector<VkDescriptorBufferInfo> storageBuffers = {};
        std::vector<VkDescriptorBufferInfo> uniformBuffers = {};
        std::vector<VkBufferView> storageTexelBuffers = {};
        std::vector<VkBufferView> uniformTexelBuffers = {};
        std::vector<VkDescriptorImageInfo> storageImages = {};
        std::vector<VkDescriptorImageInfo> sampledImages = {};
        std::vector<VkDescriptorImageInfo> samplers = {};
        std::vector<VkDescriptorImageInfo> combinedSamplerImages = {};
    };

    // 
    class gtDescriptorSet_t : public std::enable_shared_from_this<gtDescriptorSet_t> 
    {
    protected:
        std::shared_ptr<gtContext_t> context = {};

        // OpenGL compatible
        uint32_t glID = 0u;

        // 
        description_storage descriptions = {};

        // 
        std::vector<std::unordered_map<uint32_t, description>> sets = {}; // per every binding

        // 
        

    public:
        // 
        gtDescriptorSet_t(std::shared_ptr<gtContext_t> context = {}) : context(context) 
        {
            
        };

        // 
        ~gtDescriptorSet_t() 
        {
            
        };
    };

};
