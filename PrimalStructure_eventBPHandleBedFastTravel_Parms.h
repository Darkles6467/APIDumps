#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPHandleBedFastTravel_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalStructure_eventBPHandleBedFastTravel_Parms.ForPC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPHandleBedFastTravel_Parms.ReturnValue"); }
};

