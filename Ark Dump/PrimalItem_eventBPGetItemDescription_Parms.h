#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPGetItemDescription_Parms
{
	char __padding[0x30L];
	FString& InDescriptionField() { return *GetNativePointerField<FString*>(this, "PrimalItem_eventBPGetItemDescription_Parms.InDescription"); }
	bool& bGetLongDescriptionField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPGetItemDescription_Parms.bGetLongDescription"); }
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalItem_eventBPGetItemDescription_Parms.ForPC"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalItem_eventBPGetItemDescription_Parms.ReturnValue"); }

	// Functions

};

