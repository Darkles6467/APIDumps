#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventNetAddCharacterMovementImpulse_Parms
{
	char __padding[0x18L];
	FVector& ImpulseField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventNetAddCharacterMovementImpulse_Parms.Impulse"); }
	bool& bVelChangeField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventNetAddCharacterMovementImpulse_Parms.bVelChange"); }
	float& ImpulseExponentField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventNetAddCharacterMovementImpulse_Parms.ImpulseExponent"); }
	bool& bSetNewMovementModeField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventNetAddCharacterMovementImpulse_Parms.bSetNewMovementMode"); }
	TEnumAsByte<enum EMovementMode>& NewMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "PrimalCharacter_eventNetAddCharacterMovementImpulse_Parms.NewMovementMode"); }
	bool& bOverrideMaxImpulseZField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventNetAddCharacterMovementImpulse_Parms.bOverrideMaxImpulseZ"); }
};

