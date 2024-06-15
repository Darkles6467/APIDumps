#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBP_OverrideCharacterFlyingVelocity_Parms
{
	char __padding[0x28L];
	FVector& InitialVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBP_OverrideCharacterFlyingVelocity_Parms.InitialVelocity"); }
	FVector& GravityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBP_OverrideCharacterFlyingVelocity_Parms.Gravity"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_OverrideCharacterFlyingVelocity_Parms.DeltaTime"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBP_OverrideCharacterFlyingVelocity_Parms.ReturnValue"); }
};

