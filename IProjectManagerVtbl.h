#pragma once

#include "BaseDeclarations.h"
struct IProjectManagerVtbl
{
	char __padding[0x90L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "IProjectManagerVtbl.gap8"}; }
};

