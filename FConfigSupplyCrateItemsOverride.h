#pragma once

#include "BaseDeclarations.h"
struct FConfigSupplyCrateItemsOverride
{
	char __padding[0x38L];
	FString& SupplyCrateClassStringField() { return *GetNativePointerField<FString*>(this, "FConfigSupplyCrateItemsOverride.SupplyCrateClassString"); }
	int& MinItemSetsField() { return *GetNativePointerField<int*>(this, "FConfigSupplyCrateItemsOverride.MinItemSets"); }
	int& MaxItemSetsField() { return *GetNativePointerField<int*>(this, "FConfigSupplyCrateItemsOverride.MaxItemSets"); }
	int& NumItemSetsPowerField() { return *GetNativePointerField<int*>(this, "FConfigSupplyCrateItemsOverride.NumItemSetsPower"); }
	bool& bSetsRandomWithoutReplacementField() { return *GetNativePointerField<bool*>(this, "FConfigSupplyCrateItemsOverride.bSetsRandomWithoutReplacement"); }
	TArray<FSupplyCrateItemSet>& ItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet>*>(this, "FConfigSupplyCrateItemsOverride.ItemSets"); }
	bool& bAppendItemSetsField() { return *GetNativePointerField<bool*>(this, "FConfigSupplyCrateItemsOverride.bAppendItemSets"); }
	bool& bAppendPreventIncreasingMinMaxItemSetsField() { return *GetNativePointerField<bool*>(this, "FConfigSupplyCrateItemsOverride.bAppendPreventIncreasingMinMaxItemSets"); }

	// Functions

	FConfigSupplyCrateItemsOverride * operator=(const FConfigSupplyCrateItemsOverride * __that) { return NativeCall<FConfigSupplyCrateItemsOverride *, const FConfigSupplyCrateItemsOverride *>(this, "FConfigSupplyCrateItemsOverride.operator=", __that); }
};

