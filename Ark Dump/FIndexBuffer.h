#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FIndexBuffer : FRenderResource
{
	char __padding[0x8L];

	// Functions

	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FIndexBuffer.GetFriendlyName", result); }
	void ReleaseRHI() { NativeCall<void>(this, "FIndexBuffer.ReleaseRHI"); }
};

