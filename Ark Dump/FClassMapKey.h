#pragma once

#include "BaseDeclarations.h"
struct FClassMapKey
{
	char __padding[0x8L];

	// Functions

	bool IsValid() { return NativeCall<bool>(this, "FClassMapKey.IsValid"); }
};

