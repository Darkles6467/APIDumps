#pragma once

#include "BaseDeclarations.h"
struct PrimalGameData_eventLoadedWorld_Parms
{
	char __padding[0x8L];
	UWorld * TheWorldField() { return GetNativePointerField<UWorld *>(this, "PrimalGameData_eventLoadedWorld_Parms.TheWorld"); }
};

