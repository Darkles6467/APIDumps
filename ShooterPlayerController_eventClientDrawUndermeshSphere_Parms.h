#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientDrawUndermeshSphere_Parms
{
	char __padding[0x4L];
	int& radiusField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientDrawUndermeshSphere_Parms.radius"); }
};

