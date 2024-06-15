#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FCustomMeshVertexBuffer : FVertexBuffer
{
	char __padding[0x10L];
	TArray<FDynamicMeshVertex>& VerticesField() { return *GetNativePointerField<TArray<FDynamicMeshVertex>*>(this, "FCustomMeshVertexBuffer.Vertices"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FCustomMeshVertexBuffer.InitRHI"); }
};

