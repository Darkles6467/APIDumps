#pragma once

#include "BaseDeclarations.h"
struct VkSamplerCreateInfo
{
	char __padding[0x50L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkSamplerCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkSamplerCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkSamplerCreateInfo.flags"); }
	VkFilter& magFilterField() { return *GetNativePointerField<VkFilter*>(this, "VkSamplerCreateInfo.magFilter"); }
	VkFilter& minFilterField() { return *GetNativePointerField<VkFilter*>(this, "VkSamplerCreateInfo.minFilter"); }
	VkSamplerMipmapMode& mipmapModeField() { return *GetNativePointerField<VkSamplerMipmapMode*>(this, "VkSamplerCreateInfo.mipmapMode"); }
	VkSamplerAddressMode& addressModeUField() { return *GetNativePointerField<VkSamplerAddressMode*>(this, "VkSamplerCreateInfo.addressModeU"); }
	VkSamplerAddressMode& addressModeVField() { return *GetNativePointerField<VkSamplerAddressMode*>(this, "VkSamplerCreateInfo.addressModeV"); }
	VkSamplerAddressMode& addressModeWField() { return *GetNativePointerField<VkSamplerAddressMode*>(this, "VkSamplerCreateInfo.addressModeW"); }
	float& mipLodBiasField() { return *GetNativePointerField<float*>(this, "VkSamplerCreateInfo.mipLodBias"); }
	unsigned int& anisotropyEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkSamplerCreateInfo.anisotropyEnable"); }
	float& maxAnisotropyField() { return *GetNativePointerField<float*>(this, "VkSamplerCreateInfo.maxAnisotropy"); }
	unsigned int& compareEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkSamplerCreateInfo.compareEnable"); }
	VkCompareOp& compareOpField() { return *GetNativePointerField<VkCompareOp*>(this, "VkSamplerCreateInfo.compareOp"); }
	float& minLodField() { return *GetNativePointerField<float*>(this, "VkSamplerCreateInfo.minLod"); }
	float& maxLodField() { return *GetNativePointerField<float*>(this, "VkSamplerCreateInfo.maxLod"); }
	VkBorderColor& borderColorField() { return *GetNativePointerField<VkBorderColor*>(this, "VkSamplerCreateInfo.borderColor"); }
	unsigned int& unnormalizedCoordinatesField() { return *GetNativePointerField<unsigned int*>(this, "VkSamplerCreateInfo.unnormalizedCoordinates"); }
};

