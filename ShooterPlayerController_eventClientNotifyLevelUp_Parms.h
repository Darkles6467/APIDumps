#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyLevelUp_Parms
{
	char __padding[0x10L];
	int& NewLevelField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientNotifyLevelUp_Parms.NewLevel"); }
};

