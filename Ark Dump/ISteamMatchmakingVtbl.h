#pragma once

#include "BaseDeclarations.h"
struct ISteamMatchmakingVtbl
{
	char __padding[0x130L];
	FieldArray<_BYTE, 32> gap8Field() { return {this, "ISteamMatchmakingVtbl.gap8"}; }
};

