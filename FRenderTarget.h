#pragma once

#include "BaseDeclarations.h"
#include "FReadSurfaceDataFlags.h"
#include "FIntRect.h"

struct FRenderTarget
{
	char __padding[0x10L];

	// Functions

	float GetDisplayGamma() { return NativeCall<float>(this, "FRenderTarget.GetDisplayGamma"); }
	bool ReadLinearColorPixelsPtr(FLinearColor * OutImageBytes, FReadSurfaceDataFlags InFlags, FIntRect InRect) { return NativeCall<bool, FLinearColor *, FReadSurfaceDataFlags, FIntRect>(this, "FRenderTarget.ReadLinearColorPixelsPtr", OutImageBytes, InFlags, InRect); }
	bool ReadPixelsPtr(FColor * OutImageBytes, FReadSurfaceDataFlags InFlags, FIntRect InRect) { return NativeCall<bool, FColor *, FReadSurfaceDataFlags, FIntRect>(this, "FRenderTarget.ReadPixelsPtr", OutImageBytes, InFlags, InRect); }
};

