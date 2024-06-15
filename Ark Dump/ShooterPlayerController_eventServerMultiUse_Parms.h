#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerMultiUse_Parms
{
	char __padding[0x10L];
	int& useIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerMultiUse_Parms.useIndex"); }
};

