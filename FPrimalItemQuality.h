#pragma once

#include "BaseDeclarations.h"
struct FPrimalItemQuality
{
	char __padding[0x30L];
	FLinearColor& QualityColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPrimalItemQuality.QualityColor"); }
	FString& QualityNameField() { return *GetNativePointerField<FString*>(this, "FPrimalItemQuality.QualityName"); }
	float& QualityRandomMultiplierThresholdField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.QualityRandomMultiplierThreshold"); }
	float& CraftingXPMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.CraftingXPMultiplier"); }
	float& RepairingXPMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.RepairingXPMultiplier"); }
	float& CraftingResourceRequirementsMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.CraftingResourceRequirementsMultiplier"); }

	// Functions

	FPrimalItemQuality * operator=(const FPrimalItemQuality * __that) { return NativeCall<FPrimalItemQuality *, const FPrimalItemQuality *>(this, "FPrimalItemQuality.operator=", __that); }
};

