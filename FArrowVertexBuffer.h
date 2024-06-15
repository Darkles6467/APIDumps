#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FArrowVertexBuffer : FVertexBuffer
{
	char __padding[0x10L];
	TArray<FDynamicMeshVertex>& VerticesField() { return *GetNativePointerField<TArray<FDynamicMeshVertex>*>(this, "FArrowVertexBuffer.Vertices"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FArrowVertexBuffer.InitRHI"); }
};

