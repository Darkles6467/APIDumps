#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPPreventNotifySound_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPPreventNotifySound_Parms.ReturnValue"); }
};

