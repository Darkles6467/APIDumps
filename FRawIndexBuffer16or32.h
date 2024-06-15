#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FRawIndexBuffer16or32 : FIndexBuffer
{
	char __padding[0x10L];
	TArray<unsigned int>& IndicesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FRawIndexBuffer16or32.Indices"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FRawIndexBuffer16or32.InitRHI"); }
};

