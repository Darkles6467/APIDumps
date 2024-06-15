#pragma once

#include "BaseDeclarations.h"
#include "FInputEvent.h"

struct FCharacterEvent : FInputEvent
{
	char __padding[0x8L];
	wchar_t& CharacterField() { return *GetNativePointerField<wchar_t*>(this, "FCharacterEvent.Character"); }

	// Functions

};

