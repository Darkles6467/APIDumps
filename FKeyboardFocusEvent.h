#pragma once

#include "BaseDeclarations.h"
struct FKeyboardFocusEvent
{
	char __padding[0x8L];
	EKeyboardFocusCause::Type& CauseField() { return *GetNativePointerField<EKeyboardFocusCause::Type*>(this, "FKeyboardFocusEvent.Cause"); }
	char& FlagsField() { return *GetNativePointerField<char*>(this, "FKeyboardFocusEvent.Flags"); }

	// Functions

};

