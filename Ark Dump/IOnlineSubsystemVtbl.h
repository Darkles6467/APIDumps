#pragma once

#include "BaseDeclarations.h"
struct IOnlineSubsystemVtbl
{
	char __padding[0x308L];
	FieldArray<_BYTE, 96> gap8Field() { return {this, "IOnlineSubsystemVtbl.gap8"}; }
};

