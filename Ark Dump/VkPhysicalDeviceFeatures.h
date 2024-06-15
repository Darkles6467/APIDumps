#pragma once

#include "BaseDeclarations.h"
struct VkPhysicalDeviceFeatures
{
	char __padding[0xdcL];
	unsigned int& robustBufferAccessField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.robustBufferAccess"); }
	unsigned int& fullDrawIndexUint32Field() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.fullDrawIndexUint32"); }
	unsigned int& imageCubeArrayField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.imageCubeArray"); }
	unsigned int& independentBlendField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.independentBlend"); }
	unsigned int& geometryShaderField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.geometryShader"); }
	unsigned int& tessellationShaderField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.tessellationShader"); }
	unsigned int& sampleRateShadingField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.sampleRateShading"); }
	unsigned int& dualSrcBlendField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.dualSrcBlend"); }
	unsigned int& logicOpField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.logicOp"); }
	unsigned int& multiDrawIndirectField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.multiDrawIndirect"); }
	unsigned int& drawIndirectFirstInstanceField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.drawIndirectFirstInstance"); }
	unsigned int& depthClampField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.depthClamp"); }
	unsigned int& depthBiasClampField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.depthBiasClamp"); }
	unsigned int& fillModeNonSolidField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.fillModeNonSolid"); }
	unsigned int& depthBoundsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.depthBounds"); }
	unsigned int& wideLinesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.wideLines"); }
	unsigned int& largePointsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.largePoints"); }
	unsigned int& alphaToOneField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.alphaToOne"); }
	unsigned int& multiViewportField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.multiViewport"); }
	unsigned int& samplerAnisotropyField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.samplerAnisotropy"); }
	unsigned int& textureCompressionETC2Field() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.textureCompressionETC2"); }
	unsigned int& textureCompressionASTC_LDRField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.textureCompressionASTC_LDR"); }
	unsigned int& textureCompressionBCField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.textureCompressionBC"); }
	unsigned int& occlusionQueryPreciseField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.occlusionQueryPrecise"); }
	unsigned int& pipelineStatisticsQueryField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.pipelineStatisticsQuery"); }
	unsigned int& vertexPipelineStoresAndAtomicsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.vertexPipelineStoresAndAtomics"); }
	unsigned int& fragmentStoresAndAtomicsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.fragmentStoresAndAtomics"); }
	unsigned int& shaderTessellationAndGeometryPointSizeField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderTessellationAndGeometryPointSize"); }
	unsigned int& shaderImageGatherExtendedField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderImageGatherExtended"); }
	unsigned int& shaderStorageImageExtendedFormatsField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderStorageImageExtendedFormats"); }
	unsigned int& shaderStorageImageMultisampleField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderStorageImageMultisample"); }
	unsigned int& shaderStorageImageReadWithoutFormatField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderStorageImageReadWithoutFormat"); }
	unsigned int& shaderStorageImageWriteWithoutFormatField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderStorageImageWriteWithoutFormat"); }
	unsigned int& shaderUniformBufferArrayDynamicIndexingField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderUniformBufferArrayDynamicIndexing"); }
	unsigned int& shaderSampledImageArrayDynamicIndexingField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderSampledImageArrayDynamicIndexing"); }
	unsigned int& shaderStorageBufferArrayDynamicIndexingField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderStorageBufferArrayDynamicIndexing"); }
	unsigned int& shaderStorageImageArrayDynamicIndexingField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderStorageImageArrayDynamicIndexing"); }
	unsigned int& shaderClipDistanceField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderClipDistance"); }
	unsigned int& shaderCullDistanceField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderCullDistance"); }
	unsigned int& shaderFloat64Field() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderFloat64"); }
	unsigned int& shaderInt64Field() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderInt64"); }
	unsigned int& shaderInt16Field() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderInt16"); }
	unsigned int& shaderResourceResidencyField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderResourceResidency"); }
	unsigned int& shaderResourceMinLodField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.shaderResourceMinLod"); }
	unsigned int& sparseBindingField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.sparseBinding"); }
	unsigned int& sparseResidencyBufferField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.sparseResidencyBuffer"); }
	unsigned int& sparseResidencyImage2DField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.sparseResidencyImage2D"); }
	unsigned int& sparseResidencyImage3DField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.sparseResidencyImage3D"); }
	unsigned int& sparseResidency2SamplesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.sparseResidency2Samples"); }
	unsigned int& sparseResidency4SamplesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.sparseResidency4Samples"); }
	unsigned int& sparseResidency8SamplesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.sparseResidency8Samples"); }
	unsigned int& sparseResidency16SamplesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.sparseResidency16Samples"); }
	unsigned int& sparseResidencyAliasedField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.sparseResidencyAliased"); }
	unsigned int& variableMultisampleRateField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.variableMultisampleRate"); }
	unsigned int& inheritedQueriesField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceFeatures.inheritedQueries"); }
};

