#pragma once

#include "BaseDeclarations.h"
struct HazardTrigger_eventClientActivation_Parms
{
	char __padding[0x1L];
	bool& bActivateField() { return *GetNativePointerField<bool*>(this, "HazardTrigger_eventClientActivation_Parms.bActivate"); }
};

