#pragma once

#include "BaseDeclarations.h"
struct SteamInventoryFullUpdate_t
{
	char __padding[0x4L];
	int& m_handleField() { return *GetNativePointerField<int*>(this, "SteamInventoryFullUpdate_t.m_handle"); }
};

