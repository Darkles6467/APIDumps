#pragma once

#include "BaseDeclarations.h"
struct FActiveEventUndeprecatedDinos
{
	char __padding[0x18L];
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "FActiveEventUndeprecatedDinos.ActiveEvent"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& UndeprecatedDinosDuringEventField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "FActiveEventUndeprecatedDinos.UndeprecatedDinosDuringEvent"); }

	// Functions

};

