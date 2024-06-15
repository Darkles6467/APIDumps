#pragma once

#include "BaseDeclarations.h"
struct FKeyHandleMap
{
	char __padding[0x50L];

	// Functions

	bool operator==(const FKeyHandleMap * Other) { return NativeCall<bool, const FKeyHandleMap *>(this, "FKeyHandleMap.operator==", Other); }
	void Empty() { NativeCall<void>(this, "FKeyHandleMap.Empty"); }
};

