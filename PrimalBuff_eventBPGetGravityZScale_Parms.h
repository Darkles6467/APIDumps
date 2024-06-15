#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPGetGravityZScale_Parms
{
	char __padding[0x8L];
	float& CurrentScaleField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPGetGravityZScale_Parms.CurrentScale"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPGetGravityZScale_Parms.ReturnValue"); }
};

