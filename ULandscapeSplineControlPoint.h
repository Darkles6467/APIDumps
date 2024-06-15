#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULandscapeSplineControlPoint : UObject
{
	char __padding[0x70L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "ULandscapeSplineControlPoint.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "ULandscapeSplineControlPoint.Rotation"); }
	float& WidthField() { return *GetNativePointerField<float*>(this, "ULandscapeSplineControlPoint.Width"); }
	float& SideFalloffField() { return *GetNativePointerField<float*>(this, "ULandscapeSplineControlPoint.SideFalloff"); }
	float& EndFalloffField() { return *GetNativePointerField<float*>(this, "ULandscapeSplineControlPoint.EndFalloff"); }
	TArray<FLandscapeSplineConnection>& ConnectedSegmentsField() { return *GetNativePointerField<TArray<FLandscapeSplineConnection>*>(this, "ULandscapeSplineControlPoint.ConnectedSegments"); }
	UControlPointMeshComponent * MeshComponentField() { return GetNativePointerField<UControlPointMeshComponent *>(this, "ULandscapeSplineControlPoint.MeshComponent"); }
	TArray<FLandscapeSplineInterpPoint>& PointsField() { return *GetNativePointerField<TArray<FLandscapeSplineInterpPoint>*>(this, "ULandscapeSplineControlPoint.Points"); }
	FBox& BoundsField() { return *GetNativePointerField<FBox*>(this, "ULandscapeSplineControlPoint.Bounds"); }

	// Functions

	void PostLoad() { NativeCall<void>(this, "ULandscapeSplineControlPoint.PostLoad"); }
	FName * GetBestConnectionTo(FName * result, FVector Destination) { return NativeCall<FName *, FName *, FVector>(this, "ULandscapeSplineControlPoint.GetBestConnectionTo", result, Destination); }
	void GetConnectionLocalLocationAndRotation(FName SocketName, FVector * OutLocation, FRotator * OutRotation) { NativeCall<void, FName, FVector *, FRotator *>(this, "ULandscapeSplineControlPoint.GetConnectionLocalLocationAndRotation", SocketName, OutLocation, OutRotation); }
	void GetConnectionLocationAndRotation(FName SocketName, FVector * OutLocation, FRotator * OutRotation) { NativeCall<void, FName, FVector *, FRotator *>(this, "ULandscapeSplineControlPoint.GetConnectionLocationAndRotation", SocketName, OutLocation, OutRotation); }
	bool OwnsComponent(const UControlPointMeshComponent * StaticMeshComponent) { return NativeCall<bool, const UControlPointMeshComponent *>(this, "ULandscapeSplineControlPoint.OwnsComponent", StaticMeshComponent); }
};

