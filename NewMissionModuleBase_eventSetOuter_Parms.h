#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventSetOuter_Parms
{
	char __padding[0x10L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventSetOuter_Parms.ReturnValue"); }
};

