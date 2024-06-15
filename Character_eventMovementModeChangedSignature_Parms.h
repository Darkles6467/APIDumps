#pragma once

#include "BaseDeclarations.h"
struct Character_eventMovementModeChangedSignature_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum EMovementMode>& PrevMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "Character_eventMovementModeChangedSignature_Parms.PrevMovementMode"); }
	char& PreviousCustomModeField() { return *GetNativePointerField<char*>(this, "Character_eventMovementModeChangedSignature_Parms.PreviousCustomMode"); }
};

