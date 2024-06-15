#pragma once

#include "BaseDeclarations.h"
struct VkImageCreateInfo
{
	char __padding[0x58L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkImageCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkImageCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkImageCreateInfo.flags"); }
	VkImageType& imageTypeField() { return *GetNativePointerField<VkImageType*>(this, "VkImageCreateInfo.imageType"); }
	VkFormat& formatField() { return *GetNativePointerField<VkFormat*>(this, "VkImageCreateInfo.format"); }
	VkExtent3D& extentField() { return *GetNativePointerField<VkExtent3D*>(this, "VkImageCreateInfo.extent"); }
	unsigned int& mipLevelsField() { return *GetNativePointerField<unsigned int*>(this, "VkImageCreateInfo.mipLevels"); }
	unsigned int& arrayLayersField() { return *GetNativePointerField<unsigned int*>(this, "VkImageCreateInfo.arrayLayers"); }
	VkSampleCountFlagBits& samplesField() { return *GetNativePointerField<VkSampleCountFlagBits*>(this, "VkImageCreateInfo.samples"); }
	VkImageTiling& tilingField() { return *GetNativePointerField<VkImageTiling*>(this, "VkImageCreateInfo.tiling"); }
	unsigned int& usageField() { return *GetNativePointerField<unsigned int*>(this, "VkImageCreateInfo.usage"); }
	VkSharingMode& sharingModeField() { return *GetNativePointerField<VkSharingMode*>(this, "VkImageCreateInfo.sharingMode"); }
	unsigned int& queueFamilyIndexCountField() { return *GetNativePointerField<unsigned int*>(this, "VkImageCreateInfo.queueFamilyIndexCount"); }
	const unsigned int * pQueueFamilyIndicesField() { return GetNativePointerField<const unsigned int *>(this, "VkImageCreateInfo.pQueueFamilyIndices"); }
	VkImageLayout& initialLayoutField() { return *GetNativePointerField<VkImageLayout*>(this, "VkImageCreateInfo.initialLayout"); }
};

