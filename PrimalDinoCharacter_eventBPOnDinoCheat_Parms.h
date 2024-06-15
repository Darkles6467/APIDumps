#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOnDinoCheat_Parms
{
	char __padding[0x10L];
	FName& CheatNameField() { return *GetNativePointerField<FName*>(this, "PrimalDinoCharacter_eventBPOnDinoCheat_Parms.CheatName"); }
	bool& bSetValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPOnDinoCheat_Parms.bSetValue"); }
	float& ValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPOnDinoCheat_Parms.Value"); }
};

