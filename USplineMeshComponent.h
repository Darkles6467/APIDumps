#pragma once

#include "BaseDeclarations.h"
#include "UStaticMeshComponent.h"
#include "UMeshComponent.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USplineMeshComponent : UStaticMeshComponent
{
	char __padding[0x80L];
	FSplineMeshParams& SplineParamsField() { return *GetNativePointerField<FSplineMeshParams*>(this, "USplineMeshComponent.SplineParams"); }
	FVector& SplineUpDirField() { return *GetNativePointerField<FVector*>(this, "USplineMeshComponent.SplineUpDir"); }
	TEnumAsByte<enum ESplineMeshAxis::Type>& ForwardAxisField() { return *GetNativePointerField<TEnumAsByte<enum ESplineMeshAxis::Type>*>(this, "USplineMeshComponent.ForwardAxis"); }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "USplineMeshComponent.CalcBounds", result, LocalToWorld); }
	FTransform * CalcSliceTransform(FTransform * result, const float DistanceAlong) { return NativeCall<FTransform *, FTransform *, const float>(this, "USplineMeshComponent.CalcSliceTransform", result, DistanceAlong); }
	bool ContainsPhysicsTriMeshData(bool InUseAllTriData) { return NativeCall<bool, bool>(this, "USplineMeshComponent.ContainsPhysicsTriMeshData", InUseAllTriData); }
	void CreatePhysicsState() { NativeCall<void>(this, "USplineMeshComponent.CreatePhysicsState"); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport * GeomExport) { return NativeCall<bool, FNavigableGeometryExport *>(this, "USplineMeshComponent.DoCustomNavigableGeometryExport", GeomExport); }
	FVector2D * GetEndOffset(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "USplineMeshComponent.GetEndOffset", result); }
	FVector * GetEndPosition(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USplineMeshComponent.GetEndPosition", result); }
	float GetEndRoll() { return NativeCall<float>(this, "USplineMeshComponent.GetEndRoll"); }
	FVector2D * GetEndScale(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "USplineMeshComponent.GetEndScale", result); }
	FVector * GetEndTangent(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USplineMeshComponent.GetEndTangent", result); }
	bool GetPhysicsTriMeshData(FTriMeshCollisionData * CollisionData, bool InUseAllTriData) { return NativeCall<bool, FTriMeshCollisionData *, bool>(this, "USplineMeshComponent.GetPhysicsTriMeshData", CollisionData, InUseAllTriData); }
	FVector2D * GetStartOffset(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "USplineMeshComponent.GetStartOffset", result); }
	FVector * GetStartPosition(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USplineMeshComponent.GetStartPosition", result); }
	float GetStartRoll() { return NativeCall<float>(this, "USplineMeshComponent.GetStartRoll"); }
	FVector2D * GetStartScale(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "USplineMeshComponent.GetStartScale", result); }
	FVector * GetStartTangent(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USplineMeshComponent.GetStartTangent", result); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>(this, "USplineMeshComponent.Modify", bAlwaysMarkDirty); }
	void PostLoad() { NativeCall<void>(this, "USplineMeshComponent.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USplineMeshComponent.Serialize", Ar); }
	void SetEndOffset(FVector2D EndOffset) { NativeCall<void, FVector2D>(this, "USplineMeshComponent.SetEndOffset", EndOffset); }
	void SetEndPosition(FVector EndPos) { NativeCall<void, FVector>(this, "USplineMeshComponent.SetEndPosition", EndPos); }
	void SetEndRoll(float EndRoll) { NativeCall<void, float>(this, "USplineMeshComponent.SetEndRoll", EndRoll); }
	void SetEndScale(FVector2D EndScale) { NativeCall<void, FVector2D>(this, "USplineMeshComponent.SetEndScale", EndScale); }
	void SetEndTangent(FVector EndTangent) { NativeCall<void, FVector>(this, "USplineMeshComponent.SetEndTangent", EndTangent); }
	void SetStartAndEnd(FVector StartPos, FVector StartTangent, FVector EndPos, FVector EndTangent) { NativeCall<void, FVector, FVector, FVector, FVector>(this, "USplineMeshComponent.SetStartAndEnd", StartPos, StartTangent, EndPos, EndTangent); }
	void SetStartOffset(FVector2D StartOffset) { NativeCall<void, FVector2D>(this, "USplineMeshComponent.SetStartOffset", StartOffset); }
	void SetStartPosition(FVector StartPos) { NativeCall<void, FVector>(this, "USplineMeshComponent.SetStartPosition", StartPos); }
	void SetStartRoll(float StartRoll) { NativeCall<void, float>(this, "USplineMeshComponent.SetStartRoll", StartRoll); }
	void SetStartScale(FVector2D StartScale) { NativeCall<void, FVector2D>(this, "USplineMeshComponent.SetStartScale", StartScale); }
	void SetStartTangent(FVector StartTangent) { NativeCall<void, FVector>(this, "USplineMeshComponent.SetStartTangent", StartTangent); }
};

