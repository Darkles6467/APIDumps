#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientUsedActorItem_Parms
{
	char __padding[0x10L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventClientUsedActorItem_Parms.itemID"); }
};
