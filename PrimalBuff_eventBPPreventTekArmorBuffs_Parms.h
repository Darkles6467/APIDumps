#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPPreventTekArmorBuffs_Parms
{
	char __padding[0x10L];
	TArray<FName>& ReturnValueField() { return *GetNativePointerField<TArray<FName>*>(this, "PrimalBuff_eventBPPreventTekArmorBuffs_Parms.ReturnValue"); }
};

