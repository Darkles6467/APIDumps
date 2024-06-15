#pragma once

#include "BaseDeclarations.h"
struct FDestructibleDamageParameters
{
	char __padding[0x14L];
	float& DamageThresholdField() { return *GetNativePointerField<float*>(this, "FDestructibleDamageParameters.DamageThreshold"); }
	float& DamageSpreadField() { return *GetNativePointerField<float*>(this, "FDestructibleDamageParameters.DamageSpread"); }
	float& ImpactDamageField() { return *GetNativePointerField<float*>(this, "FDestructibleDamageParameters.ImpactDamage"); }
	float& ImpactResistanceField() { return *GetNativePointerField<float*>(this, "FDestructibleDamageParameters.ImpactResistance"); }
	int& DefaultImpactDamageDepthField() { return *GetNativePointerField<int*>(this, "FDestructibleDamageParameters.DefaultImpactDamageDepth"); }

	// Functions

};

