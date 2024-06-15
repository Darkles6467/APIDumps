#pragma once

#include "BaseDeclarations.h"
struct FEnvNamedValue
{
	char __padding[0x10L];
	FName& ParamNameField() { return *GetNativePointerField<FName*>(this, "FEnvNamedValue.ParamName"); }
	TEnumAsByte<enum EEnvQueryParam::Type>& ParamTypeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvQueryParam::Type>*>(this, "FEnvNamedValue.ParamType"); }
	float& ValueField() { return *GetNativePointerField<float*>(this, "FEnvNamedValue.Value"); }

	// Functions

};

