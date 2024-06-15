#pragma once

#include "BaseDeclarations.h"
struct FMemoryTrap
{
	char __padding[0x1fffL];
	FieldArray<char, 8191> MemoryTrapField() { return {this, "FMemoryTrap.MemoryTrap"}; }
};

