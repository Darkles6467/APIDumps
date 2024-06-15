#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoAIController_eventCalculateAndSetWonderingAIStateEvent_Parms
{
	char __padding[0x2L];
	bool& StateChangedField() { return *GetNativePointerField<bool*>(this, "PrimalDinoAIController_eventCalculateAndSetWonderingAIStateEvent_Parms.StateChanged"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoAIController_eventCalculateAndSetWonderingAIStateEvent_Parms.ReturnValue"); }
};

