#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPRemoteInventoryGetMaxVisibleSlots_Parms
{
	char __padding[0x18L];
	int& NumItemsField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventBPRemoteInventoryGetMaxVisibleSlots_Parms.NumItems"); }
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalInventoryComponent_eventBPRemoteInventoryGetMaxVisibleSlots_Parms.PC"); }
	bool& bIsLocalField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPRemoteInventoryGetMaxVisibleSlots_Parms.bIsLocal"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventBPRemoteInventoryGetMaxVisibleSlots_Parms.ReturnValue"); }
};

