#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct MusicPlayerWantsPlayingRepeatStatus_t : SteamCallback_t
{
	char __padding[0x4L];
	int& m_nPlayingRepeatStatusField() { return *GetNativePointerField<int*>(this, "MusicPlayerWantsPlayingRepeatStatus_t.m_nPlayingRepeatStatus"); }
};

