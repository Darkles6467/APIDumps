#pragma once

#include "BaseDeclarations.h"
struct FGenericApplicationMessageHandlerVtbl
{
	char __padding[0x130L];
	FieldArray<_BYTE, 32> gap8Field() { return {this, "FGenericApplicationMessageHandlerVtbl.gap8"}; }
};

