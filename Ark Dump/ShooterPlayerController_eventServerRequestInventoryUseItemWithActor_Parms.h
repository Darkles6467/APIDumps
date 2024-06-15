#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestInventoryUseItemWithActor_Parms
{
	char __padding[0x20L];
	FItemNetID& itemID1Field() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerRequestInventoryUseItemWithActor_Parms.itemID1"); }
	int& AdditionalDataField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestInventoryUseItemWithActor_Parms.AdditionalData"); }
};

