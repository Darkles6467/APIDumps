#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureUnderwaterBase_eventUpdateCurrentPinCodes_Parms
{
	char __padding[0x10L];
	TArray<unsigned int>& NewPinCodesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "PrimalStructureUnderwaterBase_eventUpdateCurrentPinCodes_Parms.NewPinCodes"); }
};

