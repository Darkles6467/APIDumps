#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPostProcessComponent : USceneComponent
{
	char __padding[0x370L];
	float& PriorityField() { return *GetNativePointerField<float*>(this, "UPostProcessComponent.Priority"); }
	float& BlendRadiusField() { return *GetNativePointerField<float*>(this, "UPostProcessComponent.BlendRadius"); }
	float& BlendWeightField() { return *GetNativePointerField<float*>(this, "UPostProcessComponent.BlendWeight"); }

	// Functions

	bool EncompassesPoint(FVector Point, float SphereRadius, float * OutDistanceToPoint, float * MaxDistanceLimit) { return NativeCall<bool, FVector, float, float *, float *>(this, "UPostProcessComponent.EncompassesPoint", Point, SphereRadius, OutDistanceToPoint, MaxDistanceLimit); }
	FPostProcessVolumeProperties * GetProperties(FPostProcessVolumeProperties * result) { return NativeCall<FPostProcessVolumeProperties *, FPostProcessVolumeProperties *>(this, "UPostProcessComponent.GetProperties", result); }
	void SetEnabled(bool enabled) { NativeCall<void, bool>(this, "UPostProcessComponent.SetEnabled", enabled); }
	void OnRegister() { NativeCall<void>(this, "UPostProcessComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "UPostProcessComponent.OnUnregister"); }
};

