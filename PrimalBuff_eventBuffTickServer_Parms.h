#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBuffTickServer_Parms
{
	char __padding[0x4L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBuffTickServer_Parms.DeltaTime"); }
};

