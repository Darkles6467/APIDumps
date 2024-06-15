#pragma once

#include "BaseDeclarations.h"
struct PointOfInterestInterface_eventSetPointTagUniqueState_Parms
{
	char __padding[0x1L];
	bool& bNewUniqueStateField() { return *GetNativePointerField<bool*>(this, "PointOfInterestInterface_eventSetPointTagUniqueState_Parms.bNewUniqueState"); }
};

