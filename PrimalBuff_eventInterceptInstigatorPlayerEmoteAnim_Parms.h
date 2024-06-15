#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventInterceptInstigatorPlayerEmoteAnim_Parms
{
	char __padding[0x10L];
	UAnimMontage * EmoteAnimField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalBuff_eventInterceptInstigatorPlayerEmoteAnim_Parms.EmoteAnim"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventInterceptInstigatorPlayerEmoteAnim_Parms.ReturnValue"); }
};

