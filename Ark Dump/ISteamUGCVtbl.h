#pragma once

#include "BaseDeclarations.h"
struct ISteamUGCVtbl
{
	char __padding[0xf8L];
	FieldArray<_BYTE, 24> gap8Field() { return {this, "ISteamUGCVtbl.gap8"}; }
};

