#pragma once

#include "BaseDeclarations.h"
struct Character_eventBP_PreventMovementMode_Parms
{
	char __padding[0x3L];
	TEnumAsByte<enum EMovementMode>& newMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "Character_eventBP_PreventMovementMode_Parms.newMovementMode"); }
	char& newCustomModeField() { return *GetNativePointerField<char*>(this, "Character_eventBP_PreventMovementMode_Parms.newCustomMode"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Character_eventBP_PreventMovementMode_Parms.ReturnValue"); }
};

