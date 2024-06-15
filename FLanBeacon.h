#pragma once

#include "BaseDeclarations.h"
struct FLanBeacon
{
	char __padding[0x38L];

	// Functions

	bool Init(int Port) { return NativeCall<bool, int>(this, "FLanBeacon.Init", Port); }
};

