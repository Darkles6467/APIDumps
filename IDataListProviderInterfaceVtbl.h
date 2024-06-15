#pragma once

#include "BaseDeclarations.h"
struct IDataListProviderInterfaceVtbl
{
	char __padding[0xb0L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "IDataListProviderInterfaceVtbl.gap8"}; }
};

