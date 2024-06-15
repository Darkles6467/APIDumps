#pragma once

#include "BaseDeclarations.h"
struct FSaveLoadDyePaintingItem
{
	char __padding[0x38L];
	FItemNetID& ItemIdField() { return *GetNativePointerField<FItemNetID*>(this, "FSaveLoadDyePaintingItem.ItemId"); }
	FString& ColorNameField() { return *GetNativePointerField<FString*>(this, "FSaveLoadDyePaintingItem.ColorName"); }
	FColor& DyeColorField() { return *GetNativePointerField<FColor*>(this, "FSaveLoadDyePaintingItem.DyeColor"); }
	float& MissingPercentageField() { return *GetNativePointerField<float*>(this, "FSaveLoadDyePaintingItem.MissingPercentage"); }
	float& NeededPercentageField() { return *GetNativePointerField<float*>(this, "FSaveLoadDyePaintingItem.NeededPercentage"); }
	__int16& ArchIndexField() { return *GetNativePointerField<__int16*>(this, "FSaveLoadDyePaintingItem.ArchIndex"); }
	TArray<int>& ColorPixelsField() { return *GetNativePointerField<TArray<int>*>(this, "FSaveLoadDyePaintingItem.ColorPixels"); }

	// Functions

	FSaveLoadDyePaintingItem * operator=(const FSaveLoadDyePaintingItem * __that) { return NativeCall<FSaveLoadDyePaintingItem *, const FSaveLoadDyePaintingItem *>(this, "FSaveLoadDyePaintingItem.operator=", __that); }
};

