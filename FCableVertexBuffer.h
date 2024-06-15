#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FCableVertexBuffer : FVertexBuffer
{
	char __padding[0x8L];
	int& NumVertsField() { return *GetNativePointerField<int*>(this, "FCableVertexBuffer.NumVerts"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FCableVertexBuffer.InitRHI"); }
};

