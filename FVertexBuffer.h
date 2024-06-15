#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FVertexBuffer : FRenderResource
{
	char __padding[0x8L];

	// Functions

	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FVertexBuffer.GetFriendlyName", result); }
};

