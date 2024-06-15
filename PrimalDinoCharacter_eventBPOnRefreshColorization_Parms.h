#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOnRefreshColorization_Parms
{
	char __padding[0x10L];
	TArray<FLinearColor>& ColorsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "PrimalDinoCharacter_eventBPOnRefreshColorization_Parms.Colors"); }
};

