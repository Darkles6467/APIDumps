#pragma once

#include "BaseDeclarations.h"
struct ISteamUtilsVtbl
{
	char __padding[0xc8L];
	FieldArray<_BYTE, 24> gap8Field() { return {this, "ISteamUtilsVtbl.gap8"}; }
};

