#pragma once

#include "BaseDeclarations.h"
struct ISessionInstanceInfoVtbl
{
	char __padding[0x90L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "ISessionInstanceInfoVtbl.gap8"}; }
};

