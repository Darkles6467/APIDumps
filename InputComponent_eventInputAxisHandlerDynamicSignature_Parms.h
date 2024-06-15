#pragma once

#include "BaseDeclarations.h"
struct InputComponent_eventInputAxisHandlerDynamicSignature_Parms
{
	char __padding[0x4L];
	float& AxisValueField() { return *GetNativePointerField<float*>(this, "InputComponent_eventInputAxisHandlerDynamicSignature_Parms.AxisValue"); }
};

