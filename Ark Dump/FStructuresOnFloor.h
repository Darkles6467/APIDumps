#pragma once

#include "BaseDeclarations.h"
struct FStructuresOnFloor
{
	char __padding[0x18L];

	// Functions

	FStructuresOnFloor * operator=(const FStructuresOnFloor * __that) { return NativeCall<FStructuresOnFloor *, const FStructuresOnFloor *>(this, "FStructuresOnFloor.operator=", __that); }
};

