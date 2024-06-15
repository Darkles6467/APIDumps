#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPOverrideIsNetRelevantFor_Parms
{
	char __padding[0x20L];
	FVector& SrcLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPOverrideIsNetRelevantFor_Parms.SrcLocation"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPOverrideIsNetRelevantFor_Parms.ReturnValue"); }
};

