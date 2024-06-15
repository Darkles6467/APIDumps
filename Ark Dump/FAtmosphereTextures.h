#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FAtmosphereTextures : FRenderResource
{
	char __padding[0x40L];
	const FAtmospherePrecomputeParameters * PrecomputeParamsField() { return GetNativePointerField<const FAtmospherePrecomputeParameters *>(this, "FAtmosphereTextures.PrecomputeParams"); }
};

