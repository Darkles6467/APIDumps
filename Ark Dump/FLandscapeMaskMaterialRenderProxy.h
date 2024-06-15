#pragma once

#include "BaseDeclarations.h"
#include "FMaterialRenderProxy.h"
#include "FRenderResource.h"

struct FLandscapeMaskMaterialRenderProxy : FMaterialRenderProxy
{
	char __padding[0x18L];
	const bool& bInvertedField() { return *GetNativePointerField<const bool*>(this, "FLandscapeMaskMaterialRenderProxy.bInverted"); }
};

