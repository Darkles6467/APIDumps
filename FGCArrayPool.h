#pragma once

#include "BaseDeclarations.h"
struct FGCArrayPool
{
	char __padding[0x8L];

	// Functions

	void Cleanup() { NativeCall<void>(this, "FGCArrayPool.Cleanup"); }
};

