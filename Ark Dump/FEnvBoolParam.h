#pragma once

#include "BaseDeclarations.h"
struct FEnvBoolParam
{
	char __padding[0xcL];
	bool& ValueField() { return *GetNativePointerField<bool*>(this, "FEnvBoolParam.Value"); }
	FName& ParamNameField() { return *GetNativePointerField<FName*>(this, "FEnvBoolParam.ParamName"); }

	// Functions

};

