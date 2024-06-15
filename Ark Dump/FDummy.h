#pragma once

#include "BaseDeclarations.h"
struct FDummy
{
	char __padding[0x1L];
	char& CountField() { return *GetNativePointerField<char*>(this, "FDummy.Count"); }
};

