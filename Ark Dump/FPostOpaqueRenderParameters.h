#pragma once

#include "BaseDeclarations.h"
struct FPostOpaqueRenderParameters
{
	char __padding[0xe0L];
	FIntRect& ViewportRectField() { return *GetNativePointerField<FIntRect*>(this, "FPostOpaqueRenderParameters.ViewportRect"); }
	FMatrix& ViewMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FPostOpaqueRenderParameters.ViewMatrix"); }
	FMatrix& ProjMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FPostOpaqueRenderParameters.ProjMatrix"); }
	FVector& ColorMultiplierField() { return *GetNativePointerField<FVector*>(this, "FPostOpaqueRenderParameters.ColorMultiplier"); }
	bool& bIsCapturingField() { return *GetNativePointerField<bool*>(this, "FPostOpaqueRenderParameters.bIsCapturing"); }
	bool& bDidRenderField() { return *GetNativePointerField<bool*>(this, "FPostOpaqueRenderParameters.bDidRender"); }
	float& SkyBrightnessField() { return *GetNativePointerField<float*>(this, "FPostOpaqueRenderParameters.SkyBrightness"); }
	void * UidField() { return GetNativePointerField<void *>(this, "FPostOpaqueRenderParameters.Uid"); }
};

