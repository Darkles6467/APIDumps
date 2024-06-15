#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventServerNotifyLoadedWorld_Parms
{
	char __padding[0x8L];
	FName& WorldPackageNameField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventServerNotifyLoadedWorld_Parms.WorldPackageName"); }
};

