#pragma once

#include "BaseDeclarations.h"
struct IAssetRegistryVtbl
{
	char __padding[0x140L];
	FieldArray<_BYTE, 32> gap8Field() { return {this, "IAssetRegistryVtbl.gap8"}; }
};

