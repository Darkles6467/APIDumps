#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPAdjustCharacterMovementImpulse_Parms
{
	char __padding[0x24L];
	FVector& ImpulseField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPAdjustCharacterMovementImpulse_Parms.Impulse"); }
	bool& bVelocityChangeField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPAdjustCharacterMovementImpulse_Parms.bVelocityChange"); }
	float& MassScaleImpulseExponentField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPAdjustCharacterMovementImpulse_Parms.MassScaleImpulseExponent"); }
	bool& bOverrideMaxImpulseZField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPAdjustCharacterMovementImpulse_Parms.bOverrideMaxImpulseZ"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPAdjustCharacterMovementImpulse_Parms.ReturnValue"); }

	// Functions

};

