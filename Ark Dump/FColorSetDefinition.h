#pragma once

#include "BaseDeclarations.h"
struct FColorSetDefinition
{
	char __padding[0x60L];
	FString& RegionNameField() { return *GetNativePointerField<FString*>(this, "FColorSetDefinition.RegionName"); }
	TArray<FName>& ColorEntryNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FColorSetDefinition.ColorEntryNames"); }
	TArray<float>& RandomWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FColorSetDefinition.RandomWeights"); }
	TArray<float>& MinLevelField() { return *GetNativePointerField<TArray<float>*>(this, "FColorSetDefinition.MinLevel"); }
	TArray<float>& MaxLevelField() { return *GetNativePointerField<TArray<float>*>(this, "FColorSetDefinition.MaxLevel"); }
	TArray<int>& CachedGameDataColorIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FColorSetDefinition.CachedGameDataColorIndices"); }

	// Functions

	FColorSetDefinition * operator=(const FColorSetDefinition * __that) { return NativeCall<FColorSetDefinition *, const FColorSetDefinition *>(this, "FColorSetDefinition.operator=", __that); }
};

