#pragma once

#include "BaseDeclarations.h"
struct IOnlineExternalUIVtbl
{
	char __padding[0x58L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "IOnlineExternalUIVtbl.gap8"}; }
};

