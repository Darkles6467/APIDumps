#pragma once

#include "BaseDeclarations.h"
#include "FDynamicPrimitiveResource.h"

struct FDynamicMeshIndexBuffer : FDynamicPrimitiveResource
{
	char __padding[0x48L];
	TArray<int>& IndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FDynamicMeshIndexBuffer.Indices"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FDynamicMeshIndexBuffer.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FDynamicMeshIndexBuffer.ReleaseRHI"); }
};

