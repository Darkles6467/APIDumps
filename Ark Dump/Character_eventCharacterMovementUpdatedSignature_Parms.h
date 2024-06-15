#pragma once

#include "BaseDeclarations.h"
struct Character_eventCharacterMovementUpdatedSignature_Parms
{
	char __padding[0x1cL];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "Character_eventCharacterMovementUpdatedSignature_Parms.DeltaSeconds"); }
	FVector& OldLocationField() { return *GetNativePointerField<FVector*>(this, "Character_eventCharacterMovementUpdatedSignature_Parms.OldLocation"); }
	FVector& OldVelocityField() { return *GetNativePointerField<FVector*>(this, "Character_eventCharacterMovementUpdatedSignature_Parms.OldVelocity"); }
};

