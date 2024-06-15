#pragma once

#include "BaseDeclarations.h"
struct FPerceptionChannelFilter
{
	char __padding[0x4L];
	unsigned int& AcceptedChannelsMaskField() { return *GetNativePointerField<unsigned int*>(this, "FPerceptionChannelFilter.AcceptedChannelsMask"); }
};

