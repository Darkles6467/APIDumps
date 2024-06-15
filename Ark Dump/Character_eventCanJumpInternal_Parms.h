#pragma once

#include "BaseDeclarations.h"
struct Character_eventCanJumpInternal_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Character_eventCanJumpInternal_Parms.ReturnValue"); }
};

