#pragma once

#include "BaseDeclarations.h"
struct IWidgetReflectorVtbl
{
	char __padding[0x48L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "IWidgetReflectorVtbl.gap8"}; }
};

