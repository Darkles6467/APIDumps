#pragma once

#include "BaseDeclarations.h"
struct IOnlineTitleFileVtbl
{
	char __padding[0x68L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "IOnlineTitleFileVtbl.gap8"}; }
};

