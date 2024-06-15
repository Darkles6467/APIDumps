#pragma once

#include "BaseDeclarations.h"
struct FMissionWorldBuffData
{
	char __padding[0xcL];
	FName& WorldBuffIdentifierField() { return *GetNativePointerField<FName*>(this, "FMissionWorldBuffData.WorldBuffIdentifier"); }
	int& StacksToGiveField() { return *GetNativePointerField<int*>(this, "FMissionWorldBuffData.StacksToGive"); }

	// Functions

};

