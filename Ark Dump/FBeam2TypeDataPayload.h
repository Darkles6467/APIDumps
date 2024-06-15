#pragma once

#include "BaseDeclarations.h"
struct FBeam2TypeDataPayload
{
	char __padding[0x60L];
	FVector& SourcePointField() { return *GetNativePointerField<FVector*>(this, "FBeam2TypeDataPayload.SourcePoint"); }
	FVector& SourceTangentField() { return *GetNativePointerField<FVector*>(this, "FBeam2TypeDataPayload.SourceTangent"); }
	float& SourceStrengthField() { return *GetNativePointerField<float*>(this, "FBeam2TypeDataPayload.SourceStrength"); }
	FVector& TargetPointField() { return *GetNativePointerField<FVector*>(this, "FBeam2TypeDataPayload.TargetPoint"); }
	FVector& TargetTangentField() { return *GetNativePointerField<FVector*>(this, "FBeam2TypeDataPayload.TargetTangent"); }
	float& TargetStrengthField() { return *GetNativePointerField<float*>(this, "FBeam2TypeDataPayload.TargetStrength"); }
	int& Lock_Max_NumNoisePointsField() { return *GetNativePointerField<int*>(this, "FBeam2TypeDataPayload.Lock_Max_NumNoisePoints"); }
	int& InterpolationStepsField() { return *GetNativePointerField<int*>(this, "FBeam2TypeDataPayload.InterpolationSteps"); }
	FVector& DirectionField() { return *GetNativePointerField<FVector*>(this, "FBeam2TypeDataPayload.Direction"); }
	float& StepSizeField() { return *GetNativePointerField<float*>(this, "FBeam2TypeDataPayload.StepSize"); }
	int& StepsField() { return *GetNativePointerField<int*>(this, "FBeam2TypeDataPayload.Steps"); }
	float& TravelRatioField() { return *GetNativePointerField<float*>(this, "FBeam2TypeDataPayload.TravelRatio"); }
	int& TriangleCountField() { return *GetNativePointerField<int*>(this, "FBeam2TypeDataPayload.TriangleCount"); }
	int& FlagsField() { return *GetNativePointerField<int*>(this, "FBeam2TypeDataPayload.Flags"); }
};

