#pragma once

#include "BaseDeclarations.h"
struct FAnimSetBakeAndPruneStatus
{
	char __padding[0x18L];
	FString& AnimSetNameField() { return *GetNativePointerField<FString*>(this, "FAnimSetBakeAndPruneStatus.AnimSetName"); }

	// Functions

};

