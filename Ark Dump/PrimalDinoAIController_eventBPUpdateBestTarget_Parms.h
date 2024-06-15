#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoAIController_eventBPUpdateBestTarget_Parms
{
	char __padding[0x18L];
	bool& dontSetInField() { return *GetNativePointerField<bool*>(this, "PrimalDinoAIController_eventBPUpdateBestTarget_Parms.dontSetIn"); }
	bool& dontSetOutField() { return *GetNativePointerField<bool*>(this, "PrimalDinoAIController_eventBPUpdateBestTarget_Parms.dontSetOut"); }

	// Functions

};

