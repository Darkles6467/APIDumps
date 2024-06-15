#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveDrawInterfaceVtbl
{
	char __padding[0x58L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "FPrimitiveDrawInterfaceVtbl.gap8"}; }
};

