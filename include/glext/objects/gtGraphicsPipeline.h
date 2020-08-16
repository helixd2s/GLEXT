#include "../core.h"
#include "objects/gtContext.h"

namespace glx {

    // 
    class gtGraphicsPipeline_t : public std::enable_shared_from_this<gtGraphicsPipeline_t> {
    protected:
        std::shared_ptr<gtContext_t> context = {};
        vkh::VsGraphicsPipelineCreateInfoConstruction info = {};

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

    // 
    public:
        // 
        gtGraphicsPipeline_t(std::shared_ptr<gtContext_t> context = {}) : context(context) 
        {
            
        };

        // 
        ~gtGraphicsPipeline_t() 
        {
            
        };

        // 
        uint32_t reflectGL();

        // Use SPIR-V code for generation pipeline layouts
        void genPipelineLayout();
    };

};
