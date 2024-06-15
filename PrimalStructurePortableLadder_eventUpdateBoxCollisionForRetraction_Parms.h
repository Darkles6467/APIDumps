#pragma once

#include "BaseDeclarations.h"
struct PrimalStructurePortableLadder_eventUpdateBoxCollisionForRetraction_Parms
{
	char __padding[0x1L];
	bool& bRetractedField() { return *GetNativePointerField<bool*>(this, "PrimalStructurePortableLadder_eventUpdateBoxCollisionForRetraction_Parms.bRetracted"); }
};

