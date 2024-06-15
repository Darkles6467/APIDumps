#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "FCraftingResourceRequirement.h"
#include "FCustomItemData.h"
#include "UPrimalItem.h"

struct UPrimalItem : UObject
{
	char __padding[0xac0L];
	float& DinoAutoHealingThresholdPercentField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DinoAutoHealingThresholdPercent"); }
	float& DinoAutoHealingUseTimeIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DinoAutoHealingUseTimeInterval"); }
	int& ArkTributeVersionField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ArkTributeVersion"); }
	TArray<FName>& EquipRequiresExplicitOwnerTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItem.EquipRequiresExplicitOwnerTags"); }
	FString& BuffToGiveOwnerWhenEquipped_BlueprintPathField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.BuffToGiveOwnerWhenEquipped_BlueprintPath"); }
	bool& bBuffToGiveOwnerWhenEquipped_SoftRefCachedField() { return *GetNativePointerField<bool*>(this, "UPrimalItem.bBuffToGiveOwnerWhenEquipped_SoftRefCached"); }
	unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem.ExpirationTimeUTC"); }
	int& BlueprintAllowMaxCraftingsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.BlueprintAllowMaxCraftings"); }
	FString& AbstractItemCraftingDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.AbstractItemCraftingDescription"); }
	USoundCue * UseItemSoundField() { return GetNativePointerField<USoundCue *>(this, "UPrimalItem.UseItemSound"); }
	float& RandomChanceToBeBlueprintField() { return *GetNativePointerField<float*>(this, "UPrimalItem.RandomChanceToBeBlueprint"); }
	TArray<FActorClassAttachmentInfo>& ActorClassAttachmentInfosField() { return *GetNativePointerField<TArray<FActorClassAttachmentInfo>*>(this, "UPrimalItem.ActorClassAttachmentInfos"); }
	TArray<FItemAttachmentInfo> * ItemAttachmentInfosField() { return GetNativePointerField<TArray<FItemAttachmentInfo> *>(this, "UPrimalItem.ItemAttachmentInfos"); }
	TArray<FItemAttachmentInfo>& DynamicItemAttachmentInfosField() { return *GetNativePointerField<TArray<FItemAttachmentInfo>*>(this, "UPrimalItem.DynamicItemAttachmentInfos"); }
	TArray<FItemAttachmentInfo>& ItemSkinAddItemAttachmentsField() { return *GetNativePointerField<TArray<FItemAttachmentInfo>*>(this, "UPrimalItem.ItemSkinAddItemAttachments"); }
	TEnumAsByte<enum EPrimalItemType::Type>& MyItemTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalItemType::Type>*>(this, "UPrimalItem.MyItemType"); }
	TEnumAsByte<enum EPrimalConsumableType::Type>& MyConsumableTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalConsumableType::Type>*>(this, "UPrimalItem.MyConsumableType"); }
	TEnumAsByte<enum EPrimalEquipmentType::Type>& MyEquipmentTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalEquipmentType::Type>*>(this, "UPrimalItem.MyEquipmentType"); }
	int& ExtraItemCategoryFlagsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ExtraItemCategoryFlags"); }
	float& ItemIconScaleField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemIconScale"); }
	FVector& BlockingShieldFPVTranslationField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.BlockingShieldFPVTranslation"); }
	FRotator& BlockingShieldFPVRotationField() { return *GetNativePointerField<FRotator*>(this, "UPrimalItem.BlockingShieldFPVRotation"); }
	float& ShieldBlockDamagePercentageField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ShieldBlockDamagePercentage"); }
	float& ShieldDamageToDurabilityRatioField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ShieldDamageToDurabilityRatio"); }
	UAnimMontage * PlayAnimationOnUseField() { return GetNativePointerField<UAnimMontage *>(this, "UPrimalItem.PlayAnimationOnUse"); }
	bool& bHideDuringEquipAnimationField() { return *GetNativePointerField<bool*>(this, "UPrimalItem.bHideDuringEquipAnimation"); }
	UAnimMontage * ShowAnimationMaleField() { return GetNativePointerField<UAnimMontage *>(this, "UPrimalItem.ShowAnimationMale"); }
	UAnimMontage * ShowAnimationFemaleField() { return GetNativePointerField<UAnimMontage *>(this, "UPrimalItem.ShowAnimationFemale"); }
	UAnimMontage * HideAnimationMaleField() { return GetNativePointerField<UAnimMontage *>(this, "UPrimalItem.HideAnimationMale"); }
	UAnimMontage * HideAnimationFemaleField() { return GetNativePointerField<UAnimMontage *>(this, "UPrimalItem.HideAnimationFemale"); }
	int& CraftingMinLevelRequirementField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingMinLevelRequirement"); }
	float& CraftingCooldownIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingCooldownInterval"); }
	FString& CraftItemButtonStringOverrideField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CraftItemButtonStringOverride"); }
	FVector& UseSpawnActorLocOffsetField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.UseSpawnActorLocOffset"); }
	int& SlotIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.SlotIndex"); }
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "UPrimalItem.ItemID"); }
	int& ItemCustomDataField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemCustomData"); }
	int& ItemSkinTemplateIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemSkinTemplateIndex"); }
	float& ItemRatingField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemRating"); }
	unsigned __int16& CraftQueueField() { return *GetNativePointerField<unsigned __int16*>(this, "UPrimalItem.CraftQueue"); }
	float& CraftingSkillField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingSkill"); }
	FString& CustomItemNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CustomItemName"); }
	FString& CustomItemDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CustomItemDescription"); }
	TArray<FColor>& CustomColorsField() { return *GetNativePointerField<TArray<FColor>*>(this, "UPrimalItem.CustomColors"); }
	TArray<FCraftingResourceRequirement>& CustomResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement>*>(this, "UPrimalItem.CustomResourceRequirements"); }
	long double& NextCraftCompletionTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.NextCraftCompletionTime"); }
	char& ItemQualityIndexField() { return *GetNativePointerField<char*>(this, "UPrimalItem.ItemQualityIndex"); }
	TArray<FUseItemAddCharacterStatusValue>& UseItemAddCharacterStatusValuesField() { return *GetNativePointerField<TArray<FUseItemAddCharacterStatusValue>*>(this, "UPrimalItem.UseItemAddCharacterStatusValues"); }
	float& Ingredient_WeightIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_WeightIncreasePerQuantity"); }
	float& Ingredient_FoodIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_FoodIncreasePerQuantity"); }
	float& Ingredient_HealthIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_HealthIncreasePerQuantity"); }
	float& Ingredient_WaterIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_WaterIncreasePerQuantity"); }
	float& Ingredient_StaminaIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_StaminaIncreasePerQuantity"); }
	FString& DescriptiveNameBaseField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DescriptiveNameBase"); }
	FString& ItemDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.ItemDescription"); }
	FString& DurabilityStringShortField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DurabilityStringShort"); }
	FString& DurabilityStringField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DurabilityString"); }
	FString& CustomRepairTextField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CustomRepairText"); }
	float& DroppedItemLifeSpanOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DroppedItemLifeSpanOverride"); }
	UStaticMesh * DroppedMeshOverrideField() { return GetNativePointerField<UStaticMesh *>(this, "UPrimalItem.DroppedMeshOverride"); }
	FVector& DroppedMeshOverrideScale3DField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.DroppedMeshOverrideScale3D"); }
	float& PreservingItemSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreservingItemSpoilingTimeMultiplier"); }
	float& SpoilingTimeField() { return *GetNativePointerField<float*>(this, "UPrimalItem.SpoilingTime"); }
	int& CraftingConsumesDurabilityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingConsumesDurability"); }
	float& RepairResourceRequirementMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.RepairResourceRequirementMultiplier"); }
	float& BaseItemWeightField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseItemWeight"); }
	float& DurabilityIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DurabilityIncreaseMultiplier"); }
	float& NewItemDurabilityOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.NewItemDurabilityOverride"); }
	float& DurabilityDecreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DurabilityDecreaseMultiplier"); }
	float& UseDecreaseDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseDecreaseDurability"); }
	float& AutoDurabilityDecreaseIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AutoDurabilityDecreaseInterval"); }
	float& AutoDecreaseMinDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AutoDecreaseMinDurability"); }
	float& AutoDecreaseDurabilityAmountPerIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AutoDecreaseDurabilityAmountPerInterval"); }
	float& UseDecreaseDurabilityMinField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseDecreaseDurabilityMin"); }
	float& UseMinDurabilityRequirementField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseMinDurabilityRequirement"); }
	float& ResourceRarityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRarity"); }
	float& BlueprintTimeToCraftField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BlueprintTimeToCraft"); }
	float& MinBlueprintTimeToCraftField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinBlueprintTimeToCraft"); }
	float& BlueprintWeightField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BlueprintWeight"); }
	float& MinimumUseIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinimumUseInterval"); }
	float& TimeForFullRepairField() { return *GetNativePointerField<float*>(this, "UPrimalItem.TimeForFullRepair"); }
	float& BaseCraftingXPField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseCraftingXP"); }
	float& BaseRepairingXPField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseRepairingXP"); }
	TArray<FCraftingResourceRequirement>& BaseCraftingResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement>*>(this, "UPrimalItem.BaseCraftingResourceRequirements"); }
	TArray<FCraftingResourceRequirement>& OverrideRepairingRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement>*>(this, "UPrimalItem.OverrideRepairingRequirements"); }
	FieldArray<FItemStatInfo, 8> ItemStatInfosField() { return {this, "UPrimalItem.ItemStatInfos"}; }
	FieldArray<unsigned __int16, 8> ItemStatValuesField() { return {this, "UPrimalItem.ItemStatValues"}; }
	unsigned int& WeaponClipAmmoField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem.WeaponClipAmmo"); }
	float& WeaponFrequencyField() { return *GetNativePointerField<float*>(this, "UPrimalItem.WeaponFrequency"); }
	long double& LastTimeToShowInfoField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastTimeToShowInfo"); }
	char& ItemVersionField() { return *GetNativePointerField<char*>(this, "UPrimalItem.ItemVersion"); }
	float& ItemDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemDurability"); }
	float& MinItemDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinItemDurability"); }
	float& SavedDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.SavedDurability"); }
	float& AlternateItemIconBelowDurabilityValueField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AlternateItemIconBelowDurabilityValue"); }
	float& DurabilityNotifyThresholdValueField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DurabilityNotifyThresholdValue"); }
	FieldArray<__int16, 6> ItemColorIDField() { return {this, "UPrimalItem.ItemColorID"}; }
	FieldArray<__int16, 6> PreSkinItemColorIDField() { return {this, "UPrimalItem.PreSkinItemColorID"}; }
	FieldArray<char, 6> bUseItemColorField() { return {this, "UPrimalItem.bUseItemColor"}; }
	TSubclassOf<UPrimalColorSet>& RandomColorSetField() { return *GetNativePointerField<TSubclassOf<UPrimalColorSet>*>(this, "UPrimalItem.RandomColorSet"); }
	int& ItemQuantityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemQuantity"); }
	int& MaxItemQuantityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.MaxItemQuantity"); }
	TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>>& EquippedHideOtherEquipmentAttachTypesField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>>*>(this, "UPrimalItem.EquippedHideOtherEquipmentAttachTypes"); }
	TArray<unsigned __int64>& SteamItemUserIDsField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "UPrimalItem.SteamItemUserIDs"); }
	FRotator& PreviewCameraRotationField() { return *GetNativePointerField<FRotator*>(this, "UPrimalItem.PreviewCameraRotation"); }
	FVector& PreviewCameraPivotOffsetField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.PreviewCameraPivotOffset"); }
	float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreviewCameraDistanceScaleFactor"); }
	float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreviewCameraDefaultZoomMultiplier"); }
	float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreviewCameraMaxZoomMultiplier"); }
	FName& PlayerMeshTextureMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.PlayerMeshTextureMaskParamName"); }
	int& PlayerMeshTextureMaskMaterialIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.PlayerMeshTextureMaskMaterialIndex"); }
	int& PlayerMeshTextureMaskMaterialIndexAltField() { return *GetNativePointerField<int*>(this, "UPrimalItem.PlayerMeshTextureMaskMaterialIndexAlt"); }
	FName& FPVHandsMeshTextureMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.FPVHandsMeshTextureMaskParamName"); }
	int& FPVHandsMeshTextureMaskMaterialIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.FPVHandsMeshTextureMaskMaterialIndex"); }
	int& FPVHandsMeshTextureMaskMaterialIndex2Field() { return *GetNativePointerField<int*>(this, "UPrimalItem.FPVHandsMeshTextureMaskMaterialIndex2"); }
	long double& CreationTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.CreationTime"); }
	long double& LastAutoDurabilityDecreaseTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastAutoDurabilityDecreaseTime"); }
	long double& LastUseTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastUseTime"); }
	long double& LastLocalUseTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastLocalUseTime"); }
	int& MaxCustomItemDescriptionLengthField() { return *GetNativePointerField<int*>(this, "UPrimalItem.MaxCustomItemDescriptionLength"); }
	int& TempSlotIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.TempSlotIndex"); }
	int& LastSlotIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastSlotIndex"); }
	TWeakObjectPtr<AShooterCharacter>& LastOwnerPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "UPrimalItem.LastOwnerPlayer"); }
	TArray<FCropItemPhaseData>& CropPhasesDataField() { return *GetNativePointerField<TArray<FCropItemPhaseData>*>(this, "UPrimalItem.CropPhasesData"); }
	float& CropGrowingFertilizerConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropGrowingFertilizerConsumptionRate"); }
	float& CropMaxFruitFertilizerConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropMaxFruitFertilizerConsumptionRate"); }
	float& CropGrowingWaterConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropGrowingWaterConsumptionRate"); }
	float& CropMaxFruitWaterConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropMaxFruitWaterConsumptionRate"); }
	int& CropMaxFruitsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CropMaxFruits"); }
	float& CropNoFertilizerOrWaterCacheReductionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropNoFertilizerOrWaterCacheReductionRate"); }
	float& FertilizerEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.FertilizerEffectivenessMultiplier"); }
	float& EggAlertDinosAggroAmountField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggAlertDinosAggroAmount"); }
	float& EggAlertDinosAggroRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggAlertDinosAggroRadius"); }
	TArray<FName>& EggAlertDinosAggroTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItem.EggAlertDinosAggroTags"); }
	float& EggAlertDinosForcedAggroTimeField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggAlertDinosForcedAggroTime"); }
	float& EggMaximumDistanceFromOriginalDropToAlertDinosField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggMaximumDistanceFromOriginalDropToAlertDinos"); }
	float& ClearColorDurabilityThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ClearColorDurabilityThreshold"); }
	FVector& OriginalItemDropLocationField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.OriginalItemDropLocation"); }
	FLinearColor& DurabilityBarColorForegroundField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalItem.DurabilityBarColorForeground"); }
	FLinearColor& DurabilityBarColorBackgroundField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalItem.DurabilityBarColorBackground"); }
	float& MinDurabilityForCraftingResourceField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinDurabilityForCraftingResource"); }
	float& ResourceRequirementIncreaseRatingPowerField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRequirementIncreaseRatingPower"); }
	float& ResourceRequirementRatingScaleField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRequirementRatingScale"); }
	float& ResourceRequirementRatingIncreasePercentageField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRequirementRatingIncreasePercentage"); }
	long double& NextSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.NextSpoilingTime"); }
	long double& LastSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastSpoilingTime"); }
	TArray<FString>& DefaultFolderPathsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalItem.DefaultFolderPaths"); }
	FString& ItemRatingStringField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.ItemRatingString"); }
	FName& DefaultWeaponMeshNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.DefaultWeaponMeshName"); }
	int& LastCalculatedTotalAmmoInvUpdatedFrameField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastCalculatedTotalAmmoInvUpdatedFrame"); }
	int& WeaponTotalAmmoField() { return *GetNativePointerField<int*>(this, "UPrimalItem.WeaponTotalAmmo"); }
	TArray<unsigned short>& CraftingResourceRequirementsField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "UPrimalItem.CraftingResourceRequirements"); }
	FVector& SpawnOnWaterEncroachmentBoxExtentField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.SpawnOnWaterEncroachmentBoxExtent"); }
	TArray<FSaddlePassengerSeatDefinition>& SaddlePassengerSeatsField() { return *GetNativePointerField<TArray<FSaddlePassengerSeatDefinition>*>(this, "UPrimalItem.SaddlePassengerSeats"); }
	FName& SaddleOverrideRiderSocketNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.SaddleOverrideRiderSocketName"); }
	TSubclassOf<APrimalDinoCharacter>& EggDinoClassToSpawnField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "UPrimalItem.EggDinoClassToSpawn"); }
	FieldArray<char, 12> EggNumberOfLevelUpPointsAppliedField() { return {this, "UPrimalItem.EggNumberOfLevelUpPointsApplied"}; }
	float& EggTamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggTamedIneffectivenessModifier"); }
	FieldArray<char, 6> EggColorSetIndicesField() { return {this, "UPrimalItem.EggColorSetIndices"}; }
	int& EggGenderOverrideField() { return *GetNativePointerField<int*>(this, "UPrimalItem.EggGenderOverride"); }
	float& EggLoseDurabilityPerSecondField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggLoseDurabilityPerSecond"); }
	float& ExtraEggLoseDurabilityPerSecondMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ExtraEggLoseDurabilityPerSecondMultiplier"); }
	float& EggMinTemperatureField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggMinTemperature"); }
	float& EggMaxTemperatureField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggMaxTemperature"); }
	float& EggDroppedInvalidTempLoseItemRatingSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggDroppedInvalidTempLoseItemRatingSpeed"); }
	float& RecipeCraftingSkillScaleField() { return *GetNativePointerField<float*>(this, "UPrimalItem.RecipeCraftingSkillScale"); }
	int& CustomItemIDField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomItemID"); }
	float& AddDinoTargetingRangeField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AddDinoTargetingRange"); }
	float& DamageTorpidityArmorRatingField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DamageTorpidityArmorRating"); }
	float& IndirectTorpidityArmorRatingField() { return *GetNativePointerField<float*>(this, "UPrimalItem.IndirectTorpidityArmorRating"); }
	FName& UseParticleEffectSocketNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.UseParticleEffectSocketName"); }
	float& UseGiveDinoTameAffinityPercentField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseGiveDinoTameAffinityPercent"); }
	int& LastValidItemVersionField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastValidItemVersion"); }
	float& GlobalTameAffinityMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.GlobalTameAffinityMultiplier"); }
	int& CraftingGiveItemCountField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingGiveItemCount"); }
	int& CraftingGivesItemQuantityOverrideField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingGivesItemQuantityOverride"); }
	FName& UseUnlocksEmoteNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.UseUnlocksEmoteName"); }
	long double& ClusterSpoilingTimeUTCField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.ClusterSpoilingTimeUTC"); }
	TArray<FDinoAncestorsEntry>& EggDinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry>*>(this, "UPrimalItem.EggDinoAncestors"); }
	TArray<FDinoAncestorsEntry>& EggDinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry>*>(this, "UPrimalItem.EggDinoAncestorsMale"); }
	int& EggRandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "UPrimalItem.EggRandomMutationsFemale"); }
	int& EggRandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "UPrimalItem.EggRandomMutationsMale"); }
	TArray<FCustomItemData>& CustomItemDatasField() { return *GetNativePointerField<TArray<FCustomItemData>*>(this, "UPrimalItem.CustomItemDatas"); }
	FString& OverrideUseStringField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.OverrideUseString"); }
	FString& CrafterCharacterNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CrafterCharacterName"); }
	FString& CrafterTribeNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CrafterTribeName"); }
	float& CraftedSkillBonusField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftedSkillBonus"); }
	float& CraftingSkillQualityMultiplierMinField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingSkillQualityMultiplierMin"); }
	float& CraftingSkillQualityMultiplierMaxField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingSkillQualityMultiplierMax"); }
	float& SinglePlayerCraftingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.SinglePlayerCraftingSpeedMultiplier"); }
	int& NoLevelEngramSortingPriorityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.NoLevelEngramSortingPriority"); }
	int& CustomFlagsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomFlags"); }
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.CustomTag"); }
	float& EquippedReduceDurabilityIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EquippedReduceDurabilityInterval"); }
	long double& LastEquippedReduceDurabilityTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastEquippedReduceDurabilityTime"); }
	float& EquippedReduceDurabilityPerIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EquippedReduceDurabilityPerInterval"); }
	float& ItemStatClampsMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemStatClampsMultiplier"); }
	float& MaxDurabiltiyOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MaxDurabiltiyOverride"); }
	long double& LastItemAdditionTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastItemAdditionTime"); }
	long double& UploadEarliestValidTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.UploadEarliestValidTime"); }
	float& NextRepairPercentageField() { return *GetNativePointerField<float*>(this, "UPrimalItem.NextRepairPercentage"); }
	UStaticMesh * NetDroppedMeshOverrideField() { return GetNativePointerField<UStaticMesh *>(this, "UPrimalItem.NetDroppedMeshOverride"); }
	FVector& NetDroppedMeshOverrideScale3DField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.NetDroppedMeshOverrideScale3D"); }
	FColor& CustomBrokenBorderColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalItem.CustomBrokenBorderColor"); }
	UStaticMesh * DyePreviewMeshOverrideSMField() { return GetNativePointerField<UStaticMesh *>(this, "UPrimalItem.DyePreviewMeshOverrideSM"); }
	bool& bUseBlueprintAnimNotificationsField() { return *GetNativePointerField<bool*>(this, "UPrimalItem.bUseBlueprintAnimNotifications"); }
	bool& bUseBPPreventUploadField() { return *GetNativePointerField<bool*>(this, "UPrimalItem.bUseBPPreventUpload"); }
	FName& EquippingCosmeticRequiresUnlockedEmoteNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.EquippingCosmeticRequiresUnlockedEmoteName"); }
	float& CustomInventoryWidgetTextVerticalOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CustomInventoryWidgetTextVerticalOffset"); }
	bool& bUseCustomContextMenuOptionsField() { return *GetNativePointerField<bool*>(this, "UPrimalItem.bUseCustomContextMenuOptions"); }
	TArray<FName>& TopLevelCustomContextMenuOptionsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItem.TopLevelCustomContextMenuOptions"); }
	TArray<FCustomContextSubmenu>& CustomContextSubMenusField() { return *GetNativePointerField<TArray<FCustomContextSubmenu>*>(this, "UPrimalItem.CustomContextSubMenus"); }
	TArray<FCustomContextMenuData>& CustomContextOptionDataField() { return *GetNativePointerField<TArray<FCustomContextMenuData>*>(this, "UPrimalItem.CustomContextOptionData"); }
	bool& bPreventModifyArmorValueField() { return *GetNativePointerField<bool*>(this, "UPrimalItem.bPreventModifyArmorValue"); }
	bool& bUseBPOnLocalUseField() { return *GetNativePointerField<bool*>(this, "UPrimalItem.bUseBPOnLocalUse"); }

	// Functions

	void AddAttachments(AActor * UseOtherActor, bool bDontRemoveBeforeAttaching, USkeletalMeshComponent * Saddle, bool bRefreshDefaultAttachments, bool isShieldSpecificRefresh, bool bIsFromUpdateItem) { NativeCall<void, AActor *, bool, USkeletalMeshComponent *, bool, bool, bool>(this, "UPrimalItem.AddAttachments", UseOtherActor, bDontRemoveBeforeAttaching, Saddle, bRefreshDefaultAttachments, isShieldSpecificRefresh, bIsFromUpdateItem); }
	void AddItemDurability(float durabilityToAdd) { NativeCall<void, float>(this, "UPrimalItem.AddItemDurability", durabilityToAdd); }
	void AddToArkTributeInvenroty(UPrimalInventoryComponent * toInventory, bool bFromLoad) { NativeCall<void, UPrimalInventoryComponent *, bool>(this, "UPrimalItem.AddToArkTributeInvenroty", toInventory, bFromLoad); }
	void AddToInventory(UPrimalInventoryComponent * toInventory, bool bEquipItem, bool AddToSlotItems, FItemNetID * InventoryInsertAfterItemID, bool bShowHUDNotification, bool bDontRecalcSpoilingTime, bool bIgnoreAbsoluteMaxInventory, bool bInsertAtItemIDIndexInstead) { NativeCall<void, UPrimalInventoryComponent *, bool, bool, FItemNetID *, bool, bool, bool, bool>(this, "UPrimalItem.AddToInventory", toInventory, bEquipItem, AddToSlotItems, InventoryInsertAfterItemID, bShowHUDNotification, bDontRecalcSpoilingTime, bIgnoreAbsoluteMaxInventory, bInsertAtItemIDIndexInstead); }
	void AddToSlot(int theSlotIndex, bool bForce) { NativeCall<void, int, bool>(this, "UPrimalItem.AddToSlot", theSlotIndex, bForce); }
	void AddedToInventory() { NativeCall<void>(this, "UPrimalItem.AddedToInventory"); }
	bool AllowEquipItem(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.AllowEquipItem", toInventory); }
	bool AllowInventoryItem(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.AllowInventoryItem", toInventory); }
	bool AllowRemoteAddToInventory(UPrimalInventoryComponent * invComp, AShooterPlayerController * ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent *, AShooterPlayerController *, bool>(this, "UPrimalItem.AllowRemoteAddToInventory", invComp, ByPC, bRequestedByPlayer); }
	bool AllowSlotting(UPrimalInventoryComponent * toInventory, bool bForce) { return NativeCall<bool, UPrimalInventoryComponent *, bool>(this, "UPrimalItem.AllowSlotting", toInventory, bForce); }
	bool AllowUseInInventory(bool bIsRemoteInventory, AShooterPlayerController * ByPC, bool DontCheckActor) { return NativeCall<bool, bool, AShooterPlayerController *, bool>(this, "UPrimalItem.AllowUseInInventory", bIsRemoteInventory, ByPC, DontCheckActor); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "UPrimalItem.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, float, const UAnimNotifyState *>(this, "UPrimalItem.AnimNotifyCustomState_Begin", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotifyState *>(this, "UPrimalItem.AnimNotifyCustomState_End", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void ApplyColorsFromStructure(APrimalStructure * theStructure) { NativeCall<void, APrimalStructure *>(this, "UPrimalItem.ApplyColorsFromStructure", theStructure); }
	void ApplyColorsToMesh(UMeshComponent * mComp) { NativeCall<void, UMeshComponent *>(this, "UPrimalItem.ApplyColorsToMesh", mComp); }
	static void BPBreakItemID(FItemNetID ItemNetID, int * TheItemID1, int * TheItemID2) { NativeCall<void, FItemNetID, int *, int *>(nullptr, "UPrimalItem.BPBreakItemID", ItemNetID, TheItemID1, TheItemID2); }
	void BPGetItemID(int * ItemID1, int * ItemID2) { NativeCall<void, int *, int *>(this, "UPrimalItem.BPGetItemID", ItemID1, ItemID2); }
	float BPGetItemStatModifier(int idx, int ItemStatValue) { return NativeCall<float, int, int>(this, "UPrimalItem.BPGetItemStatModifier", idx, ItemStatValue); }
	int BPGetItemStatRandomValue(float QualityLevel, int idx) { return NativeCall<int, float, int>(this, "UPrimalItem.BPGetItemStatRandomValue", QualityLevel, idx); }
	static FItemNetID BPMakeItemID(int TheItemID1, int TheItemID2) { return NativeCall<FItemNetID, int, int>(nullptr, "UPrimalItem.BPMakeItemID", TheItemID1, TheItemID2); }
	bool BPMatchesItemID(int ItemID1, int ItemID2) { return NativeCall<bool, int, int>(this, "UPrimalItem.BPMatchesItemID", ItemID1, ItemID2); }
	void BPSetWeaponClipAmmo(int NewClipAmmo) { NativeCall<void, int>(this, "UPrimalItem.BPSetWeaponClipAmmo", NewClipAmmo); }
	void BeginDestroy() { NativeCall<void>(this, "UPrimalItem.BeginDestroy"); }
	void CacheFolderPath() { NativeCall<void>(this, "UPrimalItem.CacheFolderPath"); }
	void CalcRecipeStats() { NativeCall<void>(this, "UPrimalItem.CalcRecipeStats"); }
	bool CanBeArkTributeItem() { return NativeCall<bool>(this, "UPrimalItem.CanBeArkTributeItem"); }
	bool CanCraft() { return NativeCall<bool>(this, "UPrimalItem.CanCraft"); }
	bool CanCraftInInventory(UPrimalInventoryComponent * invComp) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.CanCraftInInventory", invComp); }
	bool CanDrop() { return NativeCall<bool>(this, "UPrimalItem.CanDrop"); }
	bool CanEquipWeapon() { return NativeCall<bool>(this, "UPrimalItem.CanEquipWeapon"); }
	bool CanFullyCraft() { return NativeCall<bool>(this, "UPrimalItem.CanFullyCraft"); }
	bool CanRepair(bool bIgnoreInventoryRequirement) { return NativeCall<bool, bool>(this, "UPrimalItem.CanRepair", bIgnoreInventoryRequirement); }
	bool CanRepairInInventory(UPrimalInventoryComponent * invComp) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.CanRepairInInventory", invComp); }
	bool CanSpawnOverWater(AActor * ownerActor, FTransform * SpawnTransform) { return NativeCall<bool, AActor *, FTransform *>(this, "UPrimalItem.CanSpawnOverWater", ownerActor, SpawnTransform); }
	bool CanSpoil() { return NativeCall<bool>(this, "UPrimalItem.CanSpoil"); }
	bool CanStackWithItem(UPrimalItem * otherItem, int * QuantityOverride) { return NativeCall<bool, UPrimalItem *, int *>(this, "UPrimalItem.CanStackWithItem", otherItem, QuantityOverride); }
	bool CanUse(bool bIgnoreCooldown) { return NativeCall<bool, bool>(this, "UPrimalItem.CanUse", bIgnoreCooldown); }
	bool CanUseWithItemDestination(UPrimalItem * SourceItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalItem.CanUseWithItemDestination", SourceItem); }
	bool CanUseWithItemSource(UPrimalItem * DestinationItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalItem.CanUseWithItemSource", DestinationItem); }
	bool CheckAutoCraftBlueprint() { return NativeCall<bool>(this, "UPrimalItem.CheckAutoCraftBlueprint"); }
	bool CheckForInventoryDupes() { return NativeCall<bool>(this, "UPrimalItem.CheckForInventoryDupes"); }
	void ClampStats(UPrimalInventoryComponent * inventory) { NativeCall<void, UPrimalInventoryComponent *>(this, "UPrimalItem.ClampStats", inventory); }
	void ClearItemIcon() { NativeCall<void>(this, "UPrimalItem.ClearItemIcon"); }
	void ClientHandleItemNetExecCommand(FName CommandName, const FBPNetExecParams * ExecParams, AShooterPlayerController * ForPC) { NativeCall<void, FName, const FBPNetExecParams *, AShooterPlayerController *>(this, "UPrimalItem.ClientHandleItemNetExecCommand", CommandName, ExecParams, ForPC); }
	void ConsumeCraftingRequirementsPercent(UPrimalInventoryComponent * invComp, float Percent) { NativeCall<void, UPrimalInventoryComponent *, float>(this, "UPrimalItem.ConsumeCraftingRequirementsPercent", invComp, Percent); }
	void CraftBlueprint(bool bConsumeResources) { NativeCall<void, bool>(this, "UPrimalItem.CraftBlueprint", bConsumeResources); }
	void Crafted_Implementation(bool bWasCraftedFromEngram) { NativeCall<void, bool>(this, "UPrimalItem.Crafted_Implementation", bWasCraftedFromEngram); }
	bool DoesItemUseColorRegion(int RegionIndex) { return NativeCall<bool, int>(this, "UPrimalItem.DoesItemUseColorRegion", RegionIndex); }
	void EquipAnimationFinished() { NativeCall<void>(this, "UPrimalItem.EquipAnimationFinished"); }
	void EquippedItem() { NativeCall<void>(this, "UPrimalItem.EquippedItem"); }
	void EquippedTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItem.EquippedTick", DeltaSeconds); }
	void EquippedWeapon() { NativeCall<void>(this, "UPrimalItem.EquippedWeapon"); }
	void FinishRepairing() { NativeCall<void>(this, "UPrimalItem.FinishRepairing"); }
	static void GenerateItemID(FItemNetID * TheItemID) { NativeCall<void, FItemNetID *>(nullptr, "UPrimalItem.GenerateItemID", TheItemID); }
	TEnumAsByte<enum EPrimalEquipmentType::Type> * GetActualEquipmentType(TEnumAsByte<enum EPrimalEquipmentType::Type> * result, bool bGetBaseValue) { return NativeCall<TEnumAsByte<enum EPrimalEquipmentType::Type> *, TEnumAsByte<enum EPrimalEquipmentType::Type> *, bool>(this, "UPrimalItem.GetActualEquipmentType", result, bGetBaseValue); }
	int GetAttachedComponentsNum() { return NativeCall<int>(this, "UPrimalItem.GetAttachedComponentsNum"); }
	FLinearColor * GetColorForItemColorID(FLinearColor * result, int SetNum, int ID) { return NativeCall<FLinearColor *, FLinearColor *, int, int>(this, "UPrimalItem.GetColorForItemColorID", result, SetNum, ID); }
	FString * GetCraftRepairInvReqString(FString * result, int * ResultType, AShooterPlayerController * ForPC) { return NativeCall<FString *, FString *, int *, AShooterPlayerController *>(this, "UPrimalItem.GetCraftRepairInvReqString", result, ResultType, ForPC); }
	float GetCraftingPercent() { return NativeCall<float>(this, "UPrimalItem.GetCraftingPercent"); }
	TArray<FCraftingResourceRequirement> * GetCraftingRequirements(TArray<FCraftingResourceRequirement> * result, TArray<FCraftingResourceRequirement> * CombinedRequirements, float Percent) { return NativeCall<TArray<FCraftingResourceRequirement> *, TArray<FCraftingResourceRequirement> *, TArray<FCraftingResourceRequirement> *, float>(this, "UPrimalItem.GetCraftingRequirements", result, CombinedRequirements, Percent); }
	FString * GetCraftingRequirementsString(FString * result, UPrimalInventoryComponent * compareInventoryComp) { return NativeCall<FString *, FString *, UPrimalInventoryComponent *>(this, "UPrimalItem.GetCraftingRequirementsString", result, compareInventoryComp); }
	int GetCraftingResourceRequirement(int CraftingResourceIndex) { return NativeCall<int, int>(this, "UPrimalItem.GetCraftingResourceRequirement", CraftingResourceIndex); }
	bool GetCustomItemData(FName CustomDataName, FCustomItemData * OutData) { return NativeCall<bool, FName, FCustomItemData *>(this, "UPrimalItem.GetCustomItemData", CustomDataName, OutData); }
	FString * GetDisplayStringForContextMenuItem(FString * result, const FName * ContextItem) { return NativeCall<FString *, FString *, const FName *>(this, "UPrimalItem.GetDisplayStringForContextMenuItem", result, ContextItem); }
	float GetDurabilityPercentage() { return NativeCall<float>(this, "UPrimalItem.GetDurabilityPercentage"); }
	float GetEggHatchTimeRemaining(UWorld * theWorld, float additionalMultiplier) { return NativeCall<float, UWorld *, float>(this, "UPrimalItem.GetEggHatchTimeRemaining", theWorld, additionalMultiplier); }
	int GetEngramRequirementLevel() { return NativeCall<int>(this, "UPrimalItem.GetEngramRequirementLevel"); }
	FString * GetEntryDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetEntryDescription", result); }
	FString * GetEntryString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetEntryString", result); }
	int GetExplicitEntryIndexType(bool bGetBaseValue) { return NativeCall<int, bool>(this, "UPrimalItem.GetExplicitEntryIndexType", bGetBaseValue); }
	FString * GetInventoryIconDisplayText_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetInventoryIconDisplayText_Implementation", result); }
	void GetItemAttachmentInfos(AActor * OwnerActor) { NativeCall<void, AActor *>(this, "UPrimalItem.GetItemAttachmentInfos", OwnerActor); }
	void GetItemBytes(TArray<unsigned char> * Bytes) { NativeCall<void, TArray<unsigned char> *>(this, "UPrimalItem.GetItemBytes", Bytes); }
	int GetItemColorID(int theRegion) { return NativeCall<int, int>(this, "UPrimalItem.GetItemColorID", theRegion); }
	static int GetItemColorIDFromDyeItemID(int MasterItemListIndex) { return NativeCall<int, int>(nullptr, "UPrimalItem.GetItemColorIDFromDyeItemID", MasterItemListIndex); }
	bool GetItemCustomColor(int ColorRegion, FLinearColor * outColor) { return NativeCall<bool, int, FLinearColor *>(this, "UPrimalItem.GetItemCustomColor", ColorRegion, outColor); }
	FString * GetItemDescription(FString * result, bool bGetLongDescription, AShooterPlayerController * ForPC) { return NativeCall<FString *, FString *, bool, AShooterPlayerController *>(this, "UPrimalItem.GetItemDescription", result, bGetLongDescription, ForPC); }
	TArray<FLinearColor> * GetItemDyeColors(TArray<FLinearColor> * result) { return NativeCall<TArray<FLinearColor> *, TArray<FLinearColor> *>(this, "UPrimalItem.GetItemDyeColors", result); }
	FString * GetItemName(FString * result, bool bIncludeQuantity, bool bShortName, AShooterPlayerController * ForPC) { return NativeCall<FString *, FString *, bool, bool, AShooterPlayerController *>(this, "UPrimalItem.GetItemName", result, bIncludeQuantity, bShortName, ForPC); }
	FItemNetInfo * GetItemNetInfo(FItemNetInfo * result, bool bIsForSendingToClient) { return NativeCall<FItemNetInfo *, FItemNetInfo *, bool>(this, "UPrimalItem.GetItemNetInfo", result, bIsForSendingToClient); }
	FLinearColor * GetItemQualityColor(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "UPrimalItem.GetItemQualityColor", result); }
	int GetItemQuantity() { return NativeCall<int>(this, "UPrimalItem.GetItemQuantity"); }
	FString * GetItemShortName(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetItemShortName", result); }
	FItemStatInfo * GetItemStatInfo(FItemStatInfo * result, int idx) { return NativeCall<FItemStatInfo *, FItemStatInfo *, int>(this, "UPrimalItem.GetItemStatInfo", result, idx); }
	float GetItemStatModifier(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>(this, "UPrimalItem.GetItemStatModifier", statType); }
	FString * GetItemStatString(FString * result, EPrimalItemStat::Type statType) { return NativeCall<FString *, FString *, EPrimalItemStat::Type>(this, "UPrimalItem.GetItemStatString", result, statType); }
	int GetItemStatValues(int idx) { return NativeCall<int, int>(this, "UPrimalItem.GetItemStatValues", idx); }
	FString * GetItemStatsString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetItemStatsString", result); }
	FString * GetItemSubtypeString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetItemSubtypeString", result); }
	FString * GetItemTypeString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetItemTypeString", result); }
	float GetItemWeight(bool bJustOneQuantity, bool bForceNotBlueprintWeight) { return NativeCall<float, bool, bool>(this, "UPrimalItem.GetItemWeight", bJustOneQuantity, bForceNotBlueprintWeight); }
	FName * GetKeybindForContextMenuItem(FName * result, const FName * ContextItem) { return NativeCall<FName *, FName *, const FName *>(this, "UPrimalItem.GetKeybindForContextMenuItem", result, ContextItem); }
	int GetMaxItemQuantity(UObject * WorldContextObject) { return NativeCall<int, UObject *>(this, "UPrimalItem.GetMaxItemQuantity", WorldContextObject); }
	int GetMaximumAdditionalCrafting(UPrimalInventoryComponent * forComp, AShooterPlayerController * PC) { return NativeCall<int, UPrimalInventoryComponent *, AShooterPlayerController *>(this, "UPrimalItem.GetMaximumAdditionalCrafting", forComp, PC); }
	float GetMiscInfoFontScale() { return NativeCall<float>(this, "UPrimalItem.GetMiscInfoFontScale"); }
	FString * GetMiscInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetMiscInfoString", result); }
	AShooterCharacter * GetOwnerPlayer() { return NativeCall<AShooterCharacter *>(this, "UPrimalItem.GetOwnerPlayer"); }
	FString * GetPrimaryColorName(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetPrimaryColorName", result); }
	float GetRemainingCooldownTime() { return NativeCall<float>(this, "UPrimalItem.GetRemainingCooldownTime"); }
	float GetRepairingPercent() { return NativeCall<float>(this, "UPrimalItem.GetRepairingPercent"); }
	FString * GetRepairingRequirementsString(FString * result, UPrimalInventoryComponent * compareInventoryComp, bool bUseBaseRequeriments, float OverrideRepairPercent) { return NativeCall<FString *, FString *, UPrimalInventoryComponent *, bool, float>(this, "UPrimalItem.GetRepairingRequirementsString", result, compareInventoryComp, bUseBaseRequeriments, OverrideRepairPercent); }
	float GetSpoilingTime() { return NativeCall<float>(this, "UPrimalItem.GetSpoilingTime"); }
	float GetTimeForFullRepair() { return NativeCall<float>(this, "UPrimalItem.GetTimeForFullRepair"); }
	float GetTimeToCraftBlueprint() { return NativeCall<float>(this, "UPrimalItem.GetTimeToCraftBlueprint"); }
	float GetTimeUntilUploadAllowed(UWorld * theWorld) { return NativeCall<float, UWorld *>(this, "UPrimalItem.GetTimeUntilUploadAllowed", theWorld); }
	void GetUnreplicatedEggData(FUnreplicatedEggData * EggData) { NativeCall<void, FUnreplicatedEggData *>(this, "UPrimalItem.GetUnreplicatedEggData", EggData); }
	float GetUseItemAddCharacterStatusValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalItem.GetUseItemAddCharacterStatusValue", valueType); }
	int GetWeaponClipAmmo() { return NativeCall<int>(this, "UPrimalItem.GetWeaponClipAmmo"); }
	float GetWeaponTemplateDurabilityToConsumePerMeleeHit() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateDurabilityToConsumePerMeleeHit"); }
	float GetWeaponTemplateHarvestDamageMultiplier() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateHarvestDamageMultiplier"); }
	float GetWeaponTemplateMeleeDamageAmount() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateMeleeDamageAmount"); }
	UWorld * GetWorldHelper(UObject * WorldContextObject) { return NativeCall<UWorld *, UObject *>(this, "UPrimalItem.GetWorldHelper", WorldContextObject); }
	float HandleShieldDamageBlocking_Implementation(AShooterCharacter * ForShooterCharacter, float DamageIn, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, AShooterCharacter *, float, const FDamageEvent *, AController *, AActor *>(this, "UPrimalItem.HandleShieldDamageBlocking_Implementation", ForShooterCharacter, DamageIn, DamageEvent, EventInstigator, DamageCauser); }
	bool HasBuffToGiveOwnerWhenEquipped() { return NativeCall<bool>(this, "UPrimalItem.HasBuffToGiveOwnerWhenEquipped"); }
	bool HasCustomItemData(FName CustomDataName) { return NativeCall<bool, FName>(this, "UPrimalItem.HasCustomItemData", CustomDataName); }
	int IncrementItemQuantity(int amount, bool bReplicateToClient, bool bDontUpdateWeight, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool bIsFromCraftingConsumption) { return NativeCall<int, int, bool, bool, bool, bool, bool>(this, "UPrimalItem.IncrementItemQuantity", amount, bReplicateToClient, bDontUpdateWeight, bIsFromUseConsumption, bIsArkTributeItem, bIsFromCraftingConsumption); }
	void InitFromNetInfo(const FItemNetInfo * theInfo) { NativeCall<void, const FItemNetInfo *>(this, "UPrimalItem.InitFromNetInfo", theInfo); }
	void InitItemIcon() { NativeCall<void>(this, "UPrimalItem.InitItemIcon"); }
	void InitNewItem(float ItemQuality, UPrimalInventoryComponent * toInventory, float MaxItemDifficultyClamp, float MinRandomQuality) { NativeCall<void, float, UPrimalInventoryComponent *, float, float>(this, "UPrimalItem.InitNewItem", ItemQuality, toInventory, MaxItemDifficultyClamp, MinRandomQuality); }
	void InitializeItem(bool bForceReinit, UWorld * OptionalInitWorld) { NativeCall<void, bool, UWorld *>(this, "UPrimalItem.InitializeItem", bForceReinit, OptionalInitWorld); }
	void InventoryLoadedFromSaveGame() { NativeCall<void>(this, "UPrimalItem.InventoryLoadedFromSaveGame"); }
	void InventoryRefreshCheckItem() { NativeCall<void>(this, "UPrimalItem.InventoryRefreshCheckItem"); }
	bool IsActiveEventItem(UWorld * World) { return NativeCall<bool, UWorld *>(this, "UPrimalItem.IsActiveEventItem", World); }
	bool IsBlueprintDeprecated(UWorld * World) { return NativeCall<bool, UWorld *>(this, "UPrimalItem.IsBlueprintDeprecated", World); }
	bool IsBroken() { return NativeCall<bool>(this, "UPrimalItem.IsBroken"); }
	bool IsCooldownReadyForUse() { return NativeCall<bool>(this, "UPrimalItem.IsCooldownReadyForUse"); }
	bool IsDeprecated(UWorld * World) { return NativeCall<bool, UWorld *>(this, "UPrimalItem.IsDeprecated", World); }
	bool IsDyed() { return NativeCall<bool>(this, "UPrimalItem.IsDyed"); }
	bool IsOwnerInNoPainWater() { return NativeCall<bool>(this, "UPrimalItem.IsOwnerInNoPainWater"); }
	bool IsOwnerInWater() { return NativeCall<bool>(this, "UPrimalItem.IsOwnerInWater"); }
	bool IsReadyToUpload(UWorld * theWorld) { return NativeCall<bool, UWorld *>(this, "UPrimalItem.IsReadyToUpload", theWorld); }
	bool IsUsableConsumable() { return NativeCall<bool>(this, "UPrimalItem.IsUsableConsumable"); }
	bool IsValidForCrafting() { return NativeCall<bool>(this, "UPrimalItem.IsValidForCrafting"); }
	void LocalUse(AShooterPlayerController * ForPC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalItem.LocalUse", ForPC); }
	void LocalUseItemOntoItem(AShooterPlayerController * ForPC, UPrimalItem * DestinationItem) { NativeCall<void, AShooterPlayerController *, UPrimalItem *>(this, "UPrimalItem.LocalUseItemOntoItem", ForPC, DestinationItem); }
	static FString * MakeRepairingRequirementsString(FString * result, UPrimalInventoryComponent * compareInventoryComp, TArray<FCraftingResourceRequirement> InRepairingRequirements) { return NativeCall<FString *, FString *, UPrimalInventoryComponent *, TArray<FCraftingResourceRequirement>>(nullptr, "UPrimalItem.MakeRepairingRequirementsString", result, compareInventoryComp, InRepairingRequirements); }
	bool MeetBlueprintCraftingRequirements(UPrimalInventoryComponent * compareInventoryComp, int CraftAmountOverride, AShooterPlayerController * ForPlayer, bool bIsForCraftQueueAddition, bool bTestFullQueue) { return NativeCall<bool, UPrimalInventoryComponent *, int, AShooterPlayerController *, bool, bool>(this, "UPrimalItem.MeetBlueprintCraftingRequirements", compareInventoryComp, CraftAmountOverride, ForPlayer, bIsForCraftQueueAddition, bTestFullQueue); }
	bool MeetRepairingRequirements(UPrimalInventoryComponent * compareInventoryComp, bool bIsForCraftQueueAddition) { return NativeCall<bool, UPrimalInventoryComponent *, bool>(this, "UPrimalItem.MeetRepairingRequirements", compareInventoryComp, bIsForCraftQueueAddition); }
	static TArray<FCustomItemData> * MergeCustomItemDatas(TArray<FCustomItemData> * result, const TArray<FCustomItemData> * DataSet1, const TArray<FCustomItemData> * DataSet2) { return NativeCall<TArray<FCustomItemData> *, TArray<FCustomItemData> *, const TArray<FCustomItemData> *, const TArray<FCustomItemData> *>(nullptr, "UPrimalItem.MergeCustomItemDatas", result, DataSet1, DataSet2); }
	void NotifyEditText(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalItem.NotifyEditText", PC); }
	void OnVersionChange(bool * doDestroy, UWorld * World, AShooterGameMode * gameMode) { NativeCall<void, bool *, UWorld *, AShooterGameMode *>(this, "UPrimalItem.OnVersionChange", doDestroy, World, gameMode); }
	void OverrideItemRating(float rating) { NativeCall<void, float>(this, "UPrimalItem.OverrideItemRating", rating); }
	void PickupAlertDinos(AActor * groundItem) { NativeCall<void, AActor *>(this, "UPrimalItem.PickupAlertDinos", groundItem); }
	bool ProcessEditText(AShooterPlayerController * ForPC, const FString * TextToUse, bool __formal) { return NativeCall<bool, AShooterPlayerController *, const FString *, bool>(this, "UPrimalItem.ProcessEditText", ForPC, TextToUse, __formal); }
	void RecalcSpoilingTime(long double TimeSeconds, float SpoilPercent, UPrimalInventoryComponent * forComp) { NativeCall<void, long double, float, UPrimalInventoryComponent *>(this, "UPrimalItem.RecalcSpoilingTime", TimeSeconds, SpoilPercent, forComp); }
	void RefreshAttachments(bool bRefreshDefaultAttachments, bool isShieldSpecificRefresh, bool bIsFromUpdateItem) { NativeCall<void, bool, bool, bool>(this, "UPrimalItem.RefreshAttachments", bRefreshDefaultAttachments, isShieldSpecificRefresh, bIsFromUpdateItem); }
	void RemoveAttachments(AActor * UseOtherActor, bool bRefreshDefaultAttachments, bool isShieldSpecificRefresh) { NativeCall<void, AActor *, bool, bool>(this, "UPrimalItem.RemoveAttachments", UseOtherActor, bRefreshDefaultAttachments, isShieldSpecificRefresh); }
	void RemoveClipAmmo(bool bDontUpdateItem) { NativeCall<void, bool>(this, "UPrimalItem.RemoveClipAmmo", bDontUpdateItem); }
	void RemoveCustomItemData(FName CustomDataName) { NativeCall<void, FName>(this, "UPrimalItem.RemoveCustomItemData", CustomDataName); }
	void RemoveFromSlot(bool bForce) { NativeCall<void, bool>(this, "UPrimalItem.RemoveFromSlot", bForce); }
	void RemoveFromWorldItemMap() { NativeCall<void>(this, "UPrimalItem.RemoveFromWorldItemMap"); }
	bool RemoveItemFromArkTributeInventory() { return NativeCall<bool>(this, "UPrimalItem.RemoveItemFromArkTributeInventory"); }
	bool RemoveItemFromInventory(bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, bool, bool>(this, "UPrimalItem.RemoveItemFromInventory", bForceRemoval, showHUDMessage); }
	void RemoveWeaponAccessory() { NativeCall<void>(this, "UPrimalItem.RemoveWeaponAccessory"); }
	void RepairItem(bool bIgnoreInventoryRequirement, float UseNextRepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, bool, float, float>(this, "UPrimalItem.RepairItem", bIgnoreInventoryRequirement, UseNextRepairPercentage, RepairSpeedMultiplier); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UPrimalItem.Serialize", Ar); }
	void ServerHandleItemNetExecCommand(AShooterPlayerController * ForPC, FName CommandName, const FBPNetExecParams * ExecParams) { NativeCall<void, AShooterPlayerController *, FName, const FBPNetExecParams *>(this, "UPrimalItem.ServerHandleItemNetExecCommand", ForPC, CommandName, ExecParams); }
	void ServerRemoveItemSkin() { NativeCall<void>(this, "UPrimalItem.ServerRemoveItemSkin"); }
	void ServerRemoveItemSkinOnly() { NativeCall<void>(this, "UPrimalItem.ServerRemoveItemSkinOnly"); }
	void ServerRemoveWeaponAccessoryOnly() { NativeCall<void>(this, "UPrimalItem.ServerRemoveWeaponAccessoryOnly"); }
	void ServerSendItemExecCommandToEveryone(FName CommandName, const FBPNetExecParams * ExecParams, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy) { NativeCall<void, FName, const FBPNetExecParams *, bool, bool, bool>(this, "UPrimalItem.ServerSendItemExecCommandToEveryone", CommandName, ExecParams, bIsReliable, bForceSendToLocalPlayer, bIgnoreRelevancy); }
	void ServerSendItemExecCommandToPlayer(AShooterPlayerController * ToPC, FName CommandName, const FBPNetExecParams * ExecParams, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy) { NativeCall<void, AShooterPlayerController *, FName, const FBPNetExecParams *, bool, bool, bool>(this, "UPrimalItem.ServerSendItemExecCommandToPlayer", ToPC, CommandName, ExecParams, bIsReliable, bForceSendToLocalPlayer, bIgnoreRelevancy); }
	void SetAttachedMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "UPrimalItem.SetAttachedMeshesMaterialScalarParamValue", ParamName, Value); }
	void SetCustomItemData(const FCustomItemData * InData) { NativeCall<void, const FCustomItemData *>(this, "UPrimalItem.SetCustomItemData", InData); }
	void SetEngramBlueprint() { NativeCall<void>(this, "UPrimalItem.SetEngramBlueprint"); }
	void SetFirstPersonMasterPoseComponent(USkeletalMeshComponent * NewMasterPoseComponent) { NativeCall<void, USkeletalMeshComponent *>(this, "UPrimalItem.SetFirstPersonMasterPoseComponent", NewMasterPoseComponent); }
	void SetItemColors(TArray<int> ColorIDs) { NativeCall<void, TArray<int>>(this, "UPrimalItem.SetItemColors", ColorIDs); }
	void SetItemStatInfo(int idx, const FItemStatInfo * val) { NativeCall<void, int, const FItemStatInfo *>(this, "UPrimalItem.SetItemStatInfo", idx, val); }
	void SetItemStatValues(int idx, int val) { NativeCall<void, int, int>(this, "UPrimalItem.SetItemStatValues", idx, val); }
	void SetOwnerNoSee(bool bNoSee, bool bForceHideFirstPerson) { NativeCall<void, bool, bool>(this, "UPrimalItem.SetOwnerNoSee", bNoSee, bForceHideFirstPerson); }
	void SetQuantity(int NewQuantity, bool ShowHUDNotification) { NativeCall<void, int, bool>(this, "UPrimalItem.SetQuantity", NewQuantity, ShowHUDNotification); }
	void SetUnreplicatedEggData(const FUnreplicatedEggData * EggData) { NativeCall<void, const FUnreplicatedEggData *>(this, "UPrimalItem.SetUnreplicatedEggData", EggData); }
	static FLinearColor * StaticGetColorForItemColorID(FLinearColor * result, int ID) { return NativeCall<FLinearColor *, FLinearColor *, int>(nullptr, "UPrimalItem.StaticGetColorForItemColorID", result, ID); }
	static int StaticGetDinoColorSetIndexForItemColorID(int ID) { return NativeCall<int, int>(nullptr, "UPrimalItem.StaticGetDinoColorSetIndexForItemColorID", ID); }
	static bool StaticGetItemNameAndIcon(TSubclassOf<UPrimalItem> ItemType, FString * OutItemName, UTexture2D ** OutItemIcon, bool bShortName, AShooterPlayerController * ForPC) { return NativeCall<bool, TSubclassOf<UPrimalItem>, FString *, UTexture2D **, bool, AShooterPlayerController *>(nullptr, "UPrimalItem.StaticGetItemNameAndIcon", ItemType, OutItemName, OutItemIcon, bShortName, ForPC); }
	void StopCraftingRepairing(bool bCheckIfCraftingOrRepairing) { NativeCall<void, bool>(this, "UPrimalItem.StopCraftingRepairing", bCheckIfCraftingOrRepairing); }
	bool TestMeetsCraftingRequirementsPercent(UPrimalInventoryComponent * invComp, float Percent) { return NativeCall<bool, UPrimalInventoryComponent *, float>(this, "UPrimalItem.TestMeetsCraftingRequirementsPercent", invComp, Percent); }
	void TickCraftingItem(float DeltaTime, AShooterGameState * theGameState) { NativeCall<void, float, AShooterGameState *>(this, "UPrimalItem.TickCraftingItem", DeltaTime, theGameState); }
	void UnequipWeapon(bool bDelayedUnequip) { NativeCall<void, bool>(this, "UPrimalItem.UnequipWeapon", bDelayedUnequip); }
	void UnequippedItem() { NativeCall<void>(this, "UPrimalItem.UnequippedItem"); }
	void UnequippedWeapon() { NativeCall<void>(this, "UPrimalItem.UnequippedWeapon"); }
	void UpdatedItem(bool ResetUploadTime) { NativeCall<void, bool>(this, "UPrimalItem.UpdatedItem", ResetUploadTime); }
	void Use(bool bOverridePlayerInput) { NativeCall<void, bool>(this, "UPrimalItem.Use", bOverridePlayerInput); }
	bool UseItemOntoItem(UPrimalItem * DestinationItem, int AdditionalData) { return NativeCall<bool, UPrimalItem *, int>(this, "UPrimalItem.UseItemOntoItem", DestinationItem, AdditionalData); }
	void Used(UPrimalItem * DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem *, int>(this, "UPrimalItem.Used", DestinationItem, AdditionalData); }
	bool UsesDurability() { return NativeCall<bool>(this, "UPrimalItem.UsesDurability"); }
	unsigned __int16 calcResourceQuantityRequired(const TSubclassOf<UPrimalItem> itemType, const float baseRequiredAmount, UPrimalInventoryComponent * inventory, bool isCrafting) { return NativeCall<unsigned __int16, const TSubclassOf<UPrimalItem>, const float, UPrimalInventoryComponent *, bool>(this, "UPrimalItem.calcResourceQuantityRequired", itemType, baseRequiredAmount, inventory, isCrafting); }
	void ApplyingSkinOntoItem(UPrimalItem * ToOwnerItem, bool bIsFirstTime) { NativeCall<void, UPrimalItem *, bool>(this, "UPrimalItem.ApplyingSkinOntoItem", ToOwnerItem, bIsFirstTime); }
	void BPAddedAttachments() { NativeCall<void>(this, "UPrimalItem.BPAddedAttachments"); }
	FString * BPAllowCrafting(FString * result, AShooterPlayerController * ForPC) { return NativeCall<FString *, FString *, AShooterPlayerController *>(this, "UPrimalItem.BPAllowCrafting", result, ForPC); }
	bool BPAllowRemoteAddToInventory(UPrimalInventoryComponent * invComp, AShooterPlayerController * ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent *, AShooterPlayerController *, bool>(this, "UPrimalItem.BPAllowRemoteAddToInventory", invComp, ByPC, bRequestedByPlayer); }
	bool BPAllowRemoteRemoveFromInventory(UPrimalInventoryComponent * invComp, AShooterPlayerController * ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent *, AShooterPlayerController *, bool>(this, "UPrimalItem.BPAllowRemoteRemoveFromInventory", invComp, ByPC, bRequestedByPlayer); }
	void BPAnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, float, const UAnimNotifyState *>(this, "UPrimalItem.BPAnimNotifyCustomState_Begin", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void BPAnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotifyState *>(this, "UPrimalItem.BPAnimNotifyCustomState_End", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	bool BPCanAddToInventory(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.BPCanAddToInventory", toInventory); }
	bool BPCanUse(bool bIgnoreCooldown) { return NativeCall<bool, bool>(this, "UPrimalItem.BPCanUse", bIgnoreCooldown); }
	void BPClientHandleItemNetExecCommand(FName CommandName, const FBPNetExecParams * ExecParams, AShooterPlayerController * ForPC) { NativeCall<void, FName, const FBPNetExecParams *, AShooterPlayerController *>(this, "UPrimalItem.BPClientHandleItemNetExecCommand", CommandName, ExecParams, ForPC); }
	bool BPConsumeProjectileImpact(AShooterProjectile * theProjectile, const FHitResult * HitResult) { return NativeCall<bool, AShooterProjectile *, const FHitResult *>(this, "UPrimalItem.BPConsumeProjectileImpact", theProjectile, HitResult); }
	void BPCrafted() { NativeCall<void>(this, "UPrimalItem.BPCrafted"); }
	void BPDrawItemIcon(UCanvas * ItemCanvas, const FVector2D * ItemCanvasSize, const FVector2D * ItemCanvasScale, bool bItemEnabled, const FLinearColor * TheTintColor) { NativeCall<void, UCanvas *, const FVector2D *, const FVector2D *, bool, const FLinearColor *>(this, "UPrimalItem.BPDrawItemIcon", ItemCanvas, ItemCanvasSize, ItemCanvasScale, bItemEnabled, TheTintColor); }
	void BPEquippedItemOnXPEarning(APrimalCharacter * forChar, float howMuchXP, EXPType::Type TheXPType) { NativeCall<void, APrimalCharacter *, float, EXPType::Type>(this, "UPrimalItem.BPEquippedItemOnXPEarning", forChar, howMuchXP, TheXPType); }
	bool BPForceAllowRemoteAddToInventory(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.BPForceAllowRemoteAddToInventory", toInventory); }
	float BPGetCustomAutoDecreaseDurabilityPerInterval() { return NativeCall<float>(this, "UPrimalItem.BPGetCustomAutoDecreaseDurabilityPerInterval"); }
	FString * BPGetCustomDurabilityText(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.BPGetCustomDurabilityText", result); }
	FColor * BPGetCustomDurabilityTextColor(FColor * result) { return NativeCall<FColor *, FColor *>(this, "UPrimalItem.BPGetCustomDurabilityTextColor", result); }
	FString * BPGetCustomInventoryWidgetText(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.BPGetCustomInventoryWidgetText", result); }
	FColor * BPGetCustomInventoryWidgetTextColor(FColor * result) { return NativeCall<FColor *, FColor *>(this, "UPrimalItem.BPGetCustomInventoryWidgetTextColor", result); }
	UParticleSystem * BPGetFuelParticleSystemOverride(APrimalStructure * ForStructure) { return NativeCall<UParticleSystem *, APrimalStructure *>(this, "UPrimalItem.BPGetFuelParticleSystemOverride", ForStructure); }
	FString * BPGetItemDescription(FString * result, const FString * InDescription, bool bGetLongDescription, AShooterPlayerController * ForPC) { return NativeCall<FString *, FString *, const FString *, bool, AShooterPlayerController *>(this, "UPrimalItem.BPGetItemDescription", result, InDescription, bGetLongDescription, ForPC); }
	float BPGetItemDurabilityPercentage() { return NativeCall<float>(this, "UPrimalItem.BPGetItemDurabilityPercentage"); }
	FString * BPGetItemName(FString * result, const FString * ItemNameIn, AShooterPlayerController * ForPC) { return NativeCall<FString *, FString *, const FString *, AShooterPlayerController *>(this, "UPrimalItem.BPGetItemName", result, ItemNameIn, ForPC); }
	void BPGetItemNetInfo() { NativeCall<void>(this, "UPrimalItem.BPGetItemNetInfo"); }
	int BPGetMaxAmmo() { return NativeCall<int>(this, "UPrimalItem.BPGetMaxAmmo"); }
	FString * BPGetSkinnedCustomInventoryWidgetText(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.BPGetSkinnedCustomInventoryWidgetText", result); }
	void BPInitFromItemNetInfo() { NativeCall<void>(this, "UPrimalItem.BPInitFromItemNetInfo"); }
	void BPInitIconMaterial() { NativeCall<void>(this, "UPrimalItem.BPInitIconMaterial"); }
	void BPInitItemColors(TArray<int> * ColorIDs) { NativeCall<void, TArray<int> *>(this, "UPrimalItem.BPInitItemColors", ColorIDs); }
	bool BPIsValidForCrafting() { return NativeCall<bool>(this, "UPrimalItem.BPIsValidForCrafting"); }
	void BPItemBelowDurabilityThreshold() { NativeCall<void>(this, "UPrimalItem.BPItemBelowDurabilityThreshold"); }
	void BPItemBroken() { NativeCall<void>(this, "UPrimalItem.BPItemBroken"); }
	void BPNotifyDropped(APrimalCharacter * FromCharacter, bool bWasThrown) { NativeCall<void, APrimalCharacter *, bool>(this, "UPrimalItem.BPNotifyDropped", FromCharacter, bWasThrown); }
	void BPOnItemConsumed(UPrimalInventoryComponent * inventory, int remainingQuantity) { NativeCall<void, UPrimalInventoryComponent *, int>(this, "UPrimalItem.BPOnItemConsumed", inventory, remainingQuantity); }
	void BPOnLocalUse(AShooterCharacter * ForCharacter) { NativeCall<void, AShooterCharacter *>(this, "UPrimalItem.BPOnLocalUse", ForCharacter); }
	void BPOverrideCraftingConsumption(int AmountToConsume) { NativeCall<void, int>(this, "UPrimalItem.BPOverrideCraftingConsumption", AmountToConsume); }
	void BPPostAddBuffToGiveOwnerCharacter(APrimalCharacter * OwnerCharacter, APrimalBuff * Buff) { NativeCall<void, APrimalCharacter *, APrimalBuff *>(this, "UPrimalItem.BPPostAddBuffToGiveOwnerCharacter", OwnerCharacter, Buff); }
	void BPPostInitializeItem(UWorld * OptionalInitWorld) { NativeCall<void, UWorld *>(this, "UPrimalItem.BPPostInitializeItem", OptionalInitWorld); }
	void BPPreInitializeItem(UWorld * OptionalInitWorld) { NativeCall<void, UWorld *>(this, "UPrimalItem.BPPreInitializeItem", OptionalInitWorld); }
	void BPPreUseItem() { NativeCall<void>(this, "UPrimalItem.BPPreUseItem"); }
	bool BPPreventEquip(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.BPPreventEquip", toInventory); }
	bool BPPreventUpload() { return NativeCall<bool>(this, "UPrimalItem.BPPreventUpload"); }
	bool BPPreventUseOntoItem(UPrimalItem * DestinationItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalItem.BPPreventUseOntoItem", DestinationItem); }
	bool BPPreventWeaponEquip() { return NativeCall<bool>(this, "UPrimalItem.BPPreventWeaponEquip"); }
	bool BPProcessEditText(AShooterPlayerController * ForPC, const FString * TextToUse) { return NativeCall<bool, AShooterPlayerController *, const FString *>(this, "UPrimalItem.BPProcessEditText", ForPC, TextToUse); }
	void BPServerHandleItemNetExecCommand(AShooterPlayerController * ForPC, FName CommandName, const FBPNetExecParams * ExecParams) { NativeCall<void, AShooterPlayerController *, FName, const FBPNetExecParams *>(this, "UPrimalItem.BPServerHandleItemNetExecCommand", ForPC, CommandName, ExecParams); }
	void BPServerVerifyStructurePlacementData() { NativeCall<void>(this, "UPrimalItem.BPServerVerifyStructurePlacementData"); }
	void BPSetupHUDIconMaterial(UMaterialInstanceDynamic * theMID) { NativeCall<void, UMaterialInstanceDynamic *>(this, "UPrimalItem.BPSetupHUDIconMaterial", theMID); }
	bool BPSupportUseOntoItem(UPrimalItem * DestinationItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalItem.BPSupportUseOntoItem", DestinationItem); }
	void BPTributeItemDownloaded(UObject * ContextObject) { NativeCall<void, UObject *>(this, "UPrimalItem.BPTributeItemDownloaded", ContextObject); }
	void BPTributeItemUploaded(UObject * ContextObject) { NativeCall<void, UObject *>(this, "UPrimalItem.BPTributeItemUploaded", ContextObject); }
	void BPUsedOntoItem(UPrimalItem * DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem *, int>(this, "UPrimalItem.BPUsedOntoItem", DestinationItem, AdditionalData); }
	void BlueprintEquipped(bool bIsFromSaveGame) { NativeCall<void, bool>(this, "UPrimalItem.BlueprintEquipped", bIsFromSaveGame); }
	void BlueprintOwnerPosssessed(AController * PossessedByController) { NativeCall<void, AController *>(this, "UPrimalItem.BlueprintOwnerPosssessed", PossessedByController); }
	void BlueprintUnequipped() { NativeCall<void>(this, "UPrimalItem.BlueprintUnequipped"); }
	void BlueprintUsed() { NativeCall<void>(this, "UPrimalItem.BlueprintUsed"); }
	void ClientUpdatedWeaponClipAmmo() { NativeCall<void>(this, "UPrimalItem.ClientUpdatedWeaponClipAmmo"); }
	void Crafted(bool bWasCraftedFromEngram) { NativeCall<void, bool>(this, "UPrimalItem.Crafted", bWasCraftedFromEngram); }
	void EquippedBlueprintTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItem.EquippedBlueprintTick", DeltaSeconds); }
	FString * GetInventoryIconDisplayText(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetInventoryIconDisplayText", result); }
	float HandleShieldDamageBlocking(AShooterCharacter * ForShooterCharacter, float DamageIn, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, AShooterCharacter *, float, const FDamageEvent *, AController *, AActor *>(this, "UPrimalItem.HandleShieldDamageBlocking", ForShooterCharacter, DamageIn, DamageEvent, EventInstigator, DamageCauser); }
	bool IsCustomContextMenuItemEnabled(const FName * ContextItem) { return NativeCall<bool, const FName *>(this, "UPrimalItem.IsCustomContextMenuItemEnabled", ContextItem); }
	void RemovedSkinFromItem(UPrimalItem * FromOwnerItem, bool bIsFirstTime) { NativeCall<void, UPrimalItem *, bool>(this, "UPrimalItem.RemovedSkinFromItem", FromOwnerItem, bIsFirstTime); }
	void SelectedCustomContextMenuItem(const FName * ContextItem, AShooterPlayerController * ForPC) { NativeCall<void, const FName *, AShooterPlayerController *>(this, "UPrimalItem.SelectedCustomContextMenuItem", ContextItem, ForPC); }
	void ServerUpdatedWeaponClipAmmo() { NativeCall<void>(this, "UPrimalItem.ServerUpdatedWeaponClipAmmo"); }
	void SkinEquippedBlueprintTick(UPrimalItem * OwnerItem, float DeltaSeconds) { NativeCall<void, UPrimalItem *, float>(this, "UPrimalItem.SkinEquippedBlueprintTick", OwnerItem, DeltaSeconds); }
	void SlottedTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItem.SlottedTick", DeltaSeconds); }
};

