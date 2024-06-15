#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleMissionProjectileExploded_Parms
{
	char __padding[0x10L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionProjectileExploded_Parms.ReturnValue"); }
};

