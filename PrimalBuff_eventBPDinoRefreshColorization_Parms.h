#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPDinoRefreshColorization_Parms
{
	char __padding[0x20L];
	TArray<FLinearColor>& DinoColorsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "PrimalBuff_eventBPDinoRefreshColorization_Parms.DinoColors"); }
	TArray<FLinearColor>& OverrideColorsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "PrimalBuff_eventBPDinoRefreshColorization_Parms.OverrideColors"); }

	// Functions

};

