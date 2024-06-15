#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoAIController_eventBPShouldNotifyNeighbor_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * neighborField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoAIController_eventBPShouldNotifyNeighbor_Parms.neighbor"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoAIController_eventBPShouldNotifyNeighbor_Parms.ReturnValue"); }
};

