#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPAllowClaiming_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * forPlayerField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalDinoCharacter_eventBPAllowClaiming_Parms.forPlayer"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPAllowClaiming_Parms.ReturnValue"); }
};

