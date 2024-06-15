#pragma once

#include "BaseDeclarations.h"
struct FAudioComponentParam
{
	char __padding[0x28L];
	FName& ParamNameField() { return *GetNativePointerField<FName*>(this, "FAudioComponentParam.ParamName"); }
	float& FloatParamField() { return *GetNativePointerField<float*>(this, "FAudioComponentParam.FloatParam"); }
	bool& BoolParamField() { return *GetNativePointerField<bool*>(this, "FAudioComponentParam.BoolParam"); }
	int& IntParamField() { return *GetNativePointerField<int*>(this, "FAudioComponentParam.IntParam"); }
	UDEPRECATED_SoundNodeWave * WaveParam_DEPRECATEDField() { return GetNativePointerField<UDEPRECATED_SoundNodeWave *>(this, "FAudioComponentParam.WaveParam_DEPRECATED"); }

	// Functions

};

