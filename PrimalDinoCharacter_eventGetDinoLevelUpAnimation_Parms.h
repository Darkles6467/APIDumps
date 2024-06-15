#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventGetDinoLevelUpAnimation_Parms
{
	char __padding[0x8L];
	UAnimMontage * ReturnValueField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalDinoCharacter_eventGetDinoLevelUpAnimation_Parms.ReturnValue"); }
};

