#pragma once

#include "BaseDeclarations.h"
struct FLootTableEntry
{
	char __padding[0x38L];
	TEnumAsByte<enum ELootItemType::Type>& LootItemTypeField() { return *GetNativePointerField<TEnumAsByte<enum ELootItemType::Type>*>(this, "FLootTableEntry.LootItemType"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FLootTableEntry.Weight"); }
	TEnumAsByte<enum ESimpleCurve::Type>& QuantityCurveField() { return *GetNativePointerField<TEnumAsByte<enum ESimpleCurve::Type>*>(this, "FLootTableEntry.QuantityCurve"); }
	int& MinQuantityField() { return *GetNativePointerField<int*>(this, "FLootTableEntry.MinQuantity"); }
	int& MaxQuantityField() { return *GetNativePointerField<int*>(this, "FLootTableEntry.MaxQuantity"); }
	TEnumAsByte<enum ESimpleCurve::Type>& QualityCurveField() { return *GetNativePointerField<TEnumAsByte<enum ESimpleCurve::Type>*>(this, "FLootTableEntry.QualityCurve"); }
	FVector2D& QualityRangeField() { return *GetNativePointerField<FVector2D*>(this, "FLootTableEntry.QualityRange"); }

	// Functions

	FLootTableEntry * operator=(const FLootTableEntry * __that) { return NativeCall<FLootTableEntry *, const FLootTableEntry *>(this, "FLootTableEntry.operator=", __that); }
};

