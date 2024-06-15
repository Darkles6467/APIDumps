#pragma once

#include "BaseDeclarations.h"
struct Character_eventK2_OnMovementModeChanged_Parms
{
	char __padding[0x4L];
	TEnumAsByte<enum EMovementMode>& PrevMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "Character_eventK2_OnMovementModeChanged_Parms.PrevMovementMode"); }
	TEnumAsByte<enum EMovementMode>& NewMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "Character_eventK2_OnMovementModeChanged_Parms.NewMovementMode"); }
	char& PrevCustomModeField() { return *GetNativePointerField<char*>(this, "Character_eventK2_OnMovementModeChanged_Parms.PrevCustomMode"); }
	char& NewCustomModeField() { return *GetNativePointerField<char*>(this, "Character_eventK2_OnMovementModeChanged_Parms.NewCustomMode"); }
};

