#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoAIController_eventBPShouldNotifyAnyNeighbor_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * neighborField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoAIController_eventBPShouldNotifyAnyNeighbor_Parms.neighbor"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoAIController_eventBPShouldNotifyAnyNeighbor_Parms.ReturnValue"); }
};

