#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientSetPersonalDinoTameCount_Parms
{
	char __padding[0x4L];
	int& NewPersonalDinoTameCountField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientSetPersonalDinoTameCount_Parms.NewPersonalDinoTameCount"); }
};

