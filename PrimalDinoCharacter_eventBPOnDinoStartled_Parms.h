#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOnDinoStartled_Parms
{
	char __padding[0x10L];
	UAnimMontage * StartledAnimPlayedField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalDinoCharacter_eventBPOnDinoStartled_Parms.StartledAnimPlayed"); }
	bool& bFromAIControllerField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPOnDinoStartled_Parms.bFromAIController"); }
};

