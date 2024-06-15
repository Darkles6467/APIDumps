#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPCheckJumpInput_Parms
{
	char __padding[0x18L];
	bool& bUseCustomErrorMessageField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPCheckJumpInput_Parms.bUseCustomErrorMessage"); }
	FString& ErrorMessageToDisplayField() { return *GetNativePointerField<FString*>(this, "PrimalCharacter_eventBPCheckJumpInput_Parms.ErrorMessageToDisplay"); }
};

