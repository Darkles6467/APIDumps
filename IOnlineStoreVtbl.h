#pragma once

#include "BaseDeclarations.h"
struct IOnlineStoreVtbl
{
	char __padding[0x78L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "IOnlineStoreVtbl.gap8"}; }
};

