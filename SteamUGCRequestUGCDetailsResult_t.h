#pragma once

#include "BaseDeclarations.h"
struct SteamUGCRequestUGCDetailsResult_t
{
	char __padding[0x2638L];
	SteamUGCDetails_t& m_detailsField() { return *GetNativePointerField<SteamUGCDetails_t*>(this, "SteamUGCRequestUGCDetailsResult_t.m_details"); }
	bool& m_bCachedDataField() { return *GetNativePointerField<bool*>(this, "SteamUGCRequestUGCDetailsResult_t.m_bCachedData"); }
};

