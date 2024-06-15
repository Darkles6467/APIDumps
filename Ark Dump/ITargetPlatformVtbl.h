#pragma once

#include "BaseDeclarations.h"
struct ITargetPlatformVtbl
{
	char __padding[0x140L];
	FieldArray<_BYTE, 32> gap8Field() { return {this, "ITargetPlatformVtbl.gap8"}; }
};

