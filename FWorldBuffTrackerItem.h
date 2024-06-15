#pragma once

#include "BaseDeclarations.h"
struct FWorldBuffTrackerItem
{
	char __padding[0x20L];
	FName& WorldBuffIdentifierField() { return *GetNativePointerField<FName*>(this, "FWorldBuffTrackerItem.WorldBuffIdentifier"); }
	long double& WorldBuffStartTimeField() { return *GetNativePointerField<long double*>(this, "FWorldBuffTrackerItem.WorldBuffStartTime"); }
	int& StackCountField() { return *GetNativePointerField<int*>(this, "FWorldBuffTrackerItem.StackCount"); }
	UPrimalWorldBuffCustomImplement * CustomImplementField() { return GetNativePointerField<UPrimalWorldBuffCustomImplement *>(this, "FWorldBuffTrackerItem.CustomImplement"); }

	// Functions

};

