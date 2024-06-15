#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientEnableNetworkVoice_Parms
{
	char __padding[0x1L];
	bool& bEnableField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientEnableNetworkVoice_Parms.bEnable"); }
};

