#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FDebugBuffer : FRenderResource
{
	char __padding[0x20L];
	FRWBuffer& DebugDataField() { return *GetNativePointerField<FRWBuffer*>(this, "FDebugBuffer.DebugData"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FDebugBuffer.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FDebugBuffer.ReleaseDynamicRHI"); }
};

