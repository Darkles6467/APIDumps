#pragma once

#include "BaseDeclarations.h"
struct VkPresentInfoKHR
{
	char __padding[0x40L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPresentInfoKHR.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPresentInfoKHR.pNext"); }
	unsigned int& waitSemaphoreCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPresentInfoKHR.waitSemaphoreCount"); }
	VkSemaphore_T *const * pWaitSemaphoresField() { return GetNativePointerField<VkSemaphore_T *const *>(this, "VkPresentInfoKHR.pWaitSemaphores"); }
	unsigned int& swapchainCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPresentInfoKHR.swapchainCount"); }
	VkSwapchainKHR_T *const * pSwapchainsField() { return GetNativePointerField<VkSwapchainKHR_T *const *>(this, "VkPresentInfoKHR.pSwapchains"); }
	const unsigned int * pImageIndicesField() { return GetNativePointerField<const unsigned int *>(this, "VkPresentInfoKHR.pImageIndices"); }
	VkResult * pResultsField() { return GetNativePointerField<VkResult *>(this, "VkPresentInfoKHR.pResults"); }
};

