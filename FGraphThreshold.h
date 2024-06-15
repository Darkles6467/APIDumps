#pragma once

#include "BaseDeclarations.h"
struct FGraphThreshold
{
	char __padding[0x28L];
	float& ThresholdField() { return *GetNativePointerField<float*>(this, "FGraphThreshold.Threshold"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FGraphThreshold.Color"); }
	FString& ThresholdNameField() { return *GetNativePointerField<FString*>(this, "FGraphThreshold.ThresholdName"); }
};

