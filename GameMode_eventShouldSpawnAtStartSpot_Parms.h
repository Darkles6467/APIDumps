#pragma once

#include "BaseDeclarations.h"
struct GameMode_eventShouldSpawnAtStartSpot_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "GameMode_eventShouldSpawnAtStartSpot_Parms.ReturnValue"); }
};

