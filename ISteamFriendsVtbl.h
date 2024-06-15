#pragma once

#include "BaseDeclarations.h"
struct ISteamFriendsVtbl
{
	char __padding[0x230L];
	FieldArray<_BYTE, 64> gap8Field() { return {this, "ISteamFriendsVtbl.gap8"}; }
};

