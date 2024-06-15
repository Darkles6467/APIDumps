#pragma once

#include "BaseDeclarations.h"
struct IOnlineMessageVtbl
{
	char __padding[0xa8L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "IOnlineMessageVtbl.gap8"}; }
};

