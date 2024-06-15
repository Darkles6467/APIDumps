#pragma once

#include "BaseDeclarations.h"
#include "UShapeComponent.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USphereComponent : UShapeComponent
{

	// Functions

	bool AreSymmetricRotations(const FQuat * A, const FQuat * B, const FVector * Scale3D) { return NativeCall<bool, const FQuat *, const FQuat *, const FVector *>(this, "USphereComponent.AreSymmetricRotations", A, B, Scale3D); }
	void CalcBoundingCylinder(float * CylinderRadius, float * CylinderHalfHeight) { NativeCall<void, float *, float *>(this, "USphereComponent.CalcBoundingCylinder", CylinderRadius, CylinderHalfHeight); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "USphereComponent.CalcBounds", result, LocalToWorld); }
	FCollisionShape * GetCollisionShape(FCollisionShape * result, float Inflation) { return NativeCall<FCollisionShape *, FCollisionShape *, float>(this, "USphereComponent.GetCollisionShape", result, Inflation); }
	bool IsZeroExtent() { return NativeCall<bool>(this, "USphereComponent.IsZeroExtent"); }
	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps) { NativeCall<void, float, bool>(this, "USphereComponent.SetSphereRadius", InSphereRadius, bUpdateOverlaps); }
	void UpdateBodySetup() { NativeCall<void>(this, "USphereComponent.UpdateBodySetup"); }
};

struct UDrawSphereComponent : USphereComponent
{

	// Functions

};

