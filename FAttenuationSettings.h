#pragma once

#include "BaseDeclarations.h"
struct FAttenuationSettings
{
	char __padding[0x34L];
	TEnumAsByte<enum ESoundDistanceModel>& DistanceAlgorithmField() { return *GetNativePointerField<TEnumAsByte<enum ESoundDistanceModel>*>(this, "FAttenuationSettings.DistanceAlgorithm"); }
	TEnumAsByte<enum ESoundDistanceCalc>& DistanceType_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum ESoundDistanceCalc>*>(this, "FAttenuationSettings.DistanceType_DEPRECATED"); }
	TEnumAsByte<enum EAttenuationShape::Type>& AttenuationShapeField() { return *GetNativePointerField<TEnumAsByte<enum EAttenuationShape::Type>*>(this, "FAttenuationSettings.AttenuationShape"); }
	float& dBAttenuationAtMaxField() { return *GetNativePointerField<float*>(this, "FAttenuationSettings.dBAttenuationAtMax"); }
	float& OmniRadiusField() { return *GetNativePointerField<float*>(this, "FAttenuationSettings.OmniRadius"); }
	float& RadiusMin_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "FAttenuationSettings.RadiusMin_DEPRECATED"); }
	float& RadiusMax_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "FAttenuationSettings.RadiusMax_DEPRECATED"); }
	FVector& AttenuationShapeExtentsField() { return *GetNativePointerField<FVector*>(this, "FAttenuationSettings.AttenuationShapeExtents"); }
	float& ConeOffsetField() { return *GetNativePointerField<float*>(this, "FAttenuationSettings.ConeOffset"); }
	float& FalloffDistanceField() { return *GetNativePointerField<float*>(this, "FAttenuationSettings.FalloffDistance"); }
	float& LPFRadiusMinField() { return *GetNativePointerField<float*>(this, "FAttenuationSettings.LPFRadiusMin"); }
	float& LPFRadiusMaxField() { return *GetNativePointerField<float*>(this, "FAttenuationSettings.LPFRadiusMax"); }

	// Functions

	void ApplyAttenuation(const FTransform * SoundTransform, const FVector ListenerLocation, float * Volume, float * HighFrequencyGain) { NativeCall<void, const FTransform *, const FVector, float *, float *>(this, "FAttenuationSettings.ApplyAttenuation", SoundTransform, ListenerLocation, Volume, HighFrequencyGain); }
	float AttenuationEvalBox(const FTransform * SoundTransform, const FVector ListenerLocation) { return NativeCall<float, const FTransform *, const FVector>(this, "FAttenuationSettings.AttenuationEvalBox", SoundTransform, ListenerLocation); }
	float AttenuationEvalCapsule(const FTransform * SoundTransform, const FVector ListenerLocation) { return NativeCall<float, const FTransform *, const FVector>(this, "FAttenuationSettings.AttenuationEvalCapsule", SoundTransform, ListenerLocation); }
	float AttenuationEvalCone(const FTransform * SoundTransform, const FVector ListenerLocation) { return NativeCall<float, const FTransform *, const FVector>(this, "FAttenuationSettings.AttenuationEvalCone", SoundTransform, ListenerLocation); }
	float GetMaxDimension() { return NativeCall<float>(this, "FAttenuationSettings.GetMaxDimension"); }
	void PostSerialize(const FArchive * Ar) { NativeCall<void, const FArchive *>(this, "FAttenuationSettings.PostSerialize", Ar); }
};

