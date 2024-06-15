#pragma once

#include "BaseDeclarations.h"
struct PointOfInterestActor_eventIsPointOfInterestValid_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PointOfInterestActor_eventIsPointOfInterestValid_Parms.ReturnValue"); }
};

