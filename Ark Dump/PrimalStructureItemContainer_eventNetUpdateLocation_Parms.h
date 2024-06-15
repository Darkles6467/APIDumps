#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventNetUpdateLocation_Parms
{
	char __padding[0xcL];
	FVector& NewLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalStructureItemContainer_eventNetUpdateLocation_Parms.NewLocation"); }
};

