#pragma once

#include "BaseDeclarations.h"
struct FModulatorContinuousParams
{
	char __padding[0x20L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "FModulatorContinuousParams.ParameterName"); }
	float& DefaultField() { return *GetNativePointerField<float*>(this, "FModulatorContinuousParams.Default"); }
	float& MinInputField() { return *GetNativePointerField<float*>(this, "FModulatorContinuousParams.MinInput"); }
	float& MaxInputField() { return *GetNativePointerField<float*>(this, "FModulatorContinuousParams.MaxInput"); }
	float& MinOutputField() { return *GetNativePointerField<float*>(this, "FModulatorContinuousParams.MinOutput"); }
	float& MaxOutputField() { return *GetNativePointerField<float*>(this, "FModulatorContinuousParams.MaxOutput"); }
	TEnumAsByte<enum ModulationParamMode>& ParamModeField() { return *GetNativePointerField<TEnumAsByte<enum ModulationParamMode>*>(this, "FModulatorContinuousParams.ParamMode"); }

	// Functions

	float GetValue(const FActiveSound * ActiveSound) { return NativeCall<float, const FActiveSound *>(this, "FModulatorContinuousParams.GetValue", ActiveSound); }
};

