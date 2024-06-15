#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleLastMissionProjectileExploded_Parms
{
	char __padding[0x10L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleLastMissionProjectileExploded_Parms.ReturnValue"); }
};

