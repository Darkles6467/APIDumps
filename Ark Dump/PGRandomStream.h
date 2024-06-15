#pragma once

#include "BaseDeclarations.h"
struct PGRandomStream
{
	char __padding[0x4L];
	unsigned int& SeedField() { return *GetNativePointerField<unsigned int*>(this, "PGRandomStream.Seed"); }
};

