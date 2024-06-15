#pragma once

#include "BaseDeclarations.h"
struct LobbyMatchList_t
{
	char __padding[0x4L];
	unsigned int& m_nLobbiesMatchingField() { return *GetNativePointerField<unsigned int*>(this, "LobbyMatchList_t.m_nLobbiesMatching"); }
};

