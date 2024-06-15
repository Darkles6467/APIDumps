#pragma once

#include "BaseDeclarations.h"
#include "FDynamicPrimitiveResource.h"

struct FDynamicMeshVertexBuffer : FDynamicPrimitiveResource
{
	char __padding[0x48L];
	TArray<FDynamicMeshVertex>& VerticesField() { return *GetNativePointerField<TArray<FDynamicMeshVertex>*>(this, "FDynamicMeshVertexBuffer.Vertices"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FDynamicMeshVertexBuffer.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FDynamicMeshVertexBuffer.ReleaseRHI"); }
};

