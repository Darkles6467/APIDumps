#pragma once

#include "BaseDeclarations.h"
#include "URadialSelectorHUD.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct URadialSelectorHUD_Inventory : URadialSelectorHUD
{
	char __padding[0x8L];

	// Functions

	void DrawHUD(AShooterHUD * HUD, float DeltaTime, bool bShow) { NativeCall<void, AShooterHUD *, float, bool>(this, "URadialSelectorHUD_Inventory.DrawHUD", HUD, DeltaTime, bShow); }
	void InitializeForInventorySlots(UPrimalInventoryComponent * Inventory) { NativeCall<void, UPrimalInventoryComponent *>(this, "URadialSelectorHUD_Inventory.InitializeForInventorySlots", Inventory); }
};

