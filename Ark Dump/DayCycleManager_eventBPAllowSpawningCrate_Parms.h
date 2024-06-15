#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventBPAllowSpawningCrate_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "DayCycleManager_eventBPAllowSpawningCrate_Parms.ReturnValue"); }
};

