#pragma once

#include "BaseDeclarations.h"
struct SteamInventoryResultReady_t
{
	char __padding[0x8L];
	int& m_handleField() { return *GetNativePointerField<int*>(this, "SteamInventoryResultReady_t.m_handle"); }
	EResult& m_resultField() { return *GetNativePointerField<EResult*>(this, "SteamInventoryResultReady_t.m_result"); }
};

