#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBP_OverrideCharacterSwimmingVelocity_Parms
{
	char __padding[0x30L];
	FVector& InitialVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBP_OverrideCharacterSwimmingVelocity_Parms.InitialVelocity"); }
	FVector& GravityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBP_OverrideCharacterSwimmingVelocity_Parms.Gravity"); }
	float& FluidFrictionField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_OverrideCharacterSwimmingVelocity_Parms.FluidFriction"); }
	float& NetBuoyancyField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_OverrideCharacterSwimmingVelocity_Parms.NetBuoyancy"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_OverrideCharacterSwimmingVelocity_Parms.DeltaTime"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBP_OverrideCharacterSwimmingVelocity_Parms.ReturnValue"); }

	// Functions

};

