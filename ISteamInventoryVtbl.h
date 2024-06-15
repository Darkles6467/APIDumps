#pragma once

#include "BaseDeclarations.h"
struct ISteamInventoryVtbl
{
	char __padding[0xb0L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "ISteamInventoryVtbl.gap8"}; }
};

