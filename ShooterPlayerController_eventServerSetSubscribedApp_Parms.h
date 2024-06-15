#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSetSubscribedApp_Parms
{
	char __padding[0x8L];
	int& AppIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerSetSubscribedApp_Parms.AppID"); }
	bool& bPreventDefaultItemsField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerSetSubscribedApp_Parms.bPreventDefaultItems"); }
};

