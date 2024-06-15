#pragma once

#include "BaseDeclarations.h"
#include "UDistributionFloatConstant.h"

struct UDistributionFloatParameterBase : UDistributionFloatConstant
{
	char __padding[0x20L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "UDistributionFloatParameterBase.ParameterName"); }
	float& MinInputField() { return *GetNativePointerField<float*>(this, "UDistributionFloatParameterBase.MinInput"); }
	float& MaxInputField() { return *GetNativePointerField<float*>(this, "UDistributionFloatParameterBase.MaxInput"); }
	float& MinOutputField() { return *GetNativePointerField<float*>(this, "UDistributionFloatParameterBase.MinOutput"); }
	float& MaxOutputField() { return *GetNativePointerField<float*>(this, "UDistributionFloatParameterBase.MaxOutput"); }
	TEnumAsByte<enum DistributionParamMode>& ParamModeField() { return *GetNativePointerField<TEnumAsByte<enum DistributionParamMode>*>(this, "UDistributionFloatParameterBase.ParamMode"); }

	// Functions

	float GetValue(float F, UObject * Data, FRandomStream * InRandomStream) { return NativeCall<float, float, UObject *, FRandomStream *>(this, "UDistributionFloatParameterBase.GetValue", F, Data, InRandomStream); }
};

