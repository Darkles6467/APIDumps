#pragma once

#include "BaseDeclarations.h"
struct IOnlineUserCloudVtbl
{
	char __padding[0xb8L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "IOnlineUserCloudVtbl.gap8"}; }
};

