#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventServer_SuggestTetherLength_Parms
{
	char __padding[0x4L];
	float& NewTetherLengthField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventServer_SuggestTetherLength_Parms.NewTetherLength"); }
};

