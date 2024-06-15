#pragma once

#include "BaseDeclarations.h"
#include "FMaterialRenderProxy.h"
#include "FRenderResource.h"

struct FLandscapeDebugMaterialRenderProxy : FMaterialRenderProxy
{
	char __padding[0x50L];
	const FLinearColor& RField() { return *GetNativePointerField<const FLinearColor*>(this, "FLandscapeDebugMaterialRenderProxy.R"); }
	const FLinearColor& GField() { return *GetNativePointerField<const FLinearColor*>(this, "FLandscapeDebugMaterialRenderProxy.G"); }
	const FLinearColor& BField() { return *GetNativePointerField<const FLinearColor*>(this, "FLandscapeDebugMaterialRenderProxy.B"); }
};

