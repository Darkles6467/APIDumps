#pragma once

#include "BaseDeclarations.h"
#include "UShapeComponent.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBoxComponent : UShapeComponent
{
	char __padding[0x10L];
	FieldArray<_BYTE, 4> BoxExtentField() { return {this, "UBoxComponent.BoxExtent"}; }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UBoxComponent.CalcBounds", result, LocalToWorld); }
	FCollisionShape * GetCollisionShape(FCollisionShape * result, float Inflation) { return NativeCall<FCollisionShape *, FCollisionShape *, float>(this, "UBoxComponent.GetCollisionShape", result, Inflation); }
	bool IsZeroExtent() { return NativeCall<bool>(this, "UBoxComponent.IsZeroExtent"); }
	void SetBoxExtent(FVector NewBoxExtent, bool bUpdateOverlaps) { NativeCall<void, FVector, bool>(this, "UBoxComponent.SetBoxExtent", NewBoxExtent, bUpdateOverlaps); }
	void UpdateBodySetup() { NativeCall<void>(this, "UBoxComponent.UpdateBodySetup"); }
};

