#pragma once

#include "BaseDeclarations.h"
struct IOnlinePartyVtbl
{
	char __padding[0x48L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "IOnlinePartyVtbl.gap8"}; }
};

