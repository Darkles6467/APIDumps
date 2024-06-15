#pragma once

#include "BaseDeclarations.h"
struct GameState_eventPostProcessOverlapEvent_Parms
{
	char __padding[0x18L];
	bool& bIsPrimaryPlayerField() { return *GetNativePointerField<bool*>(this, "GameState_eventPostProcessOverlapEvent_Parms.bIsPrimaryPlayer"); }
};

