#pragma once

#include "BaseDeclarations.h"
struct GSClientApprove_t
{
	char __padding[0x10L];
	CSteamID& m_SteamIDField() { return *GetNativePointerField<CSteamID*>(this, "GSClientApprove_t.m_SteamID"); }
	CSteamID& m_OwnerSteamIDField() { return *GetNativePointerField<CSteamID*>(this, "GSClientApprove_t.m_OwnerSteamID"); }
};

