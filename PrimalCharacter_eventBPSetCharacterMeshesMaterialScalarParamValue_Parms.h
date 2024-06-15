#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPSetCharacterMeshesMaterialScalarParamValue_Parms
{
	char __padding[0xcL];
	FName& ParamNameField() { return *GetNativePointerField<FName*>(this, "PrimalCharacter_eventBPSetCharacterMeshesMaterialScalarParamValue_Parms.ParamName"); }
	float& ValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPSetCharacterMeshesMaterialScalarParamValue_Parms.Value"); }
};

