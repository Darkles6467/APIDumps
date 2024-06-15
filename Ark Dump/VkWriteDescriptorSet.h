#pragma once

#include "BaseDeclarations.h"
struct VkWriteDescriptorSet
{
	char __padding[0x40L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkWriteDescriptorSet.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkWriteDescriptorSet.pNext"); }
	VkDescriptorSet_T * dstSetField() { return GetNativePointerField<VkDescriptorSet_T *>(this, "VkWriteDescriptorSet.dstSet"); }
	unsigned int& dstBindingField() { return *GetNativePointerField<unsigned int*>(this, "VkWriteDescriptorSet.dstBinding"); }
	unsigned int& dstArrayElementField() { return *GetNativePointerField<unsigned int*>(this, "VkWriteDescriptorSet.dstArrayElement"); }
	unsigned int& descriptorCountField() { return *GetNativePointerField<unsigned int*>(this, "VkWriteDescriptorSet.descriptorCount"); }
	VkDescriptorType& descriptorTypeField() { return *GetNativePointerField<VkDescriptorType*>(this, "VkWriteDescriptorSet.descriptorType"); }
	const VkDescriptorImageInfo * pImageInfoField() { return GetNativePointerField<const VkDescriptorImageInfo *>(this, "VkWriteDescriptorSet.pImageInfo"); }
	const VkDescriptorBufferInfo * pBufferInfoField() { return GetNativePointerField<const VkDescriptorBufferInfo *>(this, "VkWriteDescriptorSet.pBufferInfo"); }
	VkBufferView_T *const * pTexelBufferViewField() { return GetNativePointerField<VkBufferView_T *const *>(this, "VkWriteDescriptorSet.pTexelBufferView"); }
};

