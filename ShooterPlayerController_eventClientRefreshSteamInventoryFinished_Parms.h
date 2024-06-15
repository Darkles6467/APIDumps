#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientRefreshSteamInventoryFinished_Parms
{
	char __padding[0x1L];
	bool& bSuccessField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientRefreshSteamInventoryFinished_Parms.bSuccess"); }
};

