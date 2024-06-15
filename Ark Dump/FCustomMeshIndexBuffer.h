#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FCustomMeshIndexBuffer : FIndexBuffer
{
	char __padding[0x10L];
	TArray<int>& IndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FCustomMeshIndexBuffer.Indices"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FCustomMeshIndexBuffer.InitRHI"); }
};

