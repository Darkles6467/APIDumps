#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoAIController_eventBPForceTargetDinoRider_Parms
{
	char __padding[0x10L];
	AShooterCharacter * playerTargetField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalDinoAIController_eventBPForceTargetDinoRider_Parms.playerTarget"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoAIController_eventBPForceTargetDinoRider_Parms.ReturnValue"); }
};

