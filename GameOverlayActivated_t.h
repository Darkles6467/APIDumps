#pragma once

#include "BaseDeclarations.h"
struct GameOverlayActivated_t
{
	char __padding[0x1L];
	char& m_bActiveField() { return *GetNativePointerField<char*>(this, "GameOverlayActivated_t.m_bActive"); }
};

