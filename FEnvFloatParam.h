#pragma once

#include "BaseDeclarations.h"
struct FEnvFloatParam
{
	char __padding[0xcL];
	float& ValueField() { return *GetNativePointerField<float*>(this, "FEnvFloatParam.Value"); }
	FName& ParamNameField() { return *GetNativePointerField<FName*>(this, "FEnvFloatParam.ParamName"); }

	// Functions

};

