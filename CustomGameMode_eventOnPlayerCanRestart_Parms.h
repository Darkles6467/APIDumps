#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnPlayerCanRestart_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnPlayerCanRestart_Parms.ReturnValue"); }
};

