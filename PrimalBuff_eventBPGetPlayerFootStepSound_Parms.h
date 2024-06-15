#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPGetPlayerFootStepSound_Parms
{
	char __padding[0x8L];
	USoundCue * ReturnValueField() { return GetNativePointerField<USoundCue *>(this, "PrimalBuff_eventBPGetPlayerFootStepSound_Parms.ReturnValue"); }
};

