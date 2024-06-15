#pragma once

#include "BaseDeclarations.h"
struct VkSubmitInfo
{
	char __padding[0x48L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkSubmitInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkSubmitInfo.pNext"); }
	unsigned int& waitSemaphoreCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSubmitInfo.waitSemaphoreCount"); }
	VkSemaphore_T *const * pWaitSemaphoresField() { return GetNativePointerField<VkSemaphore_T *const *>(this, "VkSubmitInfo.pWaitSemaphores"); }
	const unsigned int * pWaitDstStageMaskField() { return GetNativePointerField<const unsigned int *>(this, "VkSubmitInfo.pWaitDstStageMask"); }
	unsigned int& commandBufferCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSubmitInfo.commandBufferCount"); }
	VkCommandBuffer_T *const * pCommandBuffersField() { return GetNativePointerField<VkCommandBuffer_T *const *>(this, "VkSubmitInfo.pCommandBuffers"); }
	unsigned int& signalSemaphoreCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSubmitInfo.signalSemaphoreCount"); }
	VkSemaphore_T *const * pSignalSemaphoresField() { return GetNativePointerField<VkSemaphore_T *const *>(this, "VkSubmitInfo.pSignalSemaphores"); }
};

