#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventNetUpdateOriginalOwnerNameAndID_Parms
{
	char __padding[0x18L];
	int& NewOriginalOwnerIDField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventNetUpdateOriginalOwnerNameAndID_Parms.NewOriginalOwnerID"); }
	FString& NewOriginalOwnerNameField() { return *GetNativePointerField<FString*>(this, "PrimalStructure_eventNetUpdateOriginalOwnerNameAndID_Parms.NewOriginalOwnerName"); }
};

