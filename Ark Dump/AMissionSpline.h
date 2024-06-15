#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ASplineActor : AActor
{
	char __padding[0x8L];
	TSubobjectPtr<USplineComponent>& SplineComponentField() { return *GetNativePointerField<TSubobjectPtr<USplineComponent>*>(this, "ASplineActor.SplineComponent"); }

	// Functions

};

struct AMissionSpline : ASplineActor
{
	char __padding[0x58L];
	bool& bValidateSplineField() { return *GetNativePointerField<bool*>(this, "AMissionSpline.bValidateSpline"); }
	float& SplineValidationMinTotalLengthField() { return *GetNativePointerField<float*>(this, "AMissionSpline.SplineValidationMinTotalLength"); }
	TEnumAsByte<enum ECollisionChannel>& SplineValidationChannelField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionChannel>*>(this, "AMissionSpline.SplineValidationChannel"); }
	int& SplineValidationNumTracesPerSplineSegmentField() { return *GetNativePointerField<int*>(this, "AMissionSpline.SplineValidationNumTracesPerSplineSegment"); }
	float& SplineValidationDebugDrawDurationField() { return *GetNativePointerField<float*>(this, "AMissionSpline.SplineValidationDebugDrawDuration"); }
	FName& TriggerKeyField() { return *GetNativePointerField<FName*>(this, "AMissionSpline.TriggerKey"); }
	int& TriggerOrderField() { return *GetNativePointerField<int*>(this, "AMissionSpline.TriggerOrder"); }
	int& CustomDataIntField() { return *GetNativePointerField<int*>(this, "AMissionSpline.CustomDataInt"); }
	float& CustomDataFloatField() { return *GetNativePointerField<float*>(this, "AMissionSpline.CustomDataFloat"); }
	TArray<float>& CustomDataFloatArrayField() { return *GetNativePointerField<TArray<float>*>(this, "AMissionSpline.CustomDataFloatArray"); }
	FVector& CustomDataVectorField() { return *GetNativePointerField<FVector*>(this, "AMissionSpline.CustomDataVector"); }
	FString& CustomDataStringField() { return *GetNativePointerField<FString*>(this, "AMissionSpline.CustomDataString"); }

	// Functions

	void Destroyed() { NativeCall<void>(this, "AMissionSpline.Destroyed"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AMissionSpline.EndPlay", EndPlayReason); }
	bool FindLocationAndDirectionClosestToWorldLocation(const FVector * WorldLocation, FVector * OutLocation, FVector * OutDirection, float * OutSplineKey) { return NativeCall<bool, const FVector *, FVector *, FVector *, float *>(this, "AMissionSpline.FindLocationAndDirectionClosestToWorldLocation", WorldLocation, OutLocation, OutDirection, OutSplineKey); }
	void PostInitializeComponents() { NativeCall<void>(this, "AMissionSpline.PostInitializeComponents"); }
	void SpawnerUpdate(float DeltaTime) { NativeCall<void, float>(this, "AMissionSpline.SpawnerUpdate", DeltaTime); }
};

