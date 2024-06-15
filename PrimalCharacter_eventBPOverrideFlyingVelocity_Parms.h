#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOverrideFlyingVelocity_Parms
{
	char __padding[0x28L];
	FVector& InitialVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPOverrideFlyingVelocity_Parms.InitialVelocity"); }
	FVector& GravityField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPOverrideFlyingVelocity_Parms.Gravity"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPOverrideFlyingVelocity_Parms.DeltaTime"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPOverrideFlyingVelocity_Parms.ReturnValue"); }

	// Functions

};

