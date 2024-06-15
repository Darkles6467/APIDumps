#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventOnRemoveTribe_Parms
{
	char __padding[0x4L];
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "ShooterGameMode_eventOnRemoveTribe_Parms.TribeID"); }
};

