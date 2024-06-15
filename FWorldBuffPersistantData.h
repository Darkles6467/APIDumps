#pragma once

#include "BaseDeclarations.h"
struct FWorldBuffPersistantData
{
	char __padding[0x18L];
	FName& WorldBuffIdentifierField() { return *GetNativePointerField<FName*>(this, "FWorldBuffPersistantData.WorldBuffIdentifier"); }
	int& StackCountField() { return *GetNativePointerField<int*>(this, "FWorldBuffPersistantData.StackCount"); }
	long double& WorldBuffStartTimeField() { return *GetNativePointerField<long double*>(this, "FWorldBuffPersistantData.WorldBuffStartTime"); }

	// Functions

};

