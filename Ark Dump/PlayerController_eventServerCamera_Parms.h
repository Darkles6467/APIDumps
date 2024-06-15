#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventServerCamera_Parms
{
	char __padding[0x8L];
	FName& NewModeField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventServerCamera_Parms.NewMode"); }
};

