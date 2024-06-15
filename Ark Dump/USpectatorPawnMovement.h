#pragma once

#include "BaseDeclarations.h"
#include "UPawnMovementComponent.h"
#include "UNavMovementComponent.h"
#include "UMovementComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UFloatingPawnMovement : UPawnMovementComponent
{
	char __padding[0x18L];
	float& MaxSpeedField() { return *GetNativePointerField<float*>(this, "UFloatingPawnMovement.MaxSpeed"); }
	float& AccelerationField() { return *GetNativePointerField<float*>(this, "UFloatingPawnMovement.Acceleration"); }
	float& DecelerationField() { return *GetNativePointerField<float*>(this, "UFloatingPawnMovement.Deceleration"); }
	float& MaxFrameMovementField() { return *GetNativePointerField<float*>(this, "UFloatingPawnMovement.MaxFrameMovement"); }

	// Functions

	void ApplyControlInputToVelocity(float DeltaTime) { NativeCall<void, float>(this, "UFloatingPawnMovement.ApplyControlInputToVelocity", DeltaTime); }
	float GetMaxSpeed() { return NativeCall<float>(this, "UFloatingPawnMovement.GetMaxSpeed"); }
	bool LimitWorldBounds() { return NativeCall<bool>(this, "UFloatingPawnMovement.LimitWorldBounds"); }
	bool ResolvePenetrationImpl(const FVector * Adjustment, const FHitResult * Hit, const FQuat * NewRotationQuat) { return NativeCall<bool, const FVector *, const FHitResult *, const FQuat *>(this, "UFloatingPawnMovement.ResolvePenetrationImpl", Adjustment, Hit, NewRotationQuat); }
};

struct USpectatorPawnMovement : UFloatingPawnMovement
{
	char __padding[0x8L];

	// Functions

};

