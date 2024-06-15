#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRemoveSteamItem_Parms
{
	char __padding[0x4L];
	unsigned int& ItemdDefIdField() { return *GetNativePointerField<unsigned int*>(this, "ShooterPlayerController_eventServerRemoveSteamItem_Parms.ItemdDefId"); }
};

