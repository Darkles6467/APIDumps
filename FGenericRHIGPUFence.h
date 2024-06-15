#pragma once

#include "BaseDeclarations.h"
#include "FRHIGPUFence.h"
#include "FRHIResource.h"

struct FGenericRHIGPUFence : FRHIGPUFence
{
	char __padding[0x8L];
	unsigned int& InsertedFrameNumberField() { return *GetNativePointerField<unsigned int*>(this, "FGenericRHIGPUFence.InsertedFrameNumber"); }

	// Functions

	bool Poll() { return NativeCall<bool>(this, "FGenericRHIGPUFence.Poll"); }
	void Write() { NativeCall<void>(this, "FGenericRHIGPUFence.Write"); }
};

