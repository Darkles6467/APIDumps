#pragma once

#include "BaseDeclarations.h"
struct FVolumeLightingSample
{
	char __padding[0x50L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FVolumeLightingSample.Position"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "FVolumeLightingSample.Radius"); }
	TSHVectorRGB<2>& LightingField() { return *GetNativePointerField<TSHVectorRGB<2>*>(this, "FVolumeLightingSample.Lighting"); }
	FColor& PackedSkyBentNormalField() { return *GetNativePointerField<FColor*>(this, "FVolumeLightingSample.PackedSkyBentNormal"); }
	float& DirectionalLightShadowingField() { return *GetNativePointerField<float*>(this, "FVolumeLightingSample.DirectionalLightShadowing"); }
};

