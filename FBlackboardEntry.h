#pragma once

#include "BaseDeclarations.h"
struct FBlackboardEntry
{
	char __padding[0x10L];
	FName& EntryNameField() { return *GetNativePointerField<FName*>(this, "FBlackboardEntry.EntryName"); }

	// Functions

};

