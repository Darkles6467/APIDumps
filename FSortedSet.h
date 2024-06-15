#pragma once

#include "BaseDeclarations.h"
struct FSortedSet
{
	char __padding[0x18L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FSortedSet.Name"); }
	int& SizeField() { return *GetNativePointerField<int*>(this, "FSortedSet.Size"); }
};

