#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FConvexCollisionIndexBuffer : FIndexBuffer
{
	char __padding[0x10L];
	TArray<int>& IndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FConvexCollisionIndexBuffer.Indices"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FConvexCollisionIndexBuffer.InitRHI"); }
};

