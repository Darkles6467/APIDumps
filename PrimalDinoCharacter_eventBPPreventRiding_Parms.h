#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPPreventRiding_Parms
{
	char __padding[0x10L];
	AShooterCharacter * byPawnField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalDinoCharacter_eventBPPreventRiding_Parms.byPawn"); }
	bool& bDontCheckDistanceField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPPreventRiding_Parms.bDontCheckDistance"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPPreventRiding_Parms.ReturnValue"); }

	// Functions

};

