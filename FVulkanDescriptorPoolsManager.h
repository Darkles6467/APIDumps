#pragma once

#include "BaseDeclarations.h"
struct FVulkanDescriptorPoolsManager
{
	char __padding[0x48L];
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanDescriptorPoolsManager.Device"); }
	FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker> * AsyncDeletionTaskField() { return GetNativePointerField<FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker> *>(this, "FVulkanDescriptorPoolsManager.AsyncDeletionTask"); }
	FWindowsCriticalSection& _CSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FVulkanDescriptorPoolsManager._CS"); }
	TArray<FVulkanDescriptorPoolSetContainer *>& PoolSetsField() { return *GetNativePointerField<TArray<FVulkanDescriptorPoolSetContainer *>*>(this, "FVulkanDescriptorPoolsManager.PoolSets"); }

	// Functions

	FVulkanDescriptorPoolSetContainer * AcquirePoolSetContainer() { return NativeCall<FVulkanDescriptorPoolSetContainer *>(this, "FVulkanDescriptorPoolsManager.AcquirePoolSetContainer"); }
	void GC() { NativeCall<void>(this, "FVulkanDescriptorPoolsManager.GC"); }
};

