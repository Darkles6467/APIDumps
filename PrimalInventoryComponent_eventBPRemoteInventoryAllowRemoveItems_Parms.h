#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPRemoteInventoryAllowRemoveItems_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalInventoryComponent_eventBPRemoteInventoryAllowRemoveItems_Parms.PC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPRemoteInventoryAllowRemoveItems_Parms.ReturnValue"); }
};

