#pragma once

#include "BaseDeclarations.h"
struct FMaterialCompilerVtbl
{
	char __padding[0x3a0L];
	FieldArray<_BYTE, 112> gap8Field() { return {this, "FMaterialCompilerVtbl.gap8"}; }
};

