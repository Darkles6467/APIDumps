#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPCanTakePassenger_Parms
{
	char __padding[0x10L];
	int& PassengerSeatIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBPCanTakePassenger_Parms.PassengerSeatIndex"); }
	bool& bForcePassengerField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPCanTakePassenger_Parms.bForcePassenger"); }
	bool& bAllowFlyersAndWaterDinosField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPCanTakePassenger_Parms.bAllowFlyersAndWaterDinos"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPCanTakePassenger_Parms.ReturnValue"); }

	// Functions

};

