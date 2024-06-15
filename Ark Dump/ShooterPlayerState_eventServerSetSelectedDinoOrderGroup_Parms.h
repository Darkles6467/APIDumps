#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerSetSelectedDinoOrderGroup_Parms
{
	char __padding[0x4L];
	int& newGroupField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerSetSelectedDinoOrderGroup_Parms.newGroup"); }
};

