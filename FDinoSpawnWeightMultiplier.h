#pragma once

#include "BaseDeclarations.h"
struct FDinoSpawnWeightMultiplier
{
	char __padding[0x14L];
	FName& DinoNameTagField() { return *GetNativePointerField<FName*>(this, "FDinoSpawnWeightMultiplier.DinoNameTag"); }
	float& SpawnWeightMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoSpawnWeightMultiplier.SpawnWeightMultiplier"); }
	bool& OverrideSpawnLimitPercentageField() { return *GetNativePointerField<bool*>(this, "FDinoSpawnWeightMultiplier.OverrideSpawnLimitPercentage"); }
	float& SpawnLimitPercentageField() { return *GetNativePointerField<float*>(this, "FDinoSpawnWeightMultiplier.SpawnLimitPercentage"); }

	// Functions

};

