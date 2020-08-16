#include "../core.h"
#include "objects/gtContext.h"

namespace glx {

    class gtComputePipeline_t : public std::enable_shared_from_this<gtComputePipeline_t> 
    {
    protected:
        std::shared_ptr<gtContext_t> context = {};
        vkh::VkComputePipelineCreateInfo info = {};

        // OpenGL compatible?
        uint32_t glID = 0u;

        // 
        std::vector<std::unordered_map<uint32_t, uint32_t>> bindingIndexMap = {};
        std::vector<vkh::VsDescriptorSetLayoutCreateInfoHelper> layoutInfos = {};

        // 
        std::vector<VkDescriptorSetLayout> layouts = {};
        VkPipelineLayout pipelineLayout = VK_NULL_HANDLE;
        VkPipeline pipeline = VK_NULL_HANDLE;

        // Descriptor Set Generated and Bound
        std::vector<VkDescriptorSet> boundSets = {};

    public:
        // 
        gtComputePipeline_t(std::shared_ptr<gtContext_t> context = {}) : context(context)
        {

        };

        // 
        ~gtComputePipeline_t()
        {

        };

        // 
        uint32_t reflectGL();

        // Use SPIR-V code for generation pipeline layouts
        void genPipelineLayout();
    };

};
