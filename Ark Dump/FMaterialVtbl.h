#pragma once

#include "BaseDeclarations.h"
struct FMaterialVtbl
{
	char __padding[0x278L];
	FieldArray<_BYTE, 72> gap8Field() { return {this, "FMaterialVtbl.gap8"}; }
};

