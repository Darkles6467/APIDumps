#pragma once

#include "BaseDeclarations.h"
struct FD3DFloat16
{
	char __padding[0x2L];

	// Functions

	float operator float() { return NativeCall<float>(this, "FD3DFloat16.operator float"); }
};

