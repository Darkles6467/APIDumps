#pragma once

#include "BaseDeclarations.h"
struct IPlatformFileVtbl
{
	char __padding[0xf8L];
	FieldArray<_BYTE, 24> gap8Field() { return {this, "IPlatformFileVtbl.gap8"}; }
};

