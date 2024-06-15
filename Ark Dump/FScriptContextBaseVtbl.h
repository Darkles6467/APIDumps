#pragma once

#include "BaseDeclarations.h"
struct FScriptContextBaseVtbl
{
	char __padding[0xa0L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "FScriptContextBaseVtbl.gap8"}; }
};

