#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPAllowCrafting_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalItem_eventBPAllowCrafting_Parms.ForPC"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalItem_eventBPAllowCrafting_Parms.ReturnValue"); }
};

