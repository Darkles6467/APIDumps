#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientRemoveItemFromSteamInventory_Parms
{
	char __padding[0x18L];
	TArray<unsigned __int64>& ItemSteamUserIDField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "ShooterPlayerController_eventClientRemoveItemFromSteamInventory_Parms.ItemSteamUserID"); }
	int& QuantityField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientRemoveItemFromSteamInventory_Parms.Quantity"); }
};

