#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientFinishedReceivingActorItems_Parms
{
	char __padding[0x10L];
	bool& bEquippedItemsField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientFinishedReceivingActorItems_Parms.bEquippedItems"); }
};

