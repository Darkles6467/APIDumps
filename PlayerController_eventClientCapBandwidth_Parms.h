#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientCapBandwidth_Parms
{
	char __padding[0x4L];
	int& CapField() { return *GetNativePointerField<int*>(this, "PlayerController_eventClientCapBandwidth_Parms.Cap"); }
};

