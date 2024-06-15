#pragma once

#include "BaseDeclarations.h"
struct FDinoFoodEffectivenessMultipliers
{
	char __padding[0x30L];
	float& FoodEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.FoodEffectivenessMultiplier"); }
	float& HealthEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.HealthEffectivenessMultiplier"); }
	float& TorpidityEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.TorpidityEffectivenessMultiplier"); }
	float& AffinityEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.AffinityEffectivenessMultiplier"); }
	float& AffinityOverrideField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.AffinityOverride"); }
	float& StaminaEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.StaminaEffectivenessMultiplier"); }
	int& FoodItemCategoryField() { return *GetNativePointerField<int*>(this, "FDinoFoodEffectivenessMultipliers.FoodItemCategory"); }
	float& UntamedFoodConsumptionPriorityField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.UntamedFoodConsumptionPriority"); }

	// Functions

};

