#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPCanCryo_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalDinoCharacter_eventBPCanCryo_Parms.ForPC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPCanCryo_Parms.ReturnValue"); }
};

