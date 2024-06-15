#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPRemoteInventoryAllowCrafting_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalInventoryComponent_eventBPRemoteInventoryAllowCrafting_Parms.PC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPRemoteInventoryAllowCrafting_Parms.ReturnValue"); }
};

