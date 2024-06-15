#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBP_OverrideCharacterWalkingVelocity_Parms
{
	char __padding[0x20L];
	FVector& InitialVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBP_OverrideCharacterWalkingVelocity_Parms.InitialVelocity"); }
	float& FrictionField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_OverrideCharacterWalkingVelocity_Parms.Friction"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_OverrideCharacterWalkingVelocity_Parms.DeltaTime"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBP_OverrideCharacterWalkingVelocity_Parms.ReturnValue"); }
};

