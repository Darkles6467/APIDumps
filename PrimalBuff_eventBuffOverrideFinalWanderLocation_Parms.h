#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBuffOverrideFinalWanderLocation_Parms
{
	char __padding[0x10L];
	FVector& outVecField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBuffOverrideFinalWanderLocation_Parms.outVec"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBuffOverrideFinalWanderLocation_Parms.ReturnValue"); }
};

