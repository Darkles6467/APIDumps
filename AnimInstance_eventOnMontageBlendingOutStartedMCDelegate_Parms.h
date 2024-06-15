#pragma once

#include "BaseDeclarations.h"
struct AnimInstance_eventOnMontageBlendingOutStartedMCDelegate_Parms
{
	char __padding[0x10L];
	UAnimMontage * MontageField() { return GetNativePointerField<UAnimMontage *>(this, "AnimInstance_eventOnMontageBlendingOutStartedMCDelegate_Parms.Montage"); }
	bool& bInterruptedField() { return *GetNativePointerField<bool*>(this, "AnimInstance_eventOnMontageBlendingOutStartedMCDelegate_Parms.bInterrupted"); }
};

