#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPOverrideCharacterNewFallVelocity_Parms
{
	char __padding[0x28L];
	FVector& InitialVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPOverrideCharacterNewFallVelocity_Parms.InitialVelocity"); }
	FVector& GravityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPOverrideCharacterNewFallVelocity_Parms.Gravity"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPOverrideCharacterNewFallVelocity_Parms.DeltaTime"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPOverrideCharacterNewFallVelocity_Parms.ReturnValue"); }
};

