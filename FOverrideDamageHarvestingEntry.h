#pragma once

#include "BaseDeclarations.h"
struct FOverrideDamageHarvestingEntry
{
	char __padding[0x48L];
	TArray<TSubclassOf<UPrimalHarvestingComponent>>& ForHarvestingComponentsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalHarvestingComponent>>*>(this, "FOverrideDamageHarvestingEntry.ForHarvestingComponents"); }
	FDamageHarvestingEntry& HarvestEntryOverrideField() { return *GetNativePointerField<FDamageHarvestingEntry*>(this, "FOverrideDamageHarvestingEntry.HarvestEntryOverride"); }
	TArray<FHarvestResourceEntry>& HarvestResourceEntriesOverrideField() { return *GetNativePointerField<TArray<FHarvestResourceEntry>*>(this, "FOverrideDamageHarvestingEntry.HarvestResourceEntriesOverride"); }

	// Functions

	FOverrideDamageHarvestingEntry * operator=(const FOverrideDamageHarvestingEntry * __that) { return NativeCall<FOverrideDamageHarvestingEntry *, const FOverrideDamageHarvestingEntry *>(this, "FOverrideDamageHarvestingEntry.operator=", __that); }
};

