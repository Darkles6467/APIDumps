#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventAllowStructureActivation_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "DayCycleManager_eventAllowStructureActivation_Parms.ReturnValue"); }
};

