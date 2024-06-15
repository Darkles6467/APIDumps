#pragma once

#include "BaseDeclarations.h"
#include "UShapeComponent.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCapsuleComponent : UShapeComponent
{
	char __padding[0x10L];
	float& CapsuleHeight_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UCapsuleComponent.CapsuleHeight_DEPRECATED"); }

	// Functions

	bool AreSymmetricRotations(const FQuat * A, const FQuat * B, const FVector * Scale3D) { return NativeCall<bool, const FQuat *, const FQuat *, const FVector *>(this, "UCapsuleComponent.AreSymmetricRotations", A, B, Scale3D); }
	void CalcBoundingCylinder(float * CylinderRadius, float * CylinderHalfHeight) { NativeCall<void, float *, float *>(this, "UCapsuleComponent.CalcBoundingCylinder", CylinderRadius, CylinderHalfHeight); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UCapsuleComponent.CalcBounds", result, LocalToWorld); }
	FCollisionShape * GetCollisionShape(FCollisionShape * result, float Inflation) { return NativeCall<FCollisionShape *, FCollisionShape *, float>(this, "UCapsuleComponent.GetCollisionShape", result, Inflation); }
	bool IsZeroExtent() { return NativeCall<bool>(this, "UCapsuleComponent.IsZeroExtent"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UCapsuleComponent.Serialize", Ar); }
	void SetCapsuleSize(float NewRadius, float NewHalfHeight, bool bUpdateOverlaps) { NativeCall<void, float, float, bool>(this, "UCapsuleComponent.SetCapsuleSize", NewRadius, NewHalfHeight, bUpdateOverlaps); }
	void UpdateBodySetup() { NativeCall<void>(this, "UCapsuleComponent.UpdateBodySetup"); }
};

