#pragma once

#include "BaseDeclarations.h"
struct PointOfInterestInterface_eventGetPointOfInterestData_Parms
{
	char __padding[0x140L];
	FPointOfInterestData& ReturnValueField() { return *GetNativePointerField<FPointOfInterestData*>(this, "PointOfInterestInterface_eventGetPointOfInterestData_Parms.ReturnValue"); }
};

