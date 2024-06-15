#pragma once

#include "BaseDeclarations.h"
struct FPointOfInterestData_ForCompanion
{
	char __padding[0x3f0L];
	FPointOfInterestData& PointDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "FPointOfInterestData_ForCompanion.PointData"); }
	FPointOfInterestCompanionBehavior& PointCompanionBehaviorField() { return *GetNativePointerField<FPointOfInterestCompanionBehavior*>(this, "FPointOfInterestData_ForCompanion.PointCompanionBehavior"); }

	// Functions

};

