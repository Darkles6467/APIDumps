#pragma once

#include "BaseDeclarations.h"
struct FSupplyCrateItemSet
{
	char __padding[0x40L];
	FString& SetNameField() { return *GetNativePointerField<FString*>(this, "FSupplyCrateItemSet.SetName"); }
	TArray<FSupplyCrateItemEntry>& ItemEntriesField() { return *GetNativePointerField<TArray<FSupplyCrateItemEntry>*>(this, "FSupplyCrateItemSet.ItemEntries"); }
	float& MinNumItemsField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemSet.MinNumItems"); }
	float& MaxNumItemsField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemSet.MaxNumItems"); }
	float& NumItemsPowerField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemSet.NumItemsPower"); }
	float& SetWeightField() { return *GetNativePointerField<float*>(this, "FSupplyCrateItemSet.SetWeight"); }
	bool& bItemsRandomWithoutReplacementField() { return *GetNativePointerField<bool*>(this, "FSupplyCrateItemSet.bItemsRandomWithoutReplacement"); }
	TSubclassOf<UPrimalSupplyCrateItemSet>& ItemSetOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalSupplyCrateItemSet>*>(this, "FSupplyCrateItemSet.ItemSetOverride"); }

	// Functions

	FSupplyCrateItemSet * operator=(const FSupplyCrateItemSet * __that) { return NativeCall<FSupplyCrateItemSet *, const FSupplyCrateItemSet *>(this, "FSupplyCrateItemSet.operator=", __that); }
};

