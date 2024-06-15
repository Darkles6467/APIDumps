#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacterStatusComponent_eventNetSyncMaxStatusValues_Parms
{
	char __padding[0x20L];
	TArray<float>& NetMaxStatusValuesField() { return *GetNativePointerField<TArray<float>*>(this, "PrimalCharacterStatusComponent_eventNetSyncMaxStatusValues_Parms.NetMaxStatusValues"); }
	TArray<float>& NetBaseMaxStatusValuesField() { return *GetNativePointerField<TArray<float>*>(this, "PrimalCharacterStatusComponent_eventNetSyncMaxStatusValues_Parms.NetBaseMaxStatusValues"); }

	// Functions

};

