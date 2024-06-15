#pragma once

#include "BaseDeclarations.h"
struct FItemNetInfo
{
	char __padding[0x1b0L];
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "FItemNetInfo.ItemID"); }
	unsigned int& ItemQuantityField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.ItemQuantity"); }
	int& CustomItemIDField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.CustomItemID"); }
	int& SlotIndexField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.SlotIndex"); }
	long double& CreationTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.CreationTime"); }
	FString& CustomItemNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CustomItemName"); }
	FString& CustomItemDescriptionField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CustomItemDescription"); }
	long double& UploadEarliestValidTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.UploadEarliestValidTime"); }
	TArray<unsigned __int64>& SteamUserItemIDField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "FItemNetInfo.SteamUserItemID"); }
	unsigned __int16& CraftQueueField() { return *GetNativePointerField<unsigned __int16*>(this, "FItemNetInfo.CraftQueue"); }
	long double& NextCraftCompletionTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.NextCraftCompletionTime"); }
	float& CraftingSkillField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.CraftingSkill"); }
	float& CraftedSkillBonusField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.CraftedSkillBonus"); }
	FString& CrafterCharacterNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CrafterCharacterName"); }
	FString& CrafterTribeNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CrafterTribeName"); }
	unsigned int& WeaponClipAmmoField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.WeaponClipAmmo"); }
	float& ItemDurabilityField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemDurability"); }
	float& ItemRatingField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemRating"); }
	unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.ExpirationTimeUTC"); }
	char& ItemQualityIndexField() { return *GetNativePointerField<char*>(this, "FItemNetInfo.ItemQualityIndex"); }
	FieldArray<unsigned __int16, 8> ItemStatValuesField() { return {this, "FItemNetInfo.ItemStatValues"}; }
	FieldArray<__int16, 6> ItemColorIDField() { return {this, "FItemNetInfo.ItemColorID"}; }
	TArray<FCustomItemData>& CustomItemDatasField() { return *GetNativePointerField<TArray<FCustomItemData>*>(this, "FItemNetInfo.CustomItemDatas"); }
	TArray<FColor>& CustomItemColorsField() { return *GetNativePointerField<TArray<FColor>*>(this, "FItemNetInfo.CustomItemColors"); }
	TArray<FCraftingResourceRequirement>& CustomResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement>*>(this, "FItemNetInfo.CustomResourceRequirements"); }
	long double& NextSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.NextSpoilingTime"); }
	long double& LastSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.LastSpoilingTime"); }
	unsigned __int64& OwnerPlayerDataIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FItemNetInfo.OwnerPlayerDataId"); }
	TWeakObjectPtr<AShooterCharacter>& LastOwnerPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "FItemNetInfo.LastOwnerPlayer"); }
	long double& LastAutoDurabilityDecreaseTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.LastAutoDurabilityDecreaseTime"); }
	float& ItemStatClampsMultiplierField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemStatClampsMultiplier"); }
	FVector& OriginalItemDropLocationField() { return *GetNativePointerField<FVector*>(this, "FItemNetInfo.OriginalItemDropLocation"); }
	FieldArray<__int16, 6> PreSkinItemColorIDField() { return {this, "FItemNetInfo.PreSkinItemColorID"}; }
	FieldArray<char, 12> EggNumberOfLevelUpPointsAppliedField() { return {this, "FItemNetInfo.EggNumberOfLevelUpPointsApplied"}; }
	float& EggTamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.EggTamedIneffectivenessModifier"); }
	FieldArray<char, 6> EggColorSetIndicesField() { return {this, "FItemNetInfo.EggColorSetIndices"}; }
	int& EggGenderOverrideField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggGenderOverride"); }
	char& ItemVersionField() { return *GetNativePointerField<char*>(this, "FItemNetInfo.ItemVersion"); }
	long double& ClusterSpoilingTimeUTCField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.ClusterSpoilingTimeUTC"); }
	TArray<FDinoAncestorsEntry>& EggDinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry>*>(this, "FItemNetInfo.EggDinoAncestors"); }
	TArray<FDinoAncestorsEntry>& EggDinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry>*>(this, "FItemNetInfo.EggDinoAncestorsMale"); }
	int& EggRandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggRandomMutationsFemale"); }
	int& EggRandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggRandomMutationsMale"); }
	char& ItemProfileVersionField() { return *GetNativePointerField<char*>(this, "FItemNetInfo.ItemProfileVersion"); }
	bool& bNetInfoFromClientField() { return *GetNativePointerField<bool*>(this, "FItemNetInfo.bNetInfoFromClient"); }

	// Functions

	FItemNetInfo * operator=(const FItemNetInfo * __that) { return NativeCall<FItemNetInfo *, const FItemNetInfo *>(this, "FItemNetInfo.operator=", __that); }
	bool NetSerialize(FArchive * Ar, UPackageMap * Map, bool * bOutSuccess) { return NativeCall<bool, FArchive *, UPackageMap *, bool *>(this, "FItemNetInfo.NetSerialize", Ar, Map, bOutSuccess); }
};

