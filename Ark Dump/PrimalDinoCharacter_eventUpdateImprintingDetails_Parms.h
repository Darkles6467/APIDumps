#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventUpdateImprintingDetails_Parms
{
	char __padding[0x18L];
	FString& NewImprinterNameField() { return *GetNativePointerField<FString*>(this, "PrimalDinoCharacter_eventUpdateImprintingDetails_Parms.NewImprinterName"); }
	unsigned __int64& NewImprinterPlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "PrimalDinoCharacter_eventUpdateImprintingDetails_Parms.NewImprinterPlayerDataID"); }
};

