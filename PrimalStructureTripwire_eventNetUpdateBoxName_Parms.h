#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureTripwire_eventNetUpdateBoxName_Parms
{
	char __padding[0x10L];
	FString& NewNameField() { return *GetNativePointerField<FString*>(this, "PrimalStructureTripwire_eventNetUpdateBoxName_Parms.NewName"); }
};

