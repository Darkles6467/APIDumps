#pragma once

#include "BaseDeclarations.h"
struct SteamServerConnectFailure_t
{
	char __padding[0x4L];
	EResult& m_eResultField() { return *GetNativePointerField<EResult*>(this, "SteamServerConnectFailure_t.m_eResult"); }
};

