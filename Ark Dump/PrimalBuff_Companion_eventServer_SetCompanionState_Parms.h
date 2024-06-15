#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventServer_SetCompanionState_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum ECompanionState::Type>& NewStateField() { return *GetNativePointerField<TEnumAsByte<enum ECompanionState::Type>*>(this, "PrimalBuff_Companion_eventServer_SetCompanionState_Parms.NewState"); }
};

