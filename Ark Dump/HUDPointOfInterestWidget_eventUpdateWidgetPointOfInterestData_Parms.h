#pragma once

#include "BaseDeclarations.h"
struct HUDPointOfInterestWidget_eventUpdateWidgetPointOfInterestData_Parms
{
	char __padding[0x150L];
	FPointOfInterestData& WithPointDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "HUDPointOfInterestWidget_eventUpdateWidgetPointOfInterestData_Parms.WithPointData"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "HUDPointOfInterestWidget_eventUpdateWidgetPointOfInterestData_Parms.ReturnValue"); }

	// Functions

};

