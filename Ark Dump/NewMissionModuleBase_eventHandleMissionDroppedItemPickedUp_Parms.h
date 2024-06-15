#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleMissionDroppedItemPickedUp_Parms
{
	char __padding[0x20L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionDroppedItemPickedUp_Parms.ReturnValue"); }
};

