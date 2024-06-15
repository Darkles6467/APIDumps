#pragma once

#include "BaseDeclarations.h"
struct IDataListEntryInterfaceVtbl
{
	char __padding[0x78L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "IDataListEntryInterfaceVtbl.gap8"}; }
};

