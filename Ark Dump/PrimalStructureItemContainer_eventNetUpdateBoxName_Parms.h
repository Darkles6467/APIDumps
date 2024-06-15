#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventNetUpdateBoxName_Parms
{
	char __padding[0x10L];
	FString& NewNameField() { return *GetNativePointerField<FString*>(this, "PrimalStructureItemContainer_eventNetUpdateBoxName_Parms.NewName"); }
};

