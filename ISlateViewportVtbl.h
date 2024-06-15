#pragma once

#include "BaseDeclarations.h"
struct ISlateViewportVtbl
{
	char __padding[0xf0L];
	FieldArray<_BYTE, 24> gap8Field() { return {this, "ISlateViewportVtbl.gap8"}; }
};

