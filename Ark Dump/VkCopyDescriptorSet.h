#pragma once

#include "BaseDeclarations.h"
struct VkCopyDescriptorSet
{
	char __padding[0x38L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkCopyDescriptorSet.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkCopyDescriptorSet.pNext"); }
	VkDescriptorSet_T * srcSetField() { return GetNativePointerField<VkDescriptorSet_T *>(this, "VkCopyDescriptorSet.srcSet"); }
	unsigned int& srcBindingField() { return *GetNativePointerField<unsigned int*>(this, "VkCopyDescriptorSet.srcBinding"); }
	unsigned int& srcArrayElementField() { return *GetNativePointerField<unsigned int*>(this, "VkCopyDescriptorSet.srcArrayElement"); }
	VkDescriptorSet_T * dstSetField() { return GetNativePointerField<VkDescriptorSet_T *>(this, "VkCopyDescriptorSet.dstSet"); }
	unsigned int& dstBindingField() { return *GetNativePointerField<unsigned int*>(this, "VkCopyDescriptorSet.dstBinding"); }
	unsigned int& dstArrayElementField() { return *GetNativePointerField<unsigned int*>(this, "VkCopyDescriptorSet.dstArrayElement"); }
	unsigned int& descriptorCountField() { return *GetNativePointerField<unsigned int*>(this, "VkCopyDescriptorSet.descriptorCount"); }
};

