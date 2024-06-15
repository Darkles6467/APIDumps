#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientRemoveActorItem_Parms
{
	char __padding[0x18L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventClientRemoveActorItem_Parms.itemID"); }
	bool& showHUDMessageField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientRemoveActorItem_Parms.showHUDMessage"); }
};

