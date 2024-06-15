#pragma once

#include "BaseDeclarations.h"
struct FEnvIntParam
{
	char __padding[0xcL];
	int& ValueField() { return *GetNativePointerField<int*>(this, "FEnvIntParam.Value"); }
	FName& ParamNameField() { return *GetNativePointerField<FName*>(this, "FEnvIntParam.ParamName"); }

	// Functions

};

