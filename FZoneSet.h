#pragma once

#include "BaseDeclarations.h"
struct FZoneSet
{
	char __padding[0x8L];
	unsigned __int64& MaskBitsField() { return *GetNativePointerField<unsigned __int64*>(this, "FZoneSet.MaskBits"); }
};

