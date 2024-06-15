#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct MusicPlayerSelectsQueueEntry_t : SteamCallback_t
{
	char __padding[0x4L];
	int& nIDField() { return *GetNativePointerField<int*>(this, "MusicPlayerSelectsQueueEntry_t.nID"); }
};

