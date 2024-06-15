#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ANavigationTestingActor : AActor
{
	char __padding[0x98L];
	TSubobjectPtr<UCapsuleComponent>& CapsuleComponentField() { return *GetNativePointerField<TSubobjectPtr<UCapsuleComponent>*>(this, "ANavigationTestingActor.CapsuleComponent"); }
	FVector& QueryingExtentField() { return *GetNativePointerField<FVector*>(this, "ANavigationTestingActor.QueryingExtent"); }
	FVector& ProjectedLocationField() { return *GetNativePointerField<FVector*>(this, "ANavigationTestingActor.ProjectedLocation"); }
	TEnumAsByte<enum ENavCostDisplay::Type>& CostDisplayModeField() { return *GetNativePointerField<TEnumAsByte<enum ENavCostDisplay::Type>*>(this, "ANavigationTestingActor.CostDisplayMode"); }
	FVector2D& TextCanvasOffsetField() { return *GetNativePointerField<FVector2D*>(this, "ANavigationTestingActor.TextCanvasOffset"); }
	float& PathfindingTimeField() { return *GetNativePointerField<float*>(this, "ANavigationTestingActor.PathfindingTime"); }
	float& PathCostField() { return *GetNativePointerField<float*>(this, "ANavigationTestingActor.PathCost"); }
	int& PathfindingStepsField() { return *GetNativePointerField<int*>(this, "ANavigationTestingActor.PathfindingSteps"); }
	ANavigationTestingActor * OtherActorField() { return GetNativePointerField<ANavigationTestingActor *>(this, "ANavigationTestingActor.OtherActor"); }
	int& ShowStepIndexField() { return *GetNativePointerField<int*>(this, "ANavigationTestingActor.ShowStepIndex"); }
	float& OffsetFromCornersDistanceField() { return *GetNativePointerField<float*>(this, "ANavigationTestingActor.OffsetFromCornersDistance"); }

	// Functions

	FVector * GetNavAgentLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "ANavigationTestingActor.GetNavAgentLocation", result); }
	void BeginDestroy() { NativeCall<void>(this, "ANavigationTestingActor.BeginDestroy"); }
};

