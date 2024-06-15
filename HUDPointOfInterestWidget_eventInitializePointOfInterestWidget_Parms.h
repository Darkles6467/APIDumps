#pragma once

#include "BaseDeclarations.h"
struct HUDPointOfInterestWidget_eventInitializePointOfInterestWidget_Parms
{
	char __padding[0x140L];
	FPointOfInterestData& FromPointDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "HUDPointOfInterestWidget_eventInitializePointOfInterestWidget_Parms.FromPointData"); }
};

