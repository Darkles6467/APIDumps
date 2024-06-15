#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestRemoveItemSkinOnly_Parms
{
	char __padding[0x10L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerRequestRemoveItemSkinOnly_Parms.itemID"); }
};

