#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientSwapActorItems_Parms
{
	char __padding[0x18L];
	FItemNetID& itemID1Field() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventClientSwapActorItems_Parms.itemID1"); }
	FItemNetID& itemID2Field() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventClientSwapActorItems_Parms.itemID2"); }
};

