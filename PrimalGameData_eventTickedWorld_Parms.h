#pragma once

#include "BaseDeclarations.h"
struct PrimalGameData_eventTickedWorld_Parms
{
	char __padding[0x10L];
	UWorld * TheWorldField() { return GetNativePointerField<UWorld *>(this, "PrimalGameData_eventTickedWorld_Parms.TheWorld"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalGameData_eventTickedWorld_Parms.DeltaTime"); }
};

