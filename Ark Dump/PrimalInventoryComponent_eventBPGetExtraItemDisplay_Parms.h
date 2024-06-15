#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPGetExtraItemDisplay_Parms
{
	char __padding[0x38L];
	bool& bShowExtraItemField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPGetExtraItemDisplay_Parms.bShowExtraItem"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "PrimalInventoryComponent_eventBPGetExtraItemDisplay_Parms.Description"); }
	FString& CustomStringField() { return *GetNativePointerField<FString*>(this, "PrimalInventoryComponent_eventBPGetExtraItemDisplay_Parms.CustomString"); }

	// Functions

};

