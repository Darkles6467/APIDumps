#pragma once

#include "BaseDeclarations.h"
struct ISteamGameServerVtbl
{
	char __padding[0x160L];
	FieldArray<_BYTE, 40> gap8Field() { return {this, "ISteamGameServerVtbl.gap8"}; }
};

