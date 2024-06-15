#pragma once

#include "BaseDeclarations.h"
struct IPointOfInterestCompanionInterface
{
	char __padding[0x8L];

	// Functions

	static FPointOfInterestCompanionBehavior * Execute_GetPointCompanionBehaviorData(FPointOfInterestCompanionBehavior * result, UObject * O) { return NativeCall<FPointOfInterestCompanionBehavior *, FPointOfInterestCompanionBehavior *, UObject *>(nullptr, "IPointOfInterestCompanionInterface.Execute_GetPointCompanionBehaviorData", result, O); }
};

