#pragma once

#include "BaseDeclarations.h"
struct FStatNameBuffer
{
	char __padding[0x800L];
	FieldArray<char, 2048> StatNameField() { return {this, "FStatNameBuffer.StatName"}; }
};

