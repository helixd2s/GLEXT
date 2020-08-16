# GL-EXT 

OpenGL extensions, based on Vulkan API wrappers, something alike OpenGL 5.0... 


### What is and no?

- This is NOT OpenGL 4.6 replacement
- This is NOT Vulkan API replacement
- This is NOT OpenGL itself (but styled)
- This can use DirectX 12 Ultimate (but only planned)


### Features

- Reflection between OpenGL and Vulkan API (for example, OpenGL Sampler <-> Vulkan Sampler)
- Access to Vulkan API Create Info and their components
- Simpler Vulkan API, by OpenGL style
- Extended OpenGL features
- Full real OpenGL interop
- Vulkan API based context
- Reading SPIR-V code
- Automatically create pipeline when needs
- Automatically submits with semaphores
- Automatically copy between OpenGL and Vulkan, when not Direct Access enabled
- Automatically use vendor extensions when available
- Compatible with C API 


### Addons

- Direct Access Buffers (i.e. Vulkan API buffers, but with GL access)
- Direct Access Textures (i.e. Vulkan API textures, but with GL access)
- Reflected Samplers (i.e. Vulkan API samplers, with OpenGL imported settings)
- Ray-Tracing for OpenGL, but based on Vulkan API (or DXR)
- Descriptor Sets (only for Vulkan Based Pipelines)
- Reflected Vulkan API SPIR-V Pipelines with GL wrappers
- Bidirectional Semaphores


### Why needs?

- For Minecraft rendering extension and modding
- For Neverball ray-tracing purposes
- For overtaken screen space reflections :)
