#pragma once

#include "BaseDeclarations.h"
struct FInterpEdInputInterfaceVtbl
{
	char __padding[0x48L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "FInterpEdInputInterfaceVtbl.gap8"}; }
};

