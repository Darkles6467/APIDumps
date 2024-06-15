#pragma once

#include "BaseDeclarations.h"
struct FPostProcessVolumeProperties
{
	char __padding[0x38L];
	float& PriorityField() { return *GetNativePointerField<float*>(this, "FPostProcessVolumeProperties.Priority"); }
	float& BlendRadiusField() { return *GetNativePointerField<float*>(this, "FPostProcessVolumeProperties.BlendRadius"); }
	float& BlendWeightField() { return *GetNativePointerField<float*>(this, "FPostProcessVolumeProperties.BlendWeight"); }
	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "FPostProcessVolumeProperties.bIsEnabled"); }
	bool& bIsUnboundField() { return *GetNativePointerField<bool*>(this, "FPostProcessVolumeProperties.bIsUnbound"); }
	bool& bIsWaterPPField() { return *GetNativePointerField<bool*>(this, "FPostProcessVolumeProperties.bIsWaterPP"); }
	bool& bAbsoluteVolumeField() { return *GetNativePointerField<bool*>(this, "FPostProcessVolumeProperties.bAbsoluteVolume"); }
	TArray<UExponentialHeightFogComponent *>& DisabledHeigthFogVolumesField() { return *GetNativePointerField<TArray<UExponentialHeightFogComponent *>*>(this, "FPostProcessVolumeProperties.DisabledHeigthFogVolumes"); }
	TArray<UExponentialHeightFogComponent *>& PrimaryLerpingHeightFogsField() { return *GetNativePointerField<TArray<UExponentialHeightFogComponent *>*>(this, "FPostProcessVolumeProperties.PrimaryLerpingHeightFogs"); }
};

