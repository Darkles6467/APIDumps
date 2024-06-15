#pragma once

#include "BaseDeclarations.h"
struct ITargetDeviceVtbl
{
	char __padding[0xb0L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "ITargetDeviceVtbl.gap8"}; }
};

