#pragma once

#include "BaseDeclarations.h"
#include "ADroppedItem.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct ADroppedItemMission : ADroppedItem
{
	char __padding[0x10L];

	// Functions

	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "ADroppedItemMission.DrawHUD", HUD); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "ADroppedItemMission.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool IsAllowedToPickupItem_Implementation(APlayerController * PC) { return NativeCall<bool, APlayerController *>(this, "ADroppedItemMission.IsAllowedToPickupItem_Implementation", PC); }
	void OnItemPickedUp(APlayerController * ByPC, UPrimalItem * InventoryItem) { NativeCall<void, APlayerController *, UPrimalItem *>(this, "ADroppedItemMission.OnItemPickedUp", ByPC, InventoryItem); }
};

