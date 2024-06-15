#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct MusicPlayerWantsLooped_t : SteamCallback_t
{
	char __padding[0x1L];
	bool& m_bLoopedField() { return *GetNativePointerField<bool*>(this, "MusicPlayerWantsLooped_t.m_bLooped"); }
};

