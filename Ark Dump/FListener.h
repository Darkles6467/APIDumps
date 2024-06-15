#pragma once

#include "BaseDeclarations.h"
struct FListener
{
	char __padding[0xa0L];
	FTransform& TransformField() { return *GetNativePointerField<FTransform*>(this, "FListener.Transform"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "FListener.Velocity"); }
	FInteriorSettings& InteriorSettingsField() { return *GetNativePointerField<FInteriorSettings*>(this, "FListener.InteriorSettings"); }
	long double& InteriorStartTimeField() { return *GetNativePointerField<long double*>(this, "FListener.InteriorStartTime"); }
	long double& InteriorEndTimeField() { return *GetNativePointerField<long double*>(this, "FListener.InteriorEndTime"); }
	long double& ExteriorEndTimeField() { return *GetNativePointerField<long double*>(this, "FListener.ExteriorEndTime"); }
	long double& InteriorLPFEndTimeField() { return *GetNativePointerField<long double*>(this, "FListener.InteriorLPFEndTime"); }
	long double& ExteriorLPFEndTimeField() { return *GetNativePointerField<long double*>(this, "FListener.ExteriorLPFEndTime"); }
	float& InteriorVolumeInterpField() { return *GetNativePointerField<float*>(this, "FListener.InteriorVolumeInterp"); }
	float& InteriorLPFInterpField() { return *GetNativePointerField<float*>(this, "FListener.InteriorLPFInterp"); }
	float& ExteriorVolumeInterpField() { return *GetNativePointerField<float*>(this, "FListener.ExteriorVolumeInterp"); }
	float& ExteriorLPFInterpField() { return *GetNativePointerField<float*>(this, "FListener.ExteriorLPFInterp"); }

	// Functions

	void ApplyInteriorSettings(AReverbVolume * InVolume, const FInteriorSettings * Settings) { NativeCall<void, AReverbVolume *, const FInteriorSettings *>(this, "FListener.ApplyInteriorSettings", InVolume, Settings); }
	void UpdateCurrentInteriorSettings() { NativeCall<void>(this, "FListener.UpdateCurrentInteriorSettings"); }
	FVector * GetFront(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FListener.GetFront", result); }
	FVector * GetUp(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FListener.GetUp", result); }
};

