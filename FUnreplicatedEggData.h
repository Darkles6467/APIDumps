#pragma once

#include "BaseDeclarations.h"
struct FUnreplicatedEggData
{
	char __padding[0x58L];
	TArray<int>& EggNumberOfLevelUpPointsAppliedField() { return *GetNativePointerField<TArray<int>*>(this, "FUnreplicatedEggData.EggNumberOfLevelUpPointsApplied"); }
	float& EggTamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "FUnreplicatedEggData.EggTamedIneffectivenessModifier"); }
	TArray<int>& EggColorSetIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FUnreplicatedEggData.EggColorSetIndices"); }
	TArray<FDinoAncestorsEntryBlueprint>& EggDinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntryBlueprint>*>(this, "FUnreplicatedEggData.EggDinoAncestors"); }
	TArray<FDinoAncestorsEntryBlueprint>& EggDinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntryBlueprint>*>(this, "FUnreplicatedEggData.EggDinoAncestorsMale"); }
	int& EggRandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "FUnreplicatedEggData.EggRandomMutationsFemale"); }
	int& EggRandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "FUnreplicatedEggData.EggRandomMutationsMale"); }
	int& EggGenderOverrideField() { return *GetNativePointerField<int*>(this, "FUnreplicatedEggData.EggGenderOverride"); }

	// Functions

	FUnreplicatedEggData * operator=(const FUnreplicatedEggData * __that) { return NativeCall<FUnreplicatedEggData *, const FUnreplicatedEggData *>(this, "FUnreplicatedEggData.operator=", __that); }
};

