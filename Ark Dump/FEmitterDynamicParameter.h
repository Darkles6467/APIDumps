#pragma once

#include "BaseDeclarations.h"
struct FEmitterDynamicParameter
{
	char __padding[0x50L];
	FName& ParamNameField() { return *GetNativePointerField<FName*>(this, "FEmitterDynamicParameter.ParamName"); }
	TEnumAsByte<enum EEmitterDynamicParameterValue>& ValueMethodField() { return *GetNativePointerField<TEnumAsByte<enum EEmitterDynamicParameterValue>*>(this, "FEmitterDynamicParameter.ValueMethod"); }

	// Functions

};

