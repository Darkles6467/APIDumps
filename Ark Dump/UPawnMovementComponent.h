#pragma once

#include "BaseDeclarations.h"
#include "UNavMovementComponent.h"

struct UPawnMovementComponent : UNavMovementComponent
{
	char __padding[0x10L];
	int& LastFrameAppliedImpulseField() { return *GetNativePointerField<int*>(this, "UPawnMovementComponent.LastFrameAppliedImpulse"); }

	// Functions

	void AddInputVector(FVector WorldAccel, bool bForce) { NativeCall<void, FVector, bool>(this, "UPawnMovementComponent.AddInputVector", WorldAccel, bForce); }
	FVector * ConsumeInputVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UPawnMovementComponent.ConsumeInputVector", result); }
	FVector * GetLastInputVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UPawnMovementComponent.GetLastInputVector", result); }
	FVector * K2_GetInputVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UPawnMovementComponent.K2_GetInputVector", result); }
	bool IsMoveInputIgnored() { return NativeCall<bool>(this, "UPawnMovementComponent.IsMoveInputIgnored"); }
	void SetUpdatedComponent(UPrimitiveComponent * NewUpdatedComponent) { NativeCall<void, UPrimitiveComponent *>(this, "UPawnMovementComponent.SetUpdatedComponent", NewUpdatedComponent); }
};

