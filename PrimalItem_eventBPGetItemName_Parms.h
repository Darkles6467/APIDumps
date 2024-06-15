#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPGetItemName_Parms
{
	char __padding[0x28L];
	FString& ItemNameInField() { return *GetNativePointerField<FString*>(this, "PrimalItem_eventBPGetItemName_Parms.ItemNameIn"); }
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalItem_eventBPGetItemName_Parms.ForPC"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalItem_eventBPGetItemName_Parms.ReturnValue"); }

	// Functions

};

