#pragma once

#include "BaseDeclarations.h"
struct FLeaf
{
	char __padding[0x4L];
	int& iZoneField() { return *GetNativePointerField<int*>(this, "FLeaf.iZone"); }
};

