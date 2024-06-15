#pragma once

#include "BaseDeclarations.h"
#include "UMovementComponent.h"

struct UNavMovementComponent : UMovementComponent
{
	char __padding[0x18L];

	// Functions

	void StopMovementImmediately() { NativeCall<void>(this, "UNavMovementComponent.StopMovementImmediately"); }
	void StopMovementKeepPathing() { NativeCall<void>(this, "UNavMovementComponent.StopMovementKeepPathing"); }
	FBasedPosition * GetActorFeetLocationBased(FBasedPosition * result) { return NativeCall<FBasedPosition *, FBasedPosition *>(this, "UNavMovementComponent.GetActorFeetLocationBased", result); }
	void RequestDirectMove(const FVector * MoveVelocity, bool bForceMaxSpeed) { NativeCall<void, const FVector *, bool>(this, "UNavMovementComponent.RequestDirectMove", MoveVelocity, bForceMaxSpeed); }
	void UpdateNavAgent(AActor * Owner) { NativeCall<void, AActor *>(this, "UNavMovementComponent.UpdateNavAgent", Owner); }
	void UpdateNavAgent(UCapsuleComponent * CapsuleComponent) { NativeCall<void, UCapsuleComponent *>(this, "UNavMovementComponent.UpdateNavAgent", CapsuleComponent); }
};

