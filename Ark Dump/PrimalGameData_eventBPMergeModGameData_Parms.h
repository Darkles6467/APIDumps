#pragma once

#include "BaseDeclarations.h"
struct PrimalGameData_eventBPMergeModGameData_Parms
{
	char __padding[0x8L];
	UPrimalGameData * AnotherGameDataField() { return GetNativePointerField<UPrimalGameData *>(this, "PrimalGameData_eventBPMergeModGameData_Parms.AnotherGameData"); }
};

