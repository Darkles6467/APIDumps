#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct SteamAppInstalled_t : SteamCallback_t
{
	char __padding[0x4L];
	unsigned int& m_nAppIDField() { return *GetNativePointerField<unsigned int*>(this, "SteamAppInstalled_t.m_nAppID"); }
};

