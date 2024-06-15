#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULandscapeSplineSegment : UObject
{
	char __padding[0x80L];
	FieldArray<FLandscapeSplineSegmentConnection, 2> ConnectionsField() { return {this, "ULandscapeSplineSegment.Connections"}; }
	FInterpCurve<FVector>& SplineInfoField() { return *GetNativePointerField<FInterpCurve<FVector>*>(this, "ULandscapeSplineSegment.SplineInfo"); }
	TArray<FLandscapeSplineInterpPoint>& PointsField() { return *GetNativePointerField<TArray<FLandscapeSplineInterpPoint>*>(this, "ULandscapeSplineSegment.Points"); }
	FBox& BoundsField() { return *GetNativePointerField<FBox*>(this, "ULandscapeSplineSegment.Bounds"); }
	TArray<USplineMeshComponent *>& MeshComponentsField() { return *GetNativePointerField<TArray<USplineMeshComponent *>*>(this, "ULandscapeSplineSegment.MeshComponents"); }

	// Functions

	void FindNearest(const FVector * InLocation, float * t, FVector * OutLocation, FVector * OutTangent) { NativeCall<void, const FVector *, float *, FVector *, FVector *>(this, "ULandscapeSplineSegment.FindNearest", InLocation, t, OutLocation, OutTangent); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>(this, "ULandscapeSplineSegment.Modify", bAlwaysMarkDirty); }
	bool OwnsComponent(const USplineMeshComponent * SplineMeshComponent) { return NativeCall<bool, const USplineMeshComponent *>(this, "ULandscapeSplineSegment.OwnsComponent", SplineMeshComponent); }
};

