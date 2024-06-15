#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FConvexCollisionVertexBuffer : FVertexBuffer
{
	char __padding[0x10L];
	TArray<FDynamicMeshVertex>& VerticesField() { return *GetNativePointerField<TArray<FDynamicMeshVertex>*>(this, "FConvexCollisionVertexBuffer.Vertices"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FConvexCollisionVertexBuffer.InitRHI"); }
};

