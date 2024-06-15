#pragma once

#include "BaseDeclarations.h"
struct IOnlineFriendsVtbl
{
	char __padding[0xf8L];
	FieldArray<_BYTE, 24> gap8Field() { return {this, "IOnlineFriendsVtbl.gap8"}; }
};

