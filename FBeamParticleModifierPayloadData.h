#pragma once

#include "BaseDeclarations.h"
struct FBeamParticleModifierPayloadData
{
	char __padding[0x20L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FBeamParticleModifierPayloadData.Position"); }
	FVector& TangentField() { return *GetNativePointerField<FVector*>(this, "FBeamParticleModifierPayloadData.Tangent"); }
	float& StrengthField() { return *GetNativePointerField<float*>(this, "FBeamParticleModifierPayloadData.Strength"); }
};

