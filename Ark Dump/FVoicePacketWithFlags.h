#pragma once

#include "BaseDeclarations.h"
struct FVoicePacketWithFlags
{
	char __padding[0x18L];
	char& PlaybackFlagsField() { return *GetNativePointerField<char*>(this, "FVoicePacketWithFlags.PlaybackFlags"); }
};

