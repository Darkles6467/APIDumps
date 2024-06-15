#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPOnOwnerMassTeleportEvent_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum EMassTeleportState::Type>& EventStateField() { return *GetNativePointerField<TEnumAsByte<enum EMassTeleportState::Type>*>(this, "PrimalBuff_eventBPOnOwnerMassTeleportEvent_Parms.EventState"); }
};

