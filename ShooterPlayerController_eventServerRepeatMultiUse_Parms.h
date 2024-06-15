#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRepeatMultiUse_Parms
{
	char __padding[0x10L];
	int& useIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRepeatMultiUse_Parms.useIndex"); }
};

