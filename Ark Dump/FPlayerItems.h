#pragma once

#include "BaseDeclarations.h"
struct FPlayerItems
{
	char __padding[0x18L];
	AShooterCharacter * CharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "FPlayerItems.Character"); }
	TArray<FItemNetID>& ItemIDsField() { return *GetNativePointerField<TArray<FItemNetID>*>(this, "FPlayerItems.ItemIDs"); }

	// Functions

};

