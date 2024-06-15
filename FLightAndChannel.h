#pragma once

#include "BaseDeclarations.h"
struct FLightAndChannel
{
	char __padding[0x10L];
	int& ChannelField() { return *GetNativePointerField<int*>(this, "FLightAndChannel.Channel"); }
};

