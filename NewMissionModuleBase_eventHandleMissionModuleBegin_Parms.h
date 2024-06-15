#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleMissionModuleBegin_Parms
{
	char __padding[0x4L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionModuleBegin_Parms.ReturnValue"); }
};

