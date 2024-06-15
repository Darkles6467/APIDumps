#pragma once

#include "BaseDeclarations.h"
#include "FInputBinding.h"

struct FInputKeyBinding : FInputBinding
{
	char __padding[0x44L];
	FInputChord& ChordField() { return *GetNativePointerField<FInputChord*>(this, "FInputKeyBinding.Chord"); }
	TEnumAsByte<enum EInputEvent>& KeyEventField() { return *GetNativePointerField<TEnumAsByte<enum EInputEvent>*>(this, "FInputKeyBinding.KeyEvent"); }

	// Functions

};

