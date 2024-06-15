#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPAllowTimeout_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPAllowTimeout_Parms.ReturnValue"); }
};

