#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBuffTickClient_Parms
{
	char __padding[0x4L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBuffTickClient_Parms.DeltaTime"); }
};

