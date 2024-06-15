#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPEquippedItemOnXPEarning_Parms
{
	char __padding[0x10L];
	float& howMuchXPField() { return *GetNativePointerField<float*>(this, "PrimalItem_eventBPEquippedItemOnXPEarning_Parms.howMuchXP"); }
	TEnumAsByte<enum EXPType::Type>& TheXPTypeField() { return *GetNativePointerField<TEnumAsByte<enum EXPType::Type>*>(this, "PrimalItem_eventBPEquippedItemOnXPEarning_Parms.TheXPType"); }
};

