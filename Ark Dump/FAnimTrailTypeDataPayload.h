#pragma once

#include "BaseDeclarations.h"
#include "FTrailsBaseTypeDataPayload.h"

struct FAnimTrailTypeDataPayload : FTrailsBaseTypeDataPayload
{
	char __padding[0x20L];
	FVector& DirectionField() { return *GetNativePointerField<FVector*>(this, "FAnimTrailTypeDataPayload.Direction"); }
	FVector& TangentField() { return *GetNativePointerField<FVector*>(this, "FAnimTrailTypeDataPayload.Tangent"); }
	float& LengthField() { return *GetNativePointerField<float*>(this, "FAnimTrailTypeDataPayload.Length"); }
	float& InterpolationParameterField() { return *GetNativePointerField<float*>(this, "FAnimTrailTypeDataPayload.InterpolationParameter"); }
};

