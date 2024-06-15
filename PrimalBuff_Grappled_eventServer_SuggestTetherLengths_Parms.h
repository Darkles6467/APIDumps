#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventServer_SuggestTetherLengths_Parms
{
	char __padding[0x10L];
	TArray<float>& NewTetherLengthsField() { return *GetNativePointerField<TArray<float>*>(this, "PrimalBuff_Grappled_eventServer_SuggestTetherLengths_Parms.NewTetherLengths"); }
};

