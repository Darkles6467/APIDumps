#pragma once

#include "BaseDeclarations.h"
struct FHordeCrateNPCGroup
{
	char __padding[0x50L];
	TArray<TSubclassOf<APrimalDinoCharacter>>& NPCClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "FHordeCrateNPCGroup.NPCClasses"); }
	TArray<TAssetSubclassOf<APrimalDinoCharacter>>& NPCAssetsField() { return *GetNativePointerField<TArray<TAssetSubclassOf<APrimalDinoCharacter>>*>(this, "FHordeCrateNPCGroup.NPCAssets"); }
	TArray<float>& NPCWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FHordeCrateNPCGroup.NPCWeights"); }
	TArray<int>& MinLevelsField() { return *GetNativePointerField<TArray<int>*>(this, "FHordeCrateNPCGroup.MinLevels"); }
	TArray<int>& MaxLevelsField() { return *GetNativePointerField<TArray<int>*>(this, "FHordeCrateNPCGroup.MaxLevels"); }

	// Functions

	FHordeCrateNPCGroup * operator=(const FHordeCrateNPCGroup * __that) { return NativeCall<FHordeCrateNPCGroup *, const FHordeCrateNPCGroup *>(this, "FHordeCrateNPCGroup.operator=", __that); }
};

