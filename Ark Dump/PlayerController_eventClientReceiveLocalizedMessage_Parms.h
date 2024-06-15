#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientReceiveLocalizedMessage_Parms
{
	char __padding[0x28L];
	int& SwitchField() { return *GetNativePointerField<int*>(this, "PlayerController_eventClientReceiveLocalizedMessage_Parms.Switch"); }
};

