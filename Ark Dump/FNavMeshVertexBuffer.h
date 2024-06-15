#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FNavMeshVertexBuffer : FVertexBuffer
{
	char __padding[0x10L];
	TArray<FDynamicMeshVertex>& VerticesField() { return *GetNativePointerField<TArray<FDynamicMeshVertex>*>(this, "FNavMeshVertexBuffer.Vertices"); }
};

