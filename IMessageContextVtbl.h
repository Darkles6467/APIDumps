#pragma once

#include "BaseDeclarations.h"
struct IMessageContextVtbl
{
	char __padding[0x88L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "IMessageContextVtbl.gap8"}; }
};

