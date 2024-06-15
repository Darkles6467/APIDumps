#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventBPCanBeActivatedByPlayer_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalStructureItemContainer_eventBPCanBeActivatedByPlayer_Parms.PC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructureItemContainer_eventBPCanBeActivatedByPlayer_Parms.ReturnValue"); }
};

