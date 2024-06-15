#pragma once

#include "BaseDeclarations.h"
struct FViewportClientVtbl
{
	char __padding[0x158L];
	FieldArray<_BYTE, 40> gap8Field() { return {this, "FViewportClientVtbl.gap8"}; }
};

