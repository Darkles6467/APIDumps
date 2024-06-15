#pragma once

#include "BaseDeclarations.h"
struct FNetConnectionSettings
{
	char __padding[0x4L];
	int& PacketLagField() { return *GetNativePointerField<int*>(this, "FNetConnectionSettings.PacketLag"); }
};

