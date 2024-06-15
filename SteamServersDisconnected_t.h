#pragma once

#include "BaseDeclarations.h"
struct SteamServersDisconnected_t
{
	char __padding[0x4L];
	EResult& m_eResultField() { return *GetNativePointerField<EResult*>(this, "SteamServersDisconnected_t.m_eResult"); }
};

