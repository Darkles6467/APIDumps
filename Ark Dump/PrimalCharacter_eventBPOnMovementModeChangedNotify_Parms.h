#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOnMovementModeChangedNotify_Parms
{
	char __padding[0x2L];
	TEnumAsByte<enum EMovementMode>& PrevMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "PrimalCharacter_eventBPOnMovementModeChangedNotify_Parms.PrevMovementMode"); }
	char& PreviousCustomModeField() { return *GetNativePointerField<char*>(this, "PrimalCharacter_eventBPOnMovementModeChangedNotify_Parms.PreviousCustomMode"); }
};

