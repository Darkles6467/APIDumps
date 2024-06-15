#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetRidingMultiUseEntries_Parms
{
	char __padding[0x28L];
	TArray<FMultiUseEntry>& MultiUseEntriesField() { return *GetNativePointerField<TArray<FMultiUseEntry>*>(this, "PrimalDinoCharacter_eventBPGetRidingMultiUseEntries_Parms.MultiUseEntries"); }
	TArray<FMultiUseEntry>& ReturnValueField() { return *GetNativePointerField<TArray<FMultiUseEntry>*>(this, "PrimalDinoCharacter_eventBPGetRidingMultiUseEntries_Parms.ReturnValue"); }

	// Functions

};

