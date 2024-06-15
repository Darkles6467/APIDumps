#pragma once

#include "BaseDeclarations.h"
struct UserStatsStored_t
{
	char __padding[0x10L];
	unsigned __int64& m_nGameIDField() { return *GetNativePointerField<unsigned __int64*>(this, "UserStatsStored_t.m_nGameID"); }
	EResult& m_eResultField() { return *GetNativePointerField<EResult*>(this, "UserStatsStored_t.m_eResult"); }
};

