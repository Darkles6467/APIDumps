#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_InterceptMoveForward_Parms
{
	char __padding[0x8L];
	float& axisValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBP_InterceptMoveForward_Parms.axisValue"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBP_InterceptMoveForward_Parms.ReturnValue"); }
};

