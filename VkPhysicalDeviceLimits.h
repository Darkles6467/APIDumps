#pragma once

#include "BaseDeclarations.h"
struct VkPhysicalDeviceLimits
{
	char __padding[0x1f8L];
	unsigned int& maxImageDimension1DField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxImageDimension1D"); }
	unsigned int& maxImageDimension2DField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxImageDimension2D"); }
	unsigned int& maxImageDimension3DField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxImageDimension3D"); }
	unsigned int& maxImageDimensionCubeField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxImageDimensionCube"); }
	unsigned int& maxImageArrayLayersField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxImageArrayLayers"); }
	unsigned int& maxTexelBufferElementsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxTexelBufferElements"); }
	unsigned int& maxUniformBufferRangeField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxUniformBufferRange"); }
	unsigned int& maxStorageBufferRangeField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxStorageBufferRange"); }
	unsigned int& maxPushConstantsSizeField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxPushConstantsSize"); }
	unsigned int& maxMemoryAllocationCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxMemoryAllocationCount"); }
	unsigned int& maxSamplerAllocationCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxSamplerAllocationCount"); }
	unsigned __int64& bufferImageGranularityField() { return *GetNativePointerField<unsigned __int64*>(this, "VkPhysicalDeviceLimits.bufferImageGranularity"); }
	unsigned __int64& sparseAddressSpaceSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkPhysicalDeviceLimits.sparseAddressSpaceSize"); }
	unsigned int& maxBoundDescriptorSetsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxBoundDescriptorSets"); }
	unsigned int& maxPerStageDescriptorSamplersField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxPerStageDescriptorSamplers"); }
	unsigned int& maxPerStageDescriptorUniformBuffersField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxPerStageDescriptorUniformBuffers"); }
	unsigned int& maxPerStageDescriptorStorageBuffersField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxPerStageDescriptorStorageBuffers"); }
	unsigned int& maxPerStageDescriptorSampledImagesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxPerStageDescriptorSampledImages"); }
	unsigned int& maxPerStageDescriptorStorageImagesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxPerStageDescriptorStorageImages"); }
	unsigned int& maxPerStageDescriptorInputAttachmentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxPerStageDescriptorInputAttachments"); }
	unsigned int& maxPerStageResourcesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxPerStageResources"); }
	unsigned int& maxDescriptorSetSamplersField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxDescriptorSetSamplers"); }
	unsigned int& maxDescriptorSetUniformBuffersField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxDescriptorSetUniformBuffers"); }
	unsigned int& maxDescriptorSetUniformBuffersDynamicField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxDescriptorSetUniformBuffersDynamic"); }
	unsigned int& maxDescriptorSetStorageBuffersField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxDescriptorSetStorageBuffers"); }
	unsigned int& maxDescriptorSetStorageBuffersDynamicField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxDescriptorSetStorageBuffersDynamic"); }
	unsigned int& maxDescriptorSetSampledImagesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxDescriptorSetSampledImages"); }
	unsigned int& maxDescriptorSetStorageImagesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxDescriptorSetStorageImages"); }
	unsigned int& maxDescriptorSetInputAttachmentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxDescriptorSetInputAttachments"); }
	unsigned int& maxVertexInputAttributesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxVertexInputAttributes"); }
	unsigned int& maxVertexInputBindingsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxVertexInputBindings"); }
	unsigned int& maxVertexInputAttributeOffsetField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxVertexInputAttributeOffset"); }
	unsigned int& maxVertexInputBindingStrideField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxVertexInputBindingStride"); }
	unsigned int& maxVertexOutputComponentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxVertexOutputComponents"); }
	unsigned int& maxTessellationGenerationLevelField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxTessellationGenerationLevel"); }
	unsigned int& maxTessellationPatchSizeField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxTessellationPatchSize"); }
	unsigned int& maxTessellationControlPerVertexInputComponentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxTessellationControlPerVertexInputComponents"); }
	unsigned int& maxTessellationControlPerVertexOutputComponentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxTessellationControlPerVertexOutputComponents"); }
	unsigned int& maxTessellationControlPerPatchOutputComponentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxTessellationControlPerPatchOutputComponents"); }
	unsigned int& maxTessellationControlTotalOutputComponentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxTessellationControlTotalOutputComponents"); }
	unsigned int& maxTessellationEvaluationInputComponentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxTessellationEvaluationInputComponents"); }
	unsigned int& maxTessellationEvaluationOutputComponentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxTessellationEvaluationOutputComponents"); }
	unsigned int& maxGeometryShaderInvocationsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxGeometryShaderInvocations"); }
	unsigned int& maxGeometryInputComponentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxGeometryInputComponents"); }
	unsigned int& maxGeometryOutputComponentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxGeometryOutputComponents"); }
	unsigned int& maxGeometryOutputVerticesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxGeometryOutputVertices"); }
	unsigned int& maxGeometryTotalOutputComponentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxGeometryTotalOutputComponents"); }
	unsigned int& maxFragmentInputComponentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxFragmentInputComponents"); }
	unsigned int& maxFragmentOutputAttachmentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxFragmentOutputAttachments"); }
	unsigned int& maxFragmentDualSrcAttachmentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxFragmentDualSrcAttachments"); }
	unsigned int& maxFragmentCombinedOutputResourcesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxFragmentCombinedOutputResources"); }
	unsigned int& maxComputeSharedMemorySizeField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxComputeSharedMemorySize"); }
	FieldArray<unsigned int, 3> maxComputeWorkGroupCountField() { return {this, "VkPhysicalDeviceLimits.maxComputeWorkGroupCount"}; }
	unsigned int& maxComputeWorkGroupInvocationsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxComputeWorkGroupInvocations"); }
	FieldArray<unsigned int, 3> maxComputeWorkGroupSizeField() { return {this, "VkPhysicalDeviceLimits.maxComputeWorkGroupSize"}; }
	unsigned int& subPixelPrecisionBitsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.subPixelPrecisionBits"); }
	unsigned int& subTexelPrecisionBitsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.subTexelPrecisionBits"); }
	unsigned int& mipmapPrecisionBitsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.mipmapPrecisionBits"); }
	unsigned int& maxDrawIndexedIndexValueField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxDrawIndexedIndexValue"); }
	unsigned int& maxDrawIndirectCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxDrawIndirectCount"); }
	float& maxSamplerLodBiasField() { return *GetNativePointerField<float*>(this, "VkPhysicalDeviceLimits.maxSamplerLodBias"); }
	float& maxSamplerAnisotropyField() { return *GetNativePointerField<float*>(this, "VkPhysicalDeviceLimits.maxSamplerAnisotropy"); }
	unsigned int& maxViewportsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxViewports"); }
	FieldArray<unsigned int, 2> maxViewportDimensionsField() { return {this, "VkPhysicalDeviceLimits.maxViewportDimensions"}; }
	FieldArray<float, 2> viewportBoundsRangeField() { return {this, "VkPhysicalDeviceLimits.viewportBoundsRange"}; }
	unsigned int& viewportSubPixelBitsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.viewportSubPixelBits"); }
	unsigned __int64& minMemoryMapAlignmentField() { return *GetNativePointerField<unsigned __int64*>(this, "VkPhysicalDeviceLimits.minMemoryMapAlignment"); }
	unsigned __int64& minTexelBufferOffsetAlignmentField() { return *GetNativePointerField<unsigned __int64*>(this, "VkPhysicalDeviceLimits.minTexelBufferOffsetAlignment"); }
	unsigned __int64& minUniformBufferOffsetAlignmentField() { return *GetNativePointerField<unsigned __int64*>(this, "VkPhysicalDeviceLimits.minUniformBufferOffsetAlignment"); }
	unsigned __int64& minStorageBufferOffsetAlignmentField() { return *GetNativePointerField<unsigned __int64*>(this, "VkPhysicalDeviceLimits.minStorageBufferOffsetAlignment"); }
	int& minTexelOffsetField() { return *GetNativePointerField<int*>(this, "VkPhysicalDeviceLimits.minTexelOffset"); }
	unsigned int& maxTexelOffsetField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxTexelOffset"); }
	int& minTexelGatherOffsetField() { return *GetNativePointerField<int*>(this, "VkPhysicalDeviceLimits.minTexelGatherOffset"); }
	unsigned int& maxTexelGatherOffsetField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxTexelGatherOffset"); }
	float& minInterpolationOffsetField() { return *GetNativePointerField<float*>(this, "VkPhysicalDeviceLimits.minInterpolationOffset"); }
	float& maxInterpolationOffsetField() { return *GetNativePointerField<float*>(this, "VkPhysicalDeviceLimits.maxInterpolationOffset"); }
	unsigned int& subPixelInterpolationOffsetBitsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.subPixelInterpolationOffsetBits"); }
	unsigned int& maxFramebufferWidthField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxFramebufferWidth"); }
	unsigned int& maxFramebufferHeightField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxFramebufferHeight"); }
	unsigned int& maxFramebufferLayersField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxFramebufferLayers"); }
	unsigned int& framebufferColorSampleCountsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.framebufferColorSampleCounts"); }
	unsigned int& framebufferDepthSampleCountsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.framebufferDepthSampleCounts"); }
	unsigned int& framebufferStencilSampleCountsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.framebufferStencilSampleCounts"); }
	unsigned int& framebufferNoAttachmentsSampleCountsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.framebufferNoAttachmentsSampleCounts"); }
	unsigned int& maxColorAttachmentsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxColorAttachments"); }
	unsigned int& sampledImageColorSampleCountsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.sampledImageColorSampleCounts"); }
	unsigned int& sampledImageIntegerSampleCountsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.sampledImageIntegerSampleCounts"); }
	unsigned int& sampledImageDepthSampleCountsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.sampledImageDepthSampleCounts"); }
	unsigned int& sampledImageStencilSampleCountsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.sampledImageStencilSampleCounts"); }
	unsigned int& storageImageSampleCountsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.storageImageSampleCounts"); }
	unsigned int& maxSampleMaskWordsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxSampleMaskWords"); }
	unsigned int& timestampComputeAndGraphicsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.timestampComputeAndGraphics"); }
	float& timestampPeriodField() { return *GetNativePointerField<float*>(this, "VkPhysicalDeviceLimits.timestampPeriod"); }
	unsigned int& maxClipDistancesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxClipDistances"); }
	unsigned int& maxCullDistancesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxCullDistances"); }
	unsigned int& maxCombinedClipAndCullDistancesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.maxCombinedClipAndCullDistances"); }
	unsigned int& discreteQueuePrioritiesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.discreteQueuePriorities"); }
	FieldArray<float, 2> pointSizeRangeField() { return {this, "VkPhysicalDeviceLimits.pointSizeRange"}; }
	FieldArray<float, 2> lineWidthRangeField() { return {this, "VkPhysicalDeviceLimits.lineWidthRange"}; }
	float& pointSizeGranularityField() { return *GetNativePointerField<float*>(this, "VkPhysicalDeviceLimits.pointSizeGranularity"); }
	float& lineWidthGranularityField() { return *GetNativePointerField<float*>(this, "VkPhysicalDeviceLimits.lineWidthGranularity"); }
	unsigned int& strictLinesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.strictLines"); }
	unsigned int& standardSampleLocationsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceLimits.standardSampleLocations"); }
	unsigned __int64& optimalBufferCopyOffsetAlignmentField() { return *GetNativePointerField<unsigned __int64*>(this, "VkPhysicalDeviceLimits.optimalBufferCopyOffsetAlignment"); }
	unsigned __int64& optimalBufferCopyRowPitchAlignmentField() { return *GetNativePointerField<unsigned __int64*>(this, "VkPhysicalDeviceLimits.optimalBufferCopyRowPitchAlignment"); }
	unsigned __int64& nonCoherentAtomSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkPhysicalDeviceLimits.nonCoherentAtomSize"); }
};

