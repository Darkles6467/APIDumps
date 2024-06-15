#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventInterceptMountedOnPlayerEmoteAnim_Parms
{
	char __padding[0x10L];
	UAnimMontage * EmoteAnimField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalDinoCharacter_eventInterceptMountedOnPlayerEmoteAnim_Parms.EmoteAnim"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventInterceptMountedOnPlayerEmoteAnim_Parms.ReturnValue"); }
};

