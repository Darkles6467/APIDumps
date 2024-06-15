#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPHandleUseButtonPress_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * RiderControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalDinoCharacter_eventBPHandleUseButtonPress_Parms.RiderController"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPHandleUseButtonPress_Parms.ReturnValue"); }
};

