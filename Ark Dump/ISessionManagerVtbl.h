#pragma once

#include "BaseDeclarations.h"
struct ISessionManagerVtbl
{
	char __padding[0x78L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "ISessionManagerVtbl.gap8"}; }
};

