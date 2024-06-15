#pragma once

#include "BaseDeclarations.h"
struct FBoneDamageAdjuster
{
	char __padding[0xcL];
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FBoneDamageAdjuster.BoneName"); }
	float& DamageMultiplierField() { return *GetNativePointerField<float*>(this, "FBoneDamageAdjuster.DamageMultiplier"); }

	// Functions

};

