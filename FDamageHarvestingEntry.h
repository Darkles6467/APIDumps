#pragma once

#include "BaseDeclarations.h"
struct FDamageHarvestingEntry
{
	char __padding[0x28L];
	float& DamageMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.DamageMultiplier"); }
	float& HarvestQuantityMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.HarvestQuantityMultiplier"); }
	float& DamageHarvestAdditionalEffectivenessField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.DamageHarvestAdditionalEffectiveness"); }
	float& DamageDurabilityConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.DamageDurabilityConsumptionMultiplier"); }

	// Functions

};

