#pragma once

#include "BaseDeclarations.h"
struct ISteamRemoteStorageVtbl
{
	char __padding[0x1a0L];
	FieldArray<_BYTE, 48> gap8Field() { return {this, "ISteamRemoteStorageVtbl.gap8"}; }
};

