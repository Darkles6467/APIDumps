#pragma once

#include "BaseDeclarations.h"
struct IStereoRenderingVtbl
{
	char __padding[0xb0L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "IStereoRenderingVtbl.gap8"}; }
};

