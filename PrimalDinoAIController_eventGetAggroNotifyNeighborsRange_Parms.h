#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoAIController_eventGetAggroNotifyNeighborsRange_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoAIController_eventGetAggroNotifyNeighborsRange_Parms.ReturnValue"); }
};

