#pragma once

#include "BaseDeclarations.h"
struct ISteamNetworkingVtbl
{
	char __padding[0xb0L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "ISteamNetworkingVtbl.gap8"}; }
};

