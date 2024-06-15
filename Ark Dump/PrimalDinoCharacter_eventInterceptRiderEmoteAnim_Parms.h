#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventInterceptRiderEmoteAnim_Parms
{
	char __padding[0x10L];
	UAnimMontage * EmoteAnimField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalDinoCharacter_eventInterceptRiderEmoteAnim_Parms.EmoteAnim"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventInterceptRiderEmoteAnim_Parms.ReturnValue"); }
};

