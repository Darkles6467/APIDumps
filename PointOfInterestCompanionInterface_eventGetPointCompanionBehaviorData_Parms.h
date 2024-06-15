#pragma once

#include "BaseDeclarations.h"
struct PointOfInterestCompanionInterface_eventGetPointCompanionBehaviorData_Parms
{
	char __padding[0x2b0L];
	FPointOfInterestCompanionBehavior& ReturnValueField() { return *GetNativePointerField<FPointOfInterestCompanionBehavior*>(this, "PointOfInterestCompanionInterface_eventGetPointCompanionBehaviorData_Parms.ReturnValue"); }
};

