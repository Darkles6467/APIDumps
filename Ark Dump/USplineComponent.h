#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FComponentInstanceDataBase.h"

struct USplineComponent : USceneComponent
{
	char __padding[0x40L];
	FieldArray<_BYTE, 8> SplineInfoField() { return {this, "USplineComponent.SplineInfo"}; }
	FInterpCurve<float>& SplineReparamTableField() { return *GetNativePointerField<FInterpCurve<float>*>(this, "USplineComponent.SplineReparamTable"); }
	bool& bAllowSplineEditingPerInstanceField() { return *GetNativePointerField<bool*>(this, "USplineComponent.bAllowSplineEditingPerInstance"); }
	bool& bShowSplineDirectionOnAllPointsField() { return *GetNativePointerField<bool*>(this, "USplineComponent.bShowSplineDirectionOnAllPoints"); }
	bool& bAlwaysDrawSplineInEditorViewportField() { return *GetNativePointerField<bool*>(this, "USplineComponent.bAlwaysDrawSplineInEditorViewport"); }
	float& SplineDirectionArrowSizeField() { return *GetNativePointerField<float*>(this, "USplineComponent.SplineDirectionArrowSize"); }
	FLinearColor& SplineDrawColorField() { return *GetNativePointerField<FLinearColor*>(this, "USplineComponent.SplineDrawColor"); }
	int& ReparamStepsPerSegmentField() { return *GetNativePointerField<int*>(this, "USplineComponent.ReparamStepsPerSegment"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "USplineComponent.Duration"); }
	bool& bStationaryEndpointsField() { return *GetNativePointerField<bool*>(this, "USplineComponent.bStationaryEndpoints"); }

	// Functions

