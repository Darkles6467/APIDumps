#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct MusicPlayerWantsShuffled_t : SteamCallback_t
{
	char __padding[0x1L];
	bool& m_bShuffledField() { return *GetNativePointerField<bool*>(this, "MusicPlayerWantsShuffled_t.m_bShuffled"); }
};

