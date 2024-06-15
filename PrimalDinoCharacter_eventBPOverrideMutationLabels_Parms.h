#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOverrideMutationLabels_Parms
{
	char __padding[0x18L];
	bool& maleField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPOverrideMutationLabels_Parms.male"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalDinoCharacter_eventBPOverrideMutationLabels_Parms.ReturnValue"); }
};

