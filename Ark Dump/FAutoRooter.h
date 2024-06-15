#pragma once

#include "BaseDeclarations.h"
struct FAutoRooter
{
	char __padding[0x10L];

	// Functions

	void Pop() { NativeCall<void>(this, "FAutoRooter.Pop"); }
};

