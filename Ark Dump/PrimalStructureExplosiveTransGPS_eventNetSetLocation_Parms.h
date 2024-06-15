#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureExplosiveTransGPS_eventNetSetLocation_Parms
{
	char __padding[0xcL];
	FVector& NewLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalStructureExplosiveTransGPS_eventNetSetLocation_Parms.NewLocation"); }
};

