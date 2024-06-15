#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnRemoveTribe_Parms
{
	char __padding[0x8L];
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "CustomGameMode_eventOnRemoveTribe_Parms.TribeID"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnRemoveTribe_Parms.ReturnValue"); }
};

