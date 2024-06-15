#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalDinoSettings : UObject
{
	char __padding[0x68L];
	TArray<FDinoFoodEffectivenessMultipliers>& FoodEffectivenessMultipliersField() { return *GetNativePointerField<TArray<FDinoFoodEffectivenessMultipliers>*>(this, "UPrimalDinoSettings.FoodEffectivenessMultipliers"); }
	TArray<FDinoFoodEffectivenessMultipliers>& ExtraFoodEffectivenessMultipliersField() { return *GetNativePointerField<TArray<FDinoFoodEffectivenessMultipliers>*>(this, "UPrimalDinoSettings.ExtraFoodEffectivenessMultipliers"); }
	float& TamingAffinityNoFoodDecreasePercentageSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalDinoSettings.TamingAffinityNoFoodDecreasePercentageSpeed"); }
	TArray<FDamageTypeAdjuster>& BaseDamageTypeAdjustersField() { return *GetNativePointerField<TArray<FDamageTypeAdjuster>*>(this, "UPrimalDinoSettings.BaseDamageTypeAdjusters"); }
	TArray<FDamageTypeAdjuster>& ExtraDamageTypeAdjustersField() { return *GetNativePointerField<TArray<FDamageTypeAdjuster>*>(this, "UPrimalDinoSettings.ExtraDamageTypeAdjusters"); }
	FString& DinoFoodTypeNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoSettings.DinoFoodTypeName"); }
	bool& bWakingTameDisplayItemNameField() { return *GetNativePointerField<bool*>(this, "UPrimalDinoSettings.bWakingTameDisplayItemName"); }

	// Functions

};

