#pragma once

#include "BaseDeclarations.h"
struct FSoundSourceVtbl
{
	char __padding[0x48L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "FSoundSourceVtbl.gap8"}; }
};

