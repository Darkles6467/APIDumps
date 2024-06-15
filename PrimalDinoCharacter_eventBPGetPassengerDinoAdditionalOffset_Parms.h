#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetPassengerDinoAdditionalOffset_Parms
{
	char __padding[0x18L];
	APrimalDinoCharacter * PassengerField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventBPGetPassengerDinoAdditionalOffset_Parms.Passenger"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPGetPassengerDinoAdditionalOffset_Parms.ReturnValue"); }
};

