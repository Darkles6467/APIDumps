#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FRHIComputeFence : FRHIResource
{
	char __padding[0x10L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FRHIComputeFence.Name"); }
	bool& bWriteEnqueuedField() { return *GetNativePointerField<bool*>(this, "FRHIComputeFence.bWriteEnqueued"); }

	// Functions

	void Reset() { NativeCall<void>(this, "FRHIComputeFence.Reset"); }
	void WriteFence() { NativeCall<void>(this, "FRHIComputeFence.WriteFence"); }
};

struct FVulkanComputeFence : FRHIComputeFence
{
	char __padding[0x28L];
	bool& bWriteEventField() { return *GetNativePointerField<bool*>(this, "FVulkanComputeFence.bWriteEvent"); }

	// Functions

};

