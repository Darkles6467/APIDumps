#pragma once

#include "BaseDeclarations.h"
struct FTeleportedCharacter
{
	char __padding[0x28L];
	FVector& OriginalLocationField() { return *GetNativePointerField<FVector*>(this, "FTeleportedCharacter.OriginalLocation"); }
	FRotator& OriginalRotationField() { return *GetNativePointerField<FRotator*>(this, "FTeleportedCharacter.OriginalRotation"); }

	// Functions

};

