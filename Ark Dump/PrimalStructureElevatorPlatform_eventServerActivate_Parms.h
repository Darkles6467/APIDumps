#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureElevatorPlatform_eventServerActivate_Parms
{
	char __padding[0x10L];
	bool& bForceDirectionField() { return *GetNativePointerField<bool*>(this, "PrimalStructureElevatorPlatform_eventServerActivate_Parms.bForceDirection"); }
	TEnumAsByte<enum EPrimalStructureElevatorState>& DirField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalStructureElevatorState>*>(this, "PrimalStructureElevatorPlatform_eventServerActivate_Parms.Dir"); }
};

