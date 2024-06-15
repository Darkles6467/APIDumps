#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventNetSetCharacterMovementVelocity_Parms
{
	char __padding[0x14L];
	bool& bSetNewVelocityField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventNetSetCharacterMovementVelocity_Parms.bSetNewVelocity"); }
	FVector& NewVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventNetSetCharacterMovementVelocity_Parms.NewVelocity"); }
	bool& bSetNewMovementModeField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventNetSetCharacterMovementVelocity_Parms.bSetNewMovementMode"); }
	TEnumAsByte<enum EMovementMode>& NewMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "PrimalCharacter_eventNetSetCharacterMovementVelocity_Parms.NewMovementMode"); }
};

