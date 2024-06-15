#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOnMassTeleportEvent_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum EMassTeleportState::Type>& EventStateField() { return *GetNativePointerField<TEnumAsByte<enum EMassTeleportState::Type>*>(this, "PrimalCharacter_eventBPOnMassTeleportEvent_Parms.EventState"); }
};

