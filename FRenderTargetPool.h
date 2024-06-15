#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"
#include "FPooledRenderTarget.h"

struct FRenderTargetPool : FRenderResource
{
	char __padding[0x100L];
	FVisualizeTexture& VisualizeTextureField() { return *GetNativePointerField<FVisualizeTexture*>(this, "FRenderTargetPool.VisualizeTexture"); }
	TArray<TRefCountPtr<FPooledRenderTarget>>& PooledRenderTargetsField() { return *GetNativePointerField<TArray<TRefCountPtr<FPooledRenderTarget>>*>(this, "FRenderTargetPool.PooledRenderTargets"); }
	unsigned int& AllocationLevelInKBField() { return *GetNativePointerField<unsigned int*>(this, "FRenderTargetPool.AllocationLevelInKB"); }
	bool& bCurrentlyOverBudgetField() { return *GetNativePointerField<bool*>(this, "FRenderTargetPool.bCurrentlyOverBudget"); }
	bool& bStartEventRecordingNextTickField() { return *GetNativePointerField<bool*>(this, "FRenderTargetPool.bStartEventRecordingNextTick"); }
	unsigned int& EventRecordingSizeThresholdField() { return *GetNativePointerField<unsigned int*>(this, "FRenderTargetPool.EventRecordingSizeThreshold"); }
	bool& bEventRecordingActiveField() { return *GetNativePointerField<bool*>(this, "FRenderTargetPool.bEventRecordingActive"); }
	bool& bEventRecordingStartedField() { return *GetNativePointerField<bool*>(this, "FRenderTargetPool.bEventRecordingStarted"); }
	unsigned int& CurrentEventRecordingTimeField() { return *GetNativePointerField<unsigned int*>(this, "FRenderTargetPool.CurrentEventRecordingTime"); }

	// Functions

	static void AddPhaseEvent(void * callback_handle, vx_log_level logLevel, const char * source, const char * message) { NativeCall<void, void *, vx_log_level, const char *, const char *>(nullptr, "FRenderTargetPool.AddPhaseEvent", callback_handle, logLevel, source, message); }
	void CompactPool() { NativeCall<void>(this, "FRenderTargetPool.CompactPool"); }
	void CreateUntrackedElement(const FPooledRenderTargetDesc * Desc, TRefCountPtr<IPooledRenderTarget> * Out, const FSceneRenderTargetItem * Item) { NativeCall<void, const FPooledRenderTargetDesc *, TRefCountPtr<IPooledRenderTarget> *, const FSceneRenderTargetItem *>(this, "FRenderTargetPool.CreateUntrackedElement", Desc, Out, Item); }
	void DisableEventDisplay() { NativeCall<void>(this, "FRenderTargetPool.DisableEventDisplay"); }
	void DumpMemoryUsage(FOutputDevice * OutputDevice) { NativeCall<void, FOutputDevice *>(this, "FRenderTargetPool.DumpMemoryUsage", OutputDevice); }
	bool FindFreeElement(const FPooledRenderTargetDesc * Desc, TRefCountPtr<IPooledRenderTarget> * Out, const wchar_t * InDebugName) { return NativeCall<bool, const FPooledRenderTargetDesc *, TRefCountPtr<IPooledRenderTarget> *, const wchar_t *>(this, "FRenderTargetPool.FindFreeElement", Desc, Out, InDebugName); }
	int FindIndex(IPooledRenderTarget * In) { return NativeCall<int, IPooledRenderTarget *>(this, "FRenderTargetPool.FindIndex", In); }
	void FreeUnusedResource(TRefCountPtr<IPooledRenderTarget> * In) { NativeCall<void, TRefCountPtr<IPooledRenderTarget> *>(this, "FRenderTargetPool.FreeUnusedResource", In); }
	void FreeUnusedResources() { NativeCall<void>(this, "FRenderTargetPool.FreeUnusedResources"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FRenderTargetPool.ReleaseDynamicRHI"); }
	void TickPoolElements() { NativeCall<void>(this, "FRenderTargetPool.TickPoolElements"); }
};

