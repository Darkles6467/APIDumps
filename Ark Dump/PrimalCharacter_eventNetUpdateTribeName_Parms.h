#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventNetUpdateTribeName_Parms
{
	char __padding[0x10L];
	FString& NewTribeNameField() { return *GetNativePointerField<FString*>(this, "PrimalCharacter_eventNetUpdateTribeName_Parms.NewTribeName"); }
};

