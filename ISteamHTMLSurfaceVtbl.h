#pragma once

#include "BaseDeclarations.h"
struct ISteamHTMLSurfaceVtbl
{
	char __padding[0x118L];
	FieldArray<_BYTE, 32> gap8Field() { return {this, "ISteamHTMLSurfaceVtbl.gap8"}; }
};

