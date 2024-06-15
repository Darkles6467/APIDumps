#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventOnPlayerPlayAnimation_Parms
{
	char __padding[0x18L];
	UAnimMontage * PlayedAnimField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalBuff_Companion_eventOnPlayerPlayAnimation_Parms.PlayedAnim"); }
	float& AnimDurationField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Companion_eventOnPlayerPlayAnimation_Parms.AnimDuration"); }
	FName& StartSectionNameField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_Companion_eventOnPlayerPlayAnimation_Parms.StartSectionName"); }
};

