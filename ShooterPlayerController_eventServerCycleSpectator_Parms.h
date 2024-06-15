#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerCycleSpectator_Parms
{
	char __padding[0x1L];
	bool& bNextField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerCycleSpectator_Parms.bNext"); }
};