	void AddSplineLocalPoint(const FVector * Position) { NativeCall<void, const FVector *>(this, "USplineComponent.AddSplineLocalPoint", Position); }
	void AddSplineWorldPoint(const FVector * Position) { NativeCall<void, const FVector *>(this, "USplineComponent.AddSplineWorldPoint", Position); }
	void ApplyComponentInstanceData(TSharedPtr<FComponentInstanceDataBase,0> ComponentInstanceData) { NativeCall<void, TSharedPtr<FComponentInstanceDataBase,0>>(this, "USplineComponent.ApplyComponentInstanceData", ComponentInstanceData); }
	void ClearSplinePoints() { NativeCall<void>(this, "USplineComponent.ClearSplinePoints"); }
	FVector * FindDirectionClosestToWorldLocation(FVector * result, const FVector * WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace) { return NativeCall<FVector *, FVector *, const FVector *, ESplineCoordinateSpace::Type>(this, "USplineComponent.FindDirectionClosestToWorldLocation", result, WorldLocation, CoordinateSpace); }
	float FindInputKeyClosestToWorldLocation(const FVector * WorldLocation) { return NativeCall<float, const FVector *>(this, "USplineComponent.FindInputKeyClosestToWorldLocation", WorldLocation); }
	FVector * FindLocationClosestToWorldLocation(FVector * result, const FVector * WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace) { return NativeCall<FVector *, FVector *, const FVector *, ESplineCoordinateSpace::Type>(this, "USplineComponent.FindLocationClosestToWorldLocation", result, WorldLocation, CoordinateSpace); }
	FName * GetComponentInstanceDataType(FName * result) { return NativeCall<FName *, FName *>(this, "USplineComponent.GetComponentInstanceDataType", result); }
	FVector * GetDirectionAtSplineInputKey(FVector * result, float InKey, ESplineCoordinateSpace::Type CoordinateSpace) { return NativeCall<FVector *, FVector *, float, ESplineCoordinateSpace::Type>(this, "USplineComponent.GetDirectionAtSplineInputKey", result, InKey, CoordinateSpace); }
	float GetDistanceAlongSplineAtSplinePoint(int PointIndex) { return NativeCall<float, int>(this, "USplineComponent.GetDistanceAlongSplineAtSplinePoint", PointIndex); }
	float GetInputKeyAtDistanceAlongSpline(float Distance) { return NativeCall<float, float>(this, "USplineComponent.GetInputKeyAtDistanceAlongSpline", Distance); }
	void GetLocalLocationAndTangentAtSplinePoint(int PointIndex, FVector * LocalLocation, FVector * LocalTangent) { NativeCall<void, int, FVector *, FVector *>(this, "USplineComponent.GetLocalLocationAndTangentAtSplinePoint", PointIndex, LocalLocation, LocalTangent); }
	FVector * GetLocationAtSplineInputKey(FVector * result, float InKey, ESplineCoordinateSpace::Type CoordinateSpace) { return NativeCall<FVector *, FVector *, float, ESplineCoordinateSpace::Type>(this, "USplineComponent.GetLocationAtSplineInputKey", result, InKey, CoordinateSpace); }
	int GetNumSplinePoints() { return NativeCall<int>(this, "USplineComponent.GetNumSplinePoints"); }
	float GetSegmentLength(const int Index, const float Param) { return NativeCall<float, const int, const float>(this, "USplineComponent.GetSegmentLength", Index, Param); }
	float GetSplineLength() { return NativeCall<float>(this, "USplineComponent.GetSplineLength"); }
	ESplinePointType::Type GetSplinePointType(int PointIndex) { return NativeCall<ESplinePointType::Type, int>(this, "USplineComponent.GetSplinePointType", PointIndex); }
	FVector * GetWorldDirectionAtDistanceAlongSpline(FVector * result, float Distance) { return NativeCall<FVector *, FVector *, float>(this, "USplineComponent.GetWorldDirectionAtDistanceAlongSpline", result, Distance); }
	FVector * GetWorldDirectionAtTime(FVector * result, float Time, bool bUseConstantVelocity) { return NativeCall<FVector *, FVector *, float, bool>(this, "USplineComponent.GetWorldDirectionAtTime", result, Time, bUseConstantVelocity); }
	FVector * GetWorldLocationAtDistanceAlongSpline(FVector * result, float Distance) { return NativeCall<FVector *, FVector *, float>(this, "USplineComponent.GetWorldLocationAtDistanceAlongSpline", result, Distance); }
	FVector * GetWorldLocationAtSplinePoint(FVector * result, int PointIndex) { return NativeCall<FVector *, FVector *, int>(this, "USplineComponent.GetWorldLocationAtSplinePoint", result, PointIndex); }
	FVector * GetWorldLocationAtTime(FVector * result, float Time, bool bUseConstantVelocity) { return NativeCall<FVector *, FVector *, float, bool>(this, "USplineComponent.GetWorldLocationAtTime", result, Time, bUseConstantVelocity); }
	FRotator * GetWorldRotationAtDistanceAlongSpline(FRotator * result, float Distance) { return NativeCall<FRotator *, FRotator *, float>(this, "USplineComponent.GetWorldRotationAtDistanceAlongSpline", result, Distance); }
	FRotator * GetWorldRotationAtTime(FRotator * result, float Time, bool bUseConstantVelocity) { return NativeCall<FRotator *, FRotator *, float, bool>(this, "USplineComponent.GetWorldRotationAtTime", result, Time, bUseConstantVelocity); }
	FVector * GetWorldTangentAtDistanceAlongSpline(FVector * result, float Distance) { return NativeCall<FVector *, FVector *, float>(this, "USplineComponent.GetWorldTangentAtDistanceAlongSpline", result, Distance); }
	void PostEditImport() { NativeCall<void>(this, "USplineComponent.PostEditImport"); }
	void PostLoad() { NativeCall<void>(this, "USplineComponent.PostLoad"); }
	void SetSplineLocalPoints(const TArray<FVector> * Points) { NativeCall<void, const TArray<FVector> *>(this, "USplineComponent.SetSplineLocalPoints", Points); }
	void SetSplinePointType(int PointIndex, ESplinePointType::Type Type) { NativeCall<void, int, ESplinePointType::Type>(this, "USplineComponent.SetSplinePointType", PointIndex, Type); }
	void SetSplinePointTypeAllPoints(ESplinePointType::Type Type) { NativeCall<void, ESplinePointType::Type>(this, "USplineComponent.SetSplinePointTypeAllPoints", Type); }
	void SetSplineWorldPoints(const TArray<FVector> * Points) { NativeCall<void, const TArray<FVector> *>(this, "USplineComponent.SetSplineWorldPoints", Points); }
	void SetTangentAtSplinePoint(int PointIndex, const FVector * InTangent, ESplineCoordinateSpace::Type CoordinateSpace) { NativeCall<void, int, const FVector *, ESplineCoordinateSpace::Type>(this, "USplineComponent.SetTangentAtSplinePoint", PointIndex, InTangent, CoordinateSpace); }
	void SetWorldLocationAtSplinePoint(int PointIndex, const FVector * InLocation) { NativeCall<void, int, const FVector *>(this, "USplineComponent.SetWorldLocationAtSplinePoint", PointIndex, InLocation); }
	void SetWorldSplinePointsAndType(const TArray<FVector> * Points, ESplinePointType::Type Type) { NativeCall<void, const TArray<FVector> *, ESplinePointType::Type>(this, "USplineComponent.SetWorldSplinePointsAndType", Points, Type); }
	void UpdateSpline() { NativeCall<void>(this, "USplineComponent.UpdateSpline"); }
};

