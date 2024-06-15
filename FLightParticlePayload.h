#pragma once

#include "BaseDeclarations.h"
struct FLightParticlePayload
{
	char __padding[0x18L];
	FVector& ColorScaleField() { return *GetNativePointerField<FVector*>(this, "FLightParticlePayload.ColorScale"); }
	float& RadiusScaleField() { return *GetNativePointerField<float*>(this, "FLightParticlePayload.RadiusScale"); }
	float& LightExponentField() { return *GetNativePointerField<float*>(this, "FLightParticlePayload.LightExponent"); }
	bool& bValidField() { return *GetNativePointerField<bool*>(this, "FLightParticlePayload.bValid"); }
	bool& bAffectsTranslucencyField() { return *GetNativePointerField<bool*>(this, "FLightParticlePayload.bAffectsTranslucency"); }
};

