#pragma once

#include "BaseDeclarations.h"
struct ISteamAppsVtbl
{
	char __padding[0xc0L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "ISteamAppsVtbl.gap8"}; }
};

