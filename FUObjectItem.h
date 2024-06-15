#pragma once

#include "BaseDeclarations.h"
struct FUObjectItem
{
	char __padding[0x10L];
	int& SerialNumberField() { return *GetNativePointerField<int*>(this, "FUObjectItem.SerialNumber"); }
};

