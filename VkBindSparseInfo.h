#pragma once

#include "BaseDeclarations.h"
struct VkBindSparseInfo
{
	char __padding[0x60L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkBindSparseInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkBindSparseInfo.pNext"); }
	unsigned int& waitSemaphoreCountField() { return *GetNativePointerField<unsigned int*>(this, "VkBindSparseInfo.waitSemaphoreCount"); }
	VkSemaphore_T *const * pWaitSemaphoresField() { return GetNativePointerField<VkSemaphore_T *const *>(this, "VkBindSparseInfo.pWaitSemaphores"); }
	unsigned int& bufferBindCountField() { return *GetNativePointerField<unsigned int*>(this, "VkBindSparseInfo.bufferBindCount"); }
	const VkSparseBufferMemoryBindInfo * pBufferBindsField() { return GetNativePointerField<const VkSparseBufferMemoryBindInfo *>(this, "VkBindSparseInfo.pBufferBinds"); }
	unsigned int& imageOpaqueBindCountField() { return *GetNativePointerField<unsigned int*>(this, "VkBindSparseInfo.imageOpaqueBindCount"); }
	const VkSparseImageOpaqueMemoryBindInfo * pImageOpaqueBindsField() { return GetNativePointerField<const VkSparseImageOpaqueMemoryBindInfo *>(this, "VkBindSparseInfo.pImageOpaqueBinds"); }
	unsigned int& imageBindCountField() { return *GetNativePointerField<unsigned int*>(this, "VkBindSparseInfo.imageBindCount"); }
	const VkSparseImageMemoryBindInfo * pImageBindsField() { return GetNativePointerField<const VkSparseImageMemoryBindInfo *>(this, "VkBindSparseInfo.pImageBinds"); }
	unsigned int& signalSemaphoreCountField() { return *GetNativePointerField<unsigned int*>(this, "VkBindSparseInfo.signalSemaphoreCount"); }
	VkSemaphore_T *const * pSignalSemaphoresField() { return GetNativePointerField<VkSemaphore_T *const *>(this, "VkBindSparseInfo.pSignalSemaphores"); }
};

