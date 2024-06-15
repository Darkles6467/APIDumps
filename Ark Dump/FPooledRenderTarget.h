#pragma once

#include "BaseDeclarations.h"
#include "IRefCountedObject.h"

struct IPooledRenderTarget : IRefCountedObject
{
	char __padding[0x28L];
	FSceneRenderTargetItem& RenderTargetItemField() { return *GetNativePointerField<FSceneRenderTargetItem*>(this, "IPooledRenderTarget.RenderTargetItem"); }
};

struct FPooledRenderTarget : IPooledRenderTarget
{
	char __padding[0x68L];
	FVRamAllocation& VRamAllocationField() { return *GetNativePointerField<FVRamAllocation*>(this, "FPooledRenderTarget.VRamAllocation"); }
	int& NumRefsField() { return *GetNativePointerField<int*>(this, "FPooledRenderTarget.NumRefs"); }
	FPooledRenderTargetDesc& DescField() { return *GetNativePointerField<FPooledRenderTargetDesc*>(this, "FPooledRenderTarget.Desc"); }
	unsigned int& UnusedForNFramesField() { return *GetNativePointerField<unsigned int*>(this, "FPooledRenderTarget.UnusedForNFrames"); }
	bool& bIsManagedField() { return *GetNativePointerField<bool*>(this, "FPooledRenderTarget.bIsManaged"); }

	// Functions

	int GetRefCount() { return NativeCall<int>(this, "FPooledRenderTarget.GetRefCount"); }
	unsigned int AddRef() { return NativeCall<unsigned int>(this, "FPooledRenderTarget.AddRef"); }
	unsigned int ComputeMemorySize() { return NativeCall<unsigned int>(this, "FPooledRenderTarget.ComputeMemorySize"); }
	bool IsFree() { return NativeCall<bool>(this, "FPooledRenderTarget.IsFree"); }
	unsigned int Release() { return NativeCall<unsigned int>(this, "FPooledRenderTarget.Release"); }
	void SetDebugName(const wchar_t * InName) { NativeCall<void, const wchar_t *>(this, "FPooledRenderTarget.SetDebugName", InName); }
};

