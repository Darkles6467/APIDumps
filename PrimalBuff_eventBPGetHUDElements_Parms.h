#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPGetHUDElements_Parms
{
	char __padding[0x18L];
	TArray<FHUDElement>& OutElementsField() { return *GetNativePointerField<TArray<FHUDElement>*>(this, "PrimalBuff_eventBPGetHUDElements_Parms.OutElements"); }
};

