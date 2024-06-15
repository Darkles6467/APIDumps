#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPNotifyToggleHUD_Parms
{
	char __padding[0x1L];
	bool& bHUDHiddenField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPNotifyToggleHUD_Parms.bHUDHidden"); }
};

