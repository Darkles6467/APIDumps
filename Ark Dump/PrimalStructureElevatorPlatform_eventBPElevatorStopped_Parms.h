#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureElevatorPlatform_eventBPElevatorStopped_Parms
{
	char __padding[0x2L];
	bool& bSwitchedDirectionField() { return *GetNativePointerField<bool*>(this, "PrimalStructureElevatorPlatform_eventBPElevatorStopped_Parms.bSwitchedDirection"); }
	TEnumAsByte<enum EPrimalStructureElevatorState>& NewDirectionField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalStructureElevatorState>*>(this, "PrimalStructureElevatorPlatform_eventBPElevatorStopped_Parms.NewDirection"); }
};

