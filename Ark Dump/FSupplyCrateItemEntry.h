#pragma once

#include "BaseDeclarations.h"
struct FSupplyCrateItemEntry
{
	char __padding[0x90L];
	FString& ItemEntryNameField() { return *GetNativePointerField<FString*>(this, "FSupplyCrateItemEntry.ItemEntryName"); }
	float& EntryWeightField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.EntryWeight"); }
	TArray<FString>& ItemClassStringsField() { return *GetNativePointerField<TArray<FString>*>(this, "FSupplyCrateItemEntry.ItemClassStrings"); }
	TArray<float>& ItemsWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FSupplyCrateItemEntry.ItemsWeights"); }
	TArray<int>& ItemQuantityOverridesField() { return *GetNativePointerField<TArray<int>*>(this, "FSupplyCrateItemEntry.ItemQuantityOverrides"); }
	float& MinQuantityField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.MinQuantity"); }
	float& MaxQuantityField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.MaxQuantity"); }
	bool& bApplyQuantityToSingleItemField() { return *GetNativePointerField<bool*>(this, "FSupplyCrateItemEntry.bApplyQuantityToSingleItem"); }
	float& QuantityPowerField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.QuantityPower"); }
	float& MinRandomQualityField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.MinRandomQuality"); }
	float& MinQualityField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.MinQuality"); }
	float& MaxQualityField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.MaxQuality"); }
	float& QualityPowerField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.QualityPower"); }
	float& ChanceToBeBlueprintOverrideField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.ChanceToBeBlueprintOverride"); }
	float& ItemStatClampsMultiplierField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.ItemStatClampsMultiplier"); }
	float& ChanceToActuallyGiveItemField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.ChanceToActuallyGiveItem"); }
	float& RequiresMinQualityField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemEntry.RequiresMinQuality"); }

	// Functions

	FSupplyCrateItemEntry * operator=(const FSupplyCrateItemEntry * __that) { return NativeCall<FSupplyCrateItemEntry *, const FSupplyCrateItemEntry *>(this, "FSupplyCrateItemEntry.operator=", __that); }
};

