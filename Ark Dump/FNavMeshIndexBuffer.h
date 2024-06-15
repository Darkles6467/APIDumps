#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FNavMeshIndexBuffer : FIndexBuffer
{
	char __padding[0x10L];
	TArray<int>& IndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FNavMeshIndexBuffer.Indices"); }
};

