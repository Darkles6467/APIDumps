#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestInventoryUseItemWithItem_Parms
{
	char __padding[0x20L];
	FItemNetID& itemID1Field() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerRequestInventoryUseItemWithItem_Parms.itemID1"); }
	FItemNetID& itemID2Field() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerRequestInventoryUseItemWithItem_Parms.itemID2"); }
	int& AdditionalDataField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestInventoryUseItemWithItem_Parms.AdditionalData"); }
};

