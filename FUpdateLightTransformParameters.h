#pragma once

#include "BaseDeclarations.h"
struct FUpdateLightTransformParameters
{
	char __padding[0x50L];
	FMatrix& LightToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FUpdateLightTransformParameters.LightToWorld"); }
	FVector4& PositionField() { return *GetNativePointerField<FVector4*>(this, "FUpdateLightTransformParameters.Position"); }
};

