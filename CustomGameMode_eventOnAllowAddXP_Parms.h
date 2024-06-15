#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnAllowAddXP_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnAllowAddXP_Parms.ReturnValue"); }
};

