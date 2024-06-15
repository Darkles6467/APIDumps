#pragma once

#include "BaseDeclarations.h"
struct MissionTrigger_eventIsPointOfInterestValid_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionTrigger_eventIsPointOfInterestValid_Parms.ReturnValue"); }
};

