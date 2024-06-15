#pragma once

#include "BaseDeclarations.h"
#include "UPrimalItem.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalItem_Dye : UPrimalItem
{
	char __padding[0x20L];
	FLinearColor& DyeColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalItem_Dye.DyeColor"); }
	int& CachedDinoColorSetIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.CachedDinoColorSetIndex"); }

	// Functions

	bool CanUseWithItemSource(UPrimalItem * DestinationItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalItem_Dye.CanUseWithItemSource", DestinationItem); }
	void InitItemIcon() { NativeCall<void>(this, "UPrimalItem_Dye.InitItemIcon"); }
	void LocalUseItemOntoItem(AShooterPlayerController * ForPC, UPrimalItem * DestinationItem) { NativeCall<void, AShooterPlayerController *, UPrimalItem *>(this, "UPrimalItem_Dye.LocalUseItemOntoItem", ForPC, DestinationItem); }
	void Used(UPrimalItem * DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem *, int>(this, "UPrimalItem_Dye.Used", DestinationItem, AdditionalData); }
};

