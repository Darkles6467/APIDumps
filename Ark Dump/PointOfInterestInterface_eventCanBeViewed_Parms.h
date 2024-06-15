#pragma once

#include "BaseDeclarations.h"
struct PointOfInterestInterface_eventCanBeViewed_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PointOfInterestInterface_eventCanBeViewed_Parms.ReturnValue"); }
};

