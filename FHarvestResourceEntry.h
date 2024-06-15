#pragma once

#include "BaseDeclarations.h"
struct FHarvestResourceEntry
{
	char __padding[0x78L];
	int& OverrideQuantityMaxField() { return *GetNativePointerField<int*>(this, "FHarvestResourceEntry.OverrideQuantityMax"); }
	int& OverrideQuantityMinField() { return *GetNativePointerField<int*>(this, "FHarvestResourceEntry.OverrideQuantityMin"); }
	float& OverrideQuantityRandomPowerField() { return *GetNativePointerField<float*>(this, "FHarvestResourceEntry.OverrideQuantityRandomPower"); }
	float& EntryWeightField() { return *GetNativePointerField<float*>(this, "FHarvestResourceEntry.EntryWeight"); }
	float& EffectivenessQuantityMultiplierField() { return *GetNativePointerField<float*>(this, "FHarvestResourceEntry.EffectivenessQuantityMultiplier"); }
	float& EffectivenessQualityMultiplierField() { return *GetNativePointerField<float*>(this, "FHarvestResourceEntry.EffectivenessQualityMultiplier"); }
	float& QualityMinField() { return *GetNativePointerField<float*>(this, "FHarvestResourceEntry.QualityMin"); }
	float& QualityMaxField() { return *GetNativePointerField<float*>(this, "FHarvestResourceEntry.QualityMax"); }
	float& XPGainMaxField() { return *GetNativePointerField<float*>(this, "FHarvestResourceEntry.XPGainMax"); }
	float& XPGainMinField() { return *GetNativePointerField<float*>(this, "FHarvestResourceEntry.XPGainMin"); }
	TArray<float>& DamageTypeEntryWeightOverridesField() { return *GetNativePointerField<TArray<float>*>(this, "FHarvestResourceEntry.DamageTypeEntryWeightOverrides"); }
	TArray<float>& DamageTypeEntryMinQuantityOverridesField() { return *GetNativePointerField<TArray<float>*>(this, "FHarvestResourceEntry.DamageTypeEntryMinQuantityOverrides"); }
	TArray<float>& DamageTypeEntryMaxQuantityOverridesField() { return *GetNativePointerField<TArray<float>*>(this, "FHarvestResourceEntry.DamageTypeEntryMaxQuantityOverrides"); }

	// Functions

	FHarvestResourceEntry * operator=(const FHarvestResourceEntry * __that) { return NativeCall<FHarvestResourceEntry *, const FHarvestResourceEntry *>(this, "FHarvestResourceEntry.operator=", __that); }
};

