#pragma once

#include "BaseDeclarations.h"
struct MenuAnchor_eventOnIsOpenChanged_Parms
{
	char __padding[0x1L];
	bool& IsOpenField() { return *GetNativePointerField<bool*>(this, "MenuAnchor_eventOnIsOpenChanged_Parms.IsOpen"); }
};

