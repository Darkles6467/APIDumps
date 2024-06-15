#pragma once

#include "BaseDeclarations.h"
struct FExponentialHeightFogSceneInfo
{
	char __padding[0x50L];
	const UExponentialHeightFogComponent * ComponentField() { return GetNativePointerField<const UExponentialHeightFogComponent *>(this, "FExponentialHeightFogSceneInfo.Component"); }
	float& FogHeightField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogSceneInfo.FogHeight"); }
	float& FogDensityField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogSceneInfo.FogDensity"); }
	float& FogHeightFalloffField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogSceneInfo.FogHeightFalloff"); }
	float& FogMaxOpacityField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogSceneInfo.FogMaxOpacity"); }
	float& StartDistanceField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogSceneInfo.StartDistance"); }
	float& LightTerminatorAngleField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogSceneInfo.LightTerminatorAngle"); }
	FLinearColor& FogColorField() { return *GetNativePointerField<FLinearColor*>(this, "FExponentialHeightFogSceneInfo.FogColor"); }
	float& DirectionalInscatteringExponentField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogSceneInfo.DirectionalInscatteringExponent"); }
	float& DirectionalInscatteringStartDistanceField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogSceneInfo.DirectionalInscatteringStartDistance"); }
	FLinearColor& DirectionalInscatteringColorField() { return *GetNativePointerField<FLinearColor*>(this, "FExponentialHeightFogSceneInfo.DirectionalInscatteringColor"); }
	float& PriorityField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogSceneInfo.Priority"); }
};

