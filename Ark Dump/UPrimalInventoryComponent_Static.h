#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UPrimalItem.h"
#include "FCraftingResourceRequirement.h"
#include "APrimalStructureItemContainer.h"
#include "FSupplyCrateItemSet.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"
#include "FItemNetInfo.h"
#include "FColor.h"

struct UPrimalInventoryComponent : UActorComponent
{
	char __padding[0x4b8L];
	TArray<TWeakObjectPtr<AShooterPlayerController>>& RemoteViewingInventoryPlayerControllersField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterPlayerController>>*>(this, "UPrimalInventoryComponent.RemoteViewingInventoryPlayerControllers"); }
	TArray<FItemCraftQueueEntry>& ItemCraftQueueEntriesField() { return *GetNativePointerField<TArray<FItemCraftQueueEntry>*>(this, "UPrimalInventoryComponent.ItemCraftQueueEntries"); }
	int& OverrideInventoryDefaultTabField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.OverrideInventoryDefaultTab"); }
	TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>>& EquippableItemTypesField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>>*>(this, "UPrimalInventoryComponent.EquippableItemTypes"); }
	float& CraftingItemSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.CraftingItemSpeed"); }
	TArray<FItemMultiplier>& ItemSpoilingTimeMultipliersField() { return *GetNativePointerField<TArray<FItemMultiplier>*>(this, "UPrimalInventoryComponent.ItemSpoilingTimeMultipliers"); }
	UGenericDataListEntry * ExtraItemDisplayField() { return GetNativePointerField<UGenericDataListEntry *>(this, "UPrimalInventoryComponent.ExtraItemDisplay"); }
	int& MaxInventoryItemsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.MaxInventoryItems"); }
	float& MaxInventoryWeightField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxInventoryWeight"); }
	char& TribeGroupInventoryRankField() { return *GetNativePointerField<char*>(this, "UPrimalInventoryComponent.TribeGroupInventoryRank"); }
	int& NumSlotsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.NumSlots"); }
	int& MaxItemCraftQueueEntriesField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.MaxItemCraftQueueEntries"); }
	FString& RemoteInventoryDescriptionStringField() { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent.RemoteInventoryDescriptionString"); }
	TArray<FString>& DefaultInventoryItemsRandomCustomStringsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalInventoryComponent.DefaultInventoryItemsRandomCustomStrings"); }
	TArray<float>& DefaultInventoryItemsRandomCustomStringsWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalInventoryComponent.DefaultInventoryItemsRandomCustomStringsWeights"); }
	TArray<FItemSpawnActorClassOverride>& ItemSpawnActorClassOverridesField() { return *GetNativePointerField<TArray<FItemSpawnActorClassOverride>*>(this, "UPrimalInventoryComponent.ItemSpawnActorClassOverrides"); }
	TArray<unsigned char>& DefaultEngramsField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalInventoryComponent.DefaultEngrams"); }
	TArray<unsigned char>& DefaultEngrams2Field() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalInventoryComponent.DefaultEngrams2"); }
	TArray<unsigned char>& DefaultEngrams3Field() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalInventoryComponent.DefaultEngrams3"); }
	TArray<unsigned char>& DefaultEngrams4Field() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalInventoryComponent.DefaultEngrams4"); }
	TArray<float>& DefaultInventoryQualitiesField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalInventoryComponent.DefaultInventoryQualities"); }
	FString& InventoryNameOverrideField() { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent.InventoryNameOverride"); }
	float& MaxRemoteInventoryViewingDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxRemoteInventoryViewingDistance"); }
	float& ActiveInventoryRefreshIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.ActiveInventoryRefreshInterval"); }
	int& AbsoluteMaxInventoryItemsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.AbsoluteMaxInventoryItems"); }
	long double& LastInventoryRefreshTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalInventoryComponent.LastInventoryRefreshTime"); }
	FRotator& DropItemRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "UPrimalInventoryComponent.DropItemRotationOffset"); }
	TArray<FItemCraftingConsumptionReplenishment>& ItemCraftingConsumptionReplenishmentsField() { return *GetNativePointerField<TArray<FItemCraftingConsumptionReplenishment>*>(this, "UPrimalInventoryComponent.ItemCraftingConsumptionReplenishments"); }
	float& MaxItemCooldownTimeClearField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxItemCooldownTimeClear"); }
	TArray<FItemMultiplier>& MaxItemTemplateQuantitiesField() { return *GetNativePointerField<TArray<FItemMultiplier>*>(this, "UPrimalInventoryComponent.MaxItemTemplateQuantities"); }
	TArray<FActorClassAttachmentInfo>& WeaponAsEquipmentAttachmentInfosField() { return *GetNativePointerField<TArray<FActorClassAttachmentInfo>*>(this, "UPrimalInventoryComponent.WeaponAsEquipmentAttachmentInfos"); }
	int& DisplayDefaultItemInventoryCountField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.DisplayDefaultItemInventoryCount"); }
	bool& bHasBeenRegisteredField() { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent.bHasBeenRegistered"); }
	TArray<double>& LastUsedItemTimesField() { return *GetNativePointerField<TArray<double>*>(this, "UPrimalInventoryComponent.LastUsedItemTimes"); }
	int& InvUpdatedFrameField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.InvUpdatedFrame"); }
	long double& LastRefreshCheckItemTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalInventoryComponent.LastRefreshCheckItemTime"); }
	bool& bLastPreventUseItemSpoilingTimeMultipliersField() { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent.bLastPreventUseItemSpoilingTimeMultipliers"); }
	FItemNetID& NextItemSpoilingIDField() { return *GetNativePointerField<FItemNetID*>(this, "UPrimalInventoryComponent.NextItemSpoilingID"); }
	FItemNetID& NextItemConsumptionIDField() { return *GetNativePointerField<FItemNetID*>(this, "UPrimalInventoryComponent.NextItemConsumptionID"); }
	float& MinItemSetsField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MinItemSets"); }
	float& MaxItemSetsField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxItemSets"); }
	float& NumItemSetsPowerField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.NumItemSetsPower"); }
	TArray<FSupplyCrateItemSet>& ItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet>*>(this, "UPrimalInventoryComponent.ItemSets"); }
	TArray<FSupplyCrateItemSet>& AdditionalItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet>*>(this, "UPrimalInventoryComponent.AdditionalItemSets"); }
	TSubclassOf<UPrimalSupplyCrateItemSets>& ItemSetsOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalSupplyCrateItemSets>*>(this, "UPrimalInventoryComponent.ItemSetsOverride"); }
	TArray<float>& SetQuantityWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalInventoryComponent.SetQuantityWeights"); }
	TArray<float>& SetQuantityValuesField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalInventoryComponent.SetQuantityValues"); }
	float& MaxInventoryAccessDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxInventoryAccessDistance"); }
	TArray<FServerCustomFolder>& CustomFolderItemsField() { return *GetNativePointerField<TArray<FServerCustomFolder>*>(this, "UPrimalInventoryComponent.CustomFolderItems"); }
	TArray<FString>& ServerCustomFolderField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalInventoryComponent.ServerCustomFolder"); }
	TArray<FItemMultiplier>& ItemClassWeightMultipliersField() { return *GetNativePointerField<TArray<FItemMultiplier>*>(this, "UPrimalInventoryComponent.ItemClassWeightMultipliers"); }
	float& GenerateItemSetsQualityMultiplierMinField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.GenerateItemSetsQualityMultiplierMin"); }
	float& GenerateItemSetsQualityMultiplierMaxField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.GenerateItemSetsQualityMultiplierMax"); }
	float& DefaultCraftingRequirementsMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.DefaultCraftingRequirementsMultiplier"); }
	int& DefaultCraftingQuantityMultiplierField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.DefaultCraftingQuantityMultiplier"); }
	int& ActionWheelAccessInventoryPriorityField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.ActionWheelAccessInventoryPriority"); }
	int& SavedForceDefaultInventoryRefreshVersionField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.SavedForceDefaultInventoryRefreshVersion"); }
	int& ForceDefaultInventoryRefreshVersionField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.ForceDefaultInventoryRefreshVersion"); }
	long double& LastAddToCraftQueueSoundTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalInventoryComponent.LastAddToCraftQueueSoundTime"); }
	FString& ForceAddToFolderField() { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent.ForceAddToFolder"); }
	FVector& GroundDropTraceLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "UPrimalInventoryComponent.GroundDropTraceLocationOffset"); }
	TArray<FOverrideMultiuseButtonStyle>& MultiUseButtonStyleOverridesField() { return *GetNativePointerField<TArray<FOverrideMultiuseButtonStyle>*>(this, "UPrimalInventoryComponent.MultiUseButtonStyleOverrides"); }
	bool& bUseCustomSortingField() { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent.bUseCustomSorting"); }
	bool& bForceAllowCustomFoldersField() { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent.bForceAllowCustomFolders"); }

	// Functions

	void ActivePlayerInventoryTick(float DeltaTime) { NativeCall<void, float>(this, "UPrimalInventoryComponent.ActivePlayerInventoryTick", DeltaTime); }
	void AddArkTributeItem(const FItemNetInfo * theItemInfo, bool bFromLoad) { NativeCall<void, const FItemNetInfo *, bool>(this, "UPrimalInventoryComponent.AddArkTributeItem", theItemInfo, bFromLoad); }
	void AddCustomFolder(FString CFolder, int InventoryCompType) { NativeCall<void, FString, int>(this, "UPrimalInventoryComponent.AddCustomFolder", CFolder, InventoryCompType); }
	void AddItemCrafting(UPrimalItem * craftingItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.AddItemCrafting", craftingItem); }
	void AddToCraftQueue(UPrimalItem * anItem, AShooterPlayerController * ByPC, bool bIsRepair, bool bRepairIgnoreInventoryRequirement, float RepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, UPrimalItem *, AShooterPlayerController *, bool, bool, float, float>(this, "UPrimalInventoryComponent.AddToCraftQueue", anItem, ByPC, bIsRepair, bRepairIgnoreInventoryRequirement, RepairPercentage, RepairSpeedMultiplier); }
	bool AddToFolders(TArray<FString> * FoldersFound, UPrimalItem * anItem) { return NativeCall<bool, TArray<FString> *, UPrimalItem *>(this, "UPrimalInventoryComponent.AddToFolders", FoldersFound, anItem); }
	bool AllowAddInventoryItem(UPrimalItem * anItem, int * requestedQuantity, bool OnlyAddAll) { return NativeCall<bool, UPrimalItem *, int *, bool>(this, "UPrimalInventoryComponent.AllowAddInventoryItem", anItem, requestedQuantity, OnlyAddAll); }
	bool AllowAddInventoryItem_AnyQuantity(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.AllowAddInventoryItem_AnyQuantity", anItem); }
	bool AllowAddInventoryItem_MaxQuantity(UPrimalItem * anItem, const int * requestedQuantityIn, int * requestedQuantityOut) { return NativeCall<bool, UPrimalItem *, const int *, int *>(this, "UPrimalInventoryComponent.AllowAddInventoryItem_MaxQuantity", anItem, requestedQuantityIn, requestedQuantityOut); }
	bool AllowAddInventoryItem_OnlyAddAll(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.AllowAddInventoryItem_OnlyAddAll", anItem); }
	bool AllowAddingToArkTribute() { return NativeCall<bool>(this, "UPrimalInventoryComponent.AllowAddingToArkTribute"); }
	bool AllowBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.AllowBlueprintCraftingRequirement", ItemTemplate, ItemQuantity); }
	bool AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.AllowCraftingResourceConsumption", ItemTemplate, ItemQuantity); }
	bool AllowEquippingItemType(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.AllowEquippingItemType", equipmentType); }
	bool AllowOwnerStasis() { return NativeCall<bool>(this, "UPrimalInventoryComponent.AllowOwnerStasis"); }
	void BPDropInventoryDeposit(long double DestroyAtTime, int OverrideMaxItemsDropped, bool bOverrideCacheLocation, FVector CacheLocationOverride) { NativeCall<void, long double, int, bool, FVector>(this, "UPrimalInventoryComponent.BPDropInventoryDeposit", DestroyAtTime, OverrideMaxItemsDropped, bOverrideCacheLocation, CacheLocationOverride); }
	int BPIncrementItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, int amount, bool bReplicateToClient, bool bIsBlueprint, bool bRequireExactClassMatch, bool bIsCraftingResourceConsumption, bool bIsFromUseConsumption, bool bIsArkTributeItem, UPrimalItem * UseSpecificItem, bool bDontExceedMaxItems) { return NativeCall<int, TSubclassOf<UPrimalItem>, int, bool, bool, bool, bool, bool, bool, UPrimalItem *, bool>(this, "UPrimalInventoryComponent.BPIncrementItemTemplateQuantity", ItemTemplate, amount, bReplicateToClient, bIsBlueprint, bRequireExactClassMatch, bIsCraftingResourceConsumption, bIsFromUseConsumption, bIsArkTributeItem, UseSpecificItem, bDontExceedMaxItems); }
	bool BPRemoteInventoryAllowAddItem(AShooterPlayerController * PC, UPrimalItem * anItem) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowAddItem", PC, anItem); }
	bool BPRemoteInventoryAllowAddItem_SpecificQuantity(AShooterPlayerController * PC, UPrimalItem * anItem, const int * SpecificQuantityIn, int * SpecificQuantityOut) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, const int *, int *>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowAddItem_SpecificQuantity", PC, anItem, SpecificQuantityIn, SpecificQuantityOut); }
	bool BPRemoteInventoryAllowAddItems(AShooterPlayerController * PC) { return NativeCall<bool, AShooterPlayerController *>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowAddItems", PC); }
	bool CanEquipItem(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.CanEquipItem", anItem); }
	bool CanEquipItems() { return NativeCall<bool>(this, "UPrimalInventoryComponent.CanEquipItems"); }
	bool CanInventoryItem(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.CanInventoryItem", anItem); }
	bool CanInventoryItems() { return NativeCall<bool>(this, "UPrimalInventoryComponent.CanInventoryItems"); }
	void CheckForAutoCraftBlueprints() { NativeCall<void>(this, "UPrimalInventoryComponent.CheckForAutoCraftBlueprints"); }
	void CheckRefreshDefaultInventoryItems() { NativeCall<void>(this, "UPrimalInventoryComponent.CheckRefreshDefaultInventoryItems"); }
	void CheckReplenishSlotIndex(int slotIndex, TSubclassOf<UPrimalItem> ClassCheckOverride) { NativeCall<void, int, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.CheckReplenishSlotIndex", slotIndex, ClassCheckOverride); }
	void ClearCraftQueue(bool bForceClearActiveCraftRepair) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClearCraftQueue", bForceClearActiveCraftRepair); }
	void ClientFinishReceivingItems(bool bEquippedItems) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientFinishReceivingItems", bEquippedItems); }
	void ClientItemMessageNotification_Implementation(FItemNetID ItemID, EPrimalItemMessage::Type ItemMessageType) { NativeCall<void, FItemNetID, EPrimalItemMessage::Type>(this, "UPrimalInventoryComponent.ClientItemMessageNotification_Implementation", ItemID, ItemMessageType); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController *, int, int>(this, "UPrimalInventoryComponent.ClientMultiUse", ForPC, UseIndex, hitBodyIndex); }
	void ClientOnArkTributeItemsAdded_Implementation() { NativeCall<void>(this, "UPrimalInventoryComponent.ClientOnArkTributeItemsAdded_Implementation"); }
	void ClientStartReceivingItems(bool bEquippedItems) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientStartReceivingItems", bEquippedItems); }
	void ClientUpdateFreeCraftingMode_Implementation(bool bNewFreeCraftingModeValue) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientUpdateFreeCraftingMode_Implementation", bNewFreeCraftingModeValue); }
	void ConsumeArmorDurability(float ConsumptionAmount, bool bAllArmorTypes, EPrimalEquipmentType::Type SpecificArmorType) { NativeCall<void, float, bool, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.ConsumeArmorDurability", ConsumptionAmount, bAllArmorTypes, SpecificArmorType); }
	bool ConsumeResources(const TArray<FCraftingResourceRequirement> * Resources) { return NativeCall<bool, const TArray<FCraftingResourceRequirement> *>(this, "UPrimalInventoryComponent.ConsumeResources", Resources); }
	void DeferredDeprecationCheck() { NativeCall<void>(this, "UPrimalInventoryComponent.DeferredDeprecationCheck"); }
	void DeleteItemFromCustomFolder(AShooterPlayerController * PC, FString CFolder, FItemNetID ItemId, int InventoryCompType) { NativeCall<void, AShooterPlayerController *, FString, FItemNetID, int>(this, "UPrimalInventoryComponent.DeleteItemFromCustomFolder", PC, CFolder, ItemId, InventoryCompType); }
	bool DropInventoryDeposit(long double DestroyAtTime, bool bDoPreventSendingData, bool bIgnorEquippedItems, TSubclassOf<APrimalStructureItemContainer> OverrideInventoryDepositClass, APrimalStructureItemContainer * CopyStructureValues, APrimalStructureItemContainer ** DepositStructureResult, AActor * GroundIgnoreActor, FString CurrentCustomFolderFilter, FString CurrentNameFilter, unsigned __int64 DeathCacheCharacterID, float DropInventoryOnGroundTraceDistance, bool bForceDrop, int OverrideMaxItemsDropped, bool bOverrideDepositLocation, const FVector * DepositLocationOverride, bool bForceLocation, bool bIncludeHotbarSlots) { return NativeCall<bool, long double, bool, bool, TSubclassOf<APrimalStructureItemContainer>, APrimalStructureItemContainer *, APrimalStructureItemContainer **, AActor *, FString, FString, unsigned __int64, float, bool, int, bool, const FVector *, bool, bool>(this, "UPrimalInventoryComponent.DropInventoryDeposit", DestroyAtTime, bDoPreventSendingData, bIgnorEquippedItems, OverrideInventoryDepositClass, CopyStructureValues, DepositStructureResult, GroundIgnoreActor, CurrentCustomFolderFilter, CurrentNameFilter, DeathCacheCharacterID, DropInventoryOnGroundTraceDistance, bForceDrop, OverrideMaxItemsDropped, bOverrideDepositLocation, DepositLocationOverride, bForceLocation, bIncludeHotbarSlots); }
	void DropItem(const FItemNetInfo * theInfo, bool bOverrideSpawnTransform, const FVector * LocationOverride, const FRotator * RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondryAction, bool bSetItemDropLocation) { NativeCall<void, const FItemNetInfo *, bool, const FVector *, const FRotator *, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.DropItem", theInfo, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondryAction, bSetItemDropLocation); }
	bool DropNotReadyInventoryDeposit(long double DestroyAtTime) { return NativeCall<bool, long double>(this, "UPrimalInventoryComponent.DropNotReadyInventoryDeposit", DestroyAtTime); }
	void FinishedLoadingArkItems() { NativeCall<void>(this, "UPrimalInventoryComponent.FinishedLoadingArkItems"); }
	bool GenerateCrateItems(float MinQualityMultiplier, float MaxQualityMultiplier, int NumPasses, float QuantityMultiplier, float SetPowerWeight, float MaxItemDifficultyClamp) { return NativeCall<bool, float, float, int, float, float, float>(this, "UPrimalInventoryComponent.GenerateCrateItems", MinQualityMultiplier, MaxQualityMultiplier, NumPasses, QuantityMultiplier, SetPowerWeight, MaxItemDifficultyClamp); }
	bool GenerateCustomCrateItems(TSubclassOf<UObject> SourceClass, TArray<FSupplyCrateItemSet> CustomItemSets, float CustomMinItemSets, float CustomMaxItemSets, float CustomNumItemSetsPower, bool bCustomSetsRandomWithoutReplacement, TArray<UPrimalItem *> * GeneratedItems, float MinQualityMultiplier, float MaxQualityMultiplier, int NumPasses, float QuantityMultiplier, float SetPowerWeight, float MaxItemDifficultyClamp, bool bIsMissionReward) { return NativeCall<bool, TSubclassOf<UObject>, TArray<FSupplyCrateItemSet>, float, float, float, bool, TArray<UPrimalItem *> *, float, float, int, float, float, float, bool>(this, "UPrimalInventoryComponent.GenerateCustomCrateItems", SourceClass, CustomItemSets, CustomMinItemSets, CustomMaxItemSets, CustomNumItemSetsPower, bCustomSetsRandomWithoutReplacement, GeneratedItems, MinQualityMultiplier, MaxQualityMultiplier, NumPasses, QuantityMultiplier, SetPowerWeight, MaxItemDifficultyClamp, bIsMissionReward); }
	int GetCraftQueueResourceCost(TSubclassOf<UPrimalItem> ItemTemplate, UPrimalItem * IgnoreFirstItem) { return NativeCall<int, TSubclassOf<UPrimalItem>, UPrimalItem *>(this, "UPrimalInventoryComponent.GetCraftQueueResourceCost", ItemTemplate, IgnoreFirstItem); }
	float GetCraftingSpeed() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetCraftingSpeed"); }
	int GetCurrentNumInventoryItems() { return NativeCall<int>(this, "UPrimalInventoryComponent.GetCurrentNumInventoryItems"); }
	void GetCustomFolderItems(FString CFolder, TArray<IDataListEntryInterface *> * OutDataListEntries, int InventoryCompType) { NativeCall<void, FString, TArray<IDataListEntryInterface *> *, int>(this, "UPrimalInventoryComponent.GetCustomFolderItems", CFolder, OutDataListEntries, InventoryCompType); }
	TArray<FString> * GetCustomFolders(TArray<FString> * result, int InventoryCompType) { return NativeCall<TArray<FString> *, TArray<FString> *, int>(this, "UPrimalInventoryComponent.GetCustomFolders", result, InventoryCompType); }
	float GetDamageTorpidityIncreaseMultiplierScale() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetDamageTorpidityIncreaseMultiplierScale"); }
	void GetDataListEntries(TArray<IDataListEntryInterface *> * OutDataListEntries, int DataListType, bool bCreateFolders, char FolderLevel, TArray<FString> * FoldersFound, UObject * ForObject, const wchar_t * CustomFolderFilter, char SortType, const wchar_t * NameFilter) { NativeCall<void, TArray<IDataListEntryInterface *> *, int, bool, char, TArray<FString> *, UObject *, const wchar_t *, char, const wchar_t *>(this, "UPrimalInventoryComponent.GetDataListEntries", OutDataListEntries, DataListType, bCreateFolders, FolderLevel, FoldersFound, ForObject, CustomFolderFilter, SortType, NameFilter); }
	float GetEquippedArmorRating(EPrimalEquipmentType::Type equipmentType) { return NativeCall<float, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.GetEquippedArmorRating", equipmentType); }
	int GetFirstUnoccupiedSlot(AShooterPlayerState * forPlayerState, UPrimalItem * forItem) { return NativeCall<int, AShooterPlayerState *, UPrimalItem *>(this, "UPrimalInventoryComponent.GetFirstUnoccupiedSlot", forPlayerState, forItem); }
	void GetGrinderSettings_Implementation(int * MaxQuantityToGrind, float * GrindGiveItemsPercent, int * MaxItemsToGivePerGrind) { NativeCall<void, int *, float *, int *>(this, "UPrimalInventoryComponent.GetGrinderSettings_Implementation", MaxQuantityToGrind, GrindGiveItemsPercent, MaxItemsToGivePerGrind); }
	bool GetGroundLocation(FVector * theGroundLoc, const FVector * OffsetUp, const FVector * OffsetDown, APrimalStructure ** LandedOnStructure, AActor * IgnoreActor, bool bCheckAnyStationary, UPrimitiveComponent ** LandedOnComponent, bool bUseInputGroundLocAsBase) { return NativeCall<bool, FVector *, const FVector *, const FVector *, APrimalStructure **, AActor *, bool, UPrimitiveComponent **, bool>(this, "UPrimalInventoryComponent.GetGroundLocation", theGroundLoc, OffsetUp, OffsetDown, LandedOnStructure, IgnoreActor, bCheckAnyStationary, LandedOnComponent, bUseInputGroundLocAsBase); }
	float GetIndirectTorpidityIncreaseMultiplierScale() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetIndirectTorpidityIncreaseMultiplierScale"); }
	FString * GetInventoryName(FString * result, bool bIsEquipped) { return NativeCall<FString *, FString *, bool>(this, "UPrimalInventoryComponent.GetInventoryName", result, bIsEquipped); }
	int GetInventoryUpdatedFrame() { return NativeCall<int>(this, "UPrimalInventoryComponent.GetInventoryUpdatedFrame"); }
	float GetInventoryWeight() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetInventoryWeight"); }
	int GetItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, UPrimalItem * IgnoreItem, bool bIgnoreBlueprints, bool bCheckValidForCrafting, bool bRequireExactClassMatch, bool bForceCheckForDupes) { return NativeCall<int, TSubclassOf<UPrimalItem>, UPrimalItem *, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.GetItemTemplateQuantity", ItemTemplate, IgnoreItem, bIgnoreBlueprints, bCheckValidForCrafting, bRequireExactClassMatch, bForceCheckForDupes); }
	float GetItemWeightMultiplier(UPrimalItem * anItem) { return NativeCall<float, UPrimalItem *>(this, "UPrimalInventoryComponent.GetItemWeightMultiplier", anItem); }
	long double GetLatestItemClassUseTime(TSubclassOf<UPrimalItem> ItemClass) { return NativeCall<long double, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.GetLatestItemClassUseTime", ItemClass); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UPrimalInventoryComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	AShooterHUD * GetLocalOwnerHUD() { return NativeCall<AShooterHUD *>(this, "UPrimalInventoryComponent.GetLocalOwnerHUD"); }
	int GetMaxInventoryItems(bool bIgnoreHiddenDefaultInventory) { return NativeCall<int, bool>(this, "UPrimalInventoryComponent.GetMaxInventoryItems", bIgnoreHiddenDefaultInventory); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *, int>(this, "UPrimalInventoryComponent.GetMultiUseEntries", ForPC, MultiUseEntries, hitBodyIndex); }
	AShooterPlayerController * GetOwnerController() { return NativeCall<AShooterPlayerController *>(this, "UPrimalInventoryComponent.GetOwnerController"); }
	ENetRole GetRole() { return NativeCall<ENetRole>(this, "UPrimalInventoryComponent.GetRole"); }
	float GetSpoilingTimeMultiplier(UPrimalItem * anItem) { return NativeCall<float, UPrimalItem *>(this, "UPrimalInventoryComponent.GetSpoilingTimeMultiplier", anItem); }
	float GetTotalDurabilityOfTemplate(TSubclassOf<UPrimalItem> ItemTemplate) { return NativeCall<float, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.GetTotalDurabilityOfTemplate", ItemTemplate); }
	float GetTotalEquippedItemStat(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>(this, "UPrimalInventoryComponent.GetTotalEquippedItemStat", statType); }
	void GiveInitialItems(bool SkipEngrams) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.GiveInitialItems", SkipEngrams); }
	void GrindItem(FItemNetID ItemID, const bool grindStack, AShooterPlayerController * PC) { NativeCall<void, FItemNetID, const bool, AShooterPlayerController *>(this, "UPrimalInventoryComponent.GrindItem", ItemID, grindStack, PC); }
	bool HasItemOfSameType(UClass * ItemClass) { return NativeCall<bool, UClass *>(this, "UPrimalInventoryComponent.HasItemOfSameType", ItemClass); }
	bool HasItemsEquipped(const TArray<TSubclassOf<UPrimalItem>> * ItemTemplates, bool bRequiresExactClassMatch, bool bOnlyArkItems, bool bEnsureAllItems) { return NativeCall<bool, const TArray<TSubclassOf<UPrimalItem>> *, bool, bool, bool>(this, "UPrimalInventoryComponent.HasItemsEquipped", ItemTemplates, bRequiresExactClassMatch, bOnlyArkItems, bEnsureAllItems); }
	bool HasResources(const TArray<FCraftingResourceRequirement> * RequiredResources) { return NativeCall<bool, const TArray<FCraftingResourceRequirement> *>(this, "UPrimalInventoryComponent.HasResources", RequiredResources); }
	bool IncrementArkTributeItemQuantity(UPrimalItem * NewItem, UPrimalItem ** IncrementedItem) { return NativeCall<bool, UPrimalItem *, UPrimalItem **>(this, "UPrimalInventoryComponent.IncrementArkTributeItemQuantity", NewItem, IncrementedItem); }
	int IncrementItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, int amount, bool bReplicateToClient, bool bIsBlueprint, UPrimalItem ** UseSpecificItem, UPrimalItem ** IncrementedItem, bool bRequireExactClassMatch, bool bIsCraftingResourceConsumption, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool ShowHUDNotification, bool bDontRecalcSpoilingTime, bool bDontExceedMaxItems) { return NativeCall<int, TSubclassOf<UPrimalItem>, int, bool, bool, UPrimalItem **, UPrimalItem **, bool, bool, bool, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.IncrementItemTemplateQuantity", ItemTemplate, amount, bReplicateToClient, bIsBlueprint, UseSpecificItem, IncrementedItem, bRequireExactClassMatch, bIsCraftingResourceConsumption, bIsFromUseConsumption, bIsArkTributeItem, ShowHUDNotification, bDontRecalcSpoilingTime, bDontExceedMaxItems); }
	void InitDefaultInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.InitDefaultInventory"); }
	void InitializeInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.InitializeInventory"); }
	void InventoryCustomFilter_Implementation(const TArray<UPrimalItem *> * UnfilteredItemsList, TArray<UPrimalItem *> * FilteredItemsList) { NativeCall<void, const TArray<UPrimalItem *> *, TArray<UPrimalItem *> *>(this, "UPrimalInventoryComponent.InventoryCustomFilter_Implementation", UnfilteredItemsList, FilteredItemsList); }
	void InventoryRefresh() { NativeCall<void>(this, "UPrimalInventoryComponent.InventoryRefresh"); }
	void InventoryViewersPlayLocalSound(USoundBase * aSound, bool bAttach) { NativeCall<void, USoundBase *, bool>(this, "UPrimalInventoryComponent.InventoryViewersPlayLocalSound", aSound, bAttach); }
	void InventoryViewersStopLocalSound(USoundBase * aSound) { NativeCall<void, USoundBase *>(this, "UPrimalInventoryComponent.InventoryViewersStopLocalSound", aSound); }
	bool IsAllowedInventoryAccess(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "UPrimalInventoryComponent.IsAllowedInventoryAccess", ForPC); }
	bool IsAtMaxInventoryItems() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsAtMaxInventoryItems"); }
	bool IsCraftingAllowed(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.IsCraftingAllowed", anItem); }
	bool IsLocal() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsLocal"); }
	bool IsLocalInventoryViewer() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsLocalInventoryViewer"); }
	bool IsLocalToPlayer(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "UPrimalInventoryComponent.IsLocalToPlayer", ForPC); }
	bool IsOwnedByPlayer() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsOwnedByPlayer"); }
	bool IsRepairingAllowed() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsRepairingAllowed"); }
	bool IsServerCustomFolder(int InventoryCompType) { return NativeCall<bool, int>(this, "UPrimalInventoryComponent.IsServerCustomFolder", InventoryCompType); }
	bool IsValidCraftingResource(UPrimalItem * theItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.IsValidCraftingResource", theItem); }
	bool LoadAdditionalStructureEngrams() { return NativeCall<bool>(this, "UPrimalInventoryComponent.LoadAdditionalStructureEngrams"); }
	void LoadArkTriuteItems(const TArray<FItemNetInfo> * ItemInfos, bool bClear, bool bFinalBatch) { NativeCall<void, const TArray<FItemNetInfo> *, bool, bool>(this, "UPrimalInventoryComponent.LoadArkTriuteItems", ItemInfos, bClear, bFinalBatch); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "UPrimalInventoryComponent.LoadedFromSaveGame"); }
	void LocalUseItemSlot(int slotIndex, bool bForceCraft) { NativeCall<void, int, bool>(this, "UPrimalInventoryComponent.LocalUseItemSlot", slotIndex, bForceCraft); }
	void NotifyArkItemAdded() { NativeCall<void>(this, "UPrimalInventoryComponent.NotifyArkItemAdded"); }
	void NotifyClientItemArkTributeStatusChanged(UPrimalItem * anItem, bool bRemoved, bool bFromLoad) { NativeCall<void, UPrimalItem *, bool, bool>(this, "UPrimalInventoryComponent.NotifyClientItemArkTributeStatusChanged", anItem, bRemoved, bFromLoad); }
	void NotifyClientsDurabilityChange(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.NotifyClientsDurabilityChange", anItem); }
	void NotifyClientsItemStatus(UPrimalItem * anItem, bool bEquippedItem, bool bRemovedItem, bool bOnlyUpdateQuantity, bool bOnlyUpdateDurability, bool bOnlyNotifyItemSwap, UPrimalItem * anItem2, FItemNetID * InventoryInsertAfterItemID, bool bUsedItem, bool bNotifyCraftQueue, bool ShowHUDNotification) { NativeCall<void, UPrimalItem *, bool, bool, bool, bool, bool, UPrimalItem *, FItemNetID *, bool, bool, bool>(this, "UPrimalInventoryComponent.NotifyClientsItemStatus", anItem, bEquippedItem, bRemovedItem, bOnlyUpdateQuantity, bOnlyUpdateDurability, bOnlyNotifyItemSwap, anItem2, InventoryInsertAfterItemID, bUsedItem, bNotifyCraftQueue, ShowHUDNotification); }
	void NotifyCraftedItem(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.NotifyCraftedItem", anItem); }
	void NotifyCraftingItemConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int amount) { NativeCall<void, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.NotifyCraftingItemConsumption", ItemTemplate, amount); }
	void NotifyItemAdded(UPrimalItem * theItem, bool bEquippedItem) { NativeCall<void, UPrimalItem *, bool>(this, "UPrimalInventoryComponent.NotifyItemAdded", theItem, bEquippedItem); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "UPrimalInventoryComponent.NotifyItemQuantityUpdated", anItem, amount); }
	void NotifyItemRemoved(UPrimalItem * theItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.NotifyItemRemoved", theItem); }
	void OnArkTributeItemsAdded(bool Success, const TArray<FItemNetInfo> * AddedItems) { NativeCall<void, bool, const TArray<FItemNetInfo> *>(this, "UPrimalInventoryComponent.OnArkTributeItemsAdded", Success, AddedItems); }
	void OnArkTributeItemsRemoved(bool Success, const TArray<FItemNetInfo> * RemovedItems, const TArray<FItemNetInfo> * NotFoundItems, int FailureResponseCode, const FString * FailureResponseMessage, bool bAllowForcedItemDownload) { NativeCall<void, bool, const TArray<FItemNetInfo> *, const TArray<FItemNetInfo> *, int, const FString *, bool>(this, "UPrimalInventoryComponent.OnArkTributeItemsRemoved", Success, RemovedItems, NotFoundItems, FailureResponseCode, FailureResponseMessage, bAllowForcedItemDownload); }
	void OnComponentCreated() { NativeCall<void>(this, "UPrimalInventoryComponent.OnComponentCreated"); }
	void OnComponentDestroyed() { NativeCall<void>(this, "UPrimalInventoryComponent.OnComponentDestroyed"); }
	void OnGrindItem() { NativeCall<void>(this, "UPrimalInventoryComponent.OnGrindItem"); }
	void OnRegister() { NativeCall<void>(this, "UPrimalInventoryComponent.OnRegister"); }
	bool OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.OverrideBlueprintCraftingRequirement", ItemTemplate, ItemQuantity); }
	float OverrideItemMinimumUseInterval(const UPrimalItem * theItem) { return NativeCall<float, const UPrimalItem *>(this, "UPrimalInventoryComponent.OverrideItemMinimumUseInterval", theItem); }
	void OwnerDied() { NativeCall<void>(this, "UPrimalInventoryComponent.OwnerDied"); }
	void RefreshItemSpoilingTimes() { NativeCall<void>(this, "UPrimalInventoryComponent.RefreshItemSpoilingTimes"); }
	void RemoteAddItemToCustomFolder(const FString * CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, const FString *, int, FItemNetID>(this, "UPrimalInventoryComponent.RemoteAddItemToCustomFolder", CFolderName, InventoryCompType, ItemId); }
	void RemoteDeleteCustomFolder(const FString * CFolderName, int InventoryCompType) { NativeCall<void, const FString *, int>(this, "UPrimalInventoryComponent.RemoteDeleteCustomFolder", CFolderName, InventoryCompType); }
	void RemoteDeleteItemFromCustomFolder(AShooterPlayerController * PC, const FString * CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, AShooterPlayerController *, const FString *, int, FItemNetID>(this, "UPrimalInventoryComponent.RemoteDeleteItemFromCustomFolder", PC, CFolderName, InventoryCompType, ItemId); }
	bool RemoteInventoryAllowAddItems(AShooterPlayerController * PC, UPrimalItem * anItem, int * anItemQuantityOverride, bool bRequestedByPlayer) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, int *, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowAddItems", PC, anItem, anItemQuantityOverride, bRequestedByPlayer); }
	bool RemoteInventoryAllowCraftingItems(AShooterPlayerController * PC, bool bIgnoreEnabled) { return NativeCall<bool, AShooterPlayerController *, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowCraftingItems", PC, bIgnoreEnabled); }
	bool RemoteInventoryAllowRemoveItems(AShooterPlayerController * PC, UPrimalItem * anItemToTransfer, int * requestedQuantity, bool bRequestedByPlayer, bool bRequestDropping) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, int *, bool, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowRemoveItems", PC, anItemToTransfer, requestedQuantity, bRequestedByPlayer, bRequestDropping); }
	bool RemoteInventoryAllowRepairingItems(AShooterPlayerController * PC, bool bIgnoreEnabled) { return NativeCall<bool, AShooterPlayerController *, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowRepairingItems", PC, bIgnoreEnabled); }
	bool RemoteInventoryAllowViewing(AShooterPlayerController * PC, float MaxAllowedDistanceOffset) { return NativeCall<bool, AShooterPlayerController *, float>(this, "UPrimalInventoryComponent.RemoteInventoryAllowViewing", PC, MaxAllowedDistanceOffset); }
	bool RemoveArkTributeItem(FItemNetID * itemID, unsigned int Quantity) { return NativeCall<bool, FItemNetID *, unsigned int>(this, "UPrimalInventoryComponent.RemoveArkTributeItem", itemID, Quantity); }
	void RemoveCustomFolder(AShooterPlayerController * PC, FString FolderName, int InventoryCompType) { NativeCall<void, AShooterPlayerController *, FString, int>(this, "UPrimalInventoryComponent.RemoveCustomFolder", PC, FolderName, InventoryCompType); }
	bool RemoveItem(const FItemNetID * itemID, bool bDoDrop, bool bSecondryAction, bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, const FItemNetID *, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.RemoveItem", itemID, bDoDrop, bSecondryAction, bForceRemoval, showHUDMessage); }
	void RemoveItemCrafting(UPrimalItem * craftingItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.RemoveItemCrafting", craftingItem); }
	void RemoveItemSpoilingTimer(UPrimalItem * theItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.RemoveItemSpoilingTimer", theItem); }
	void RequestAddArkTributeItem(const FItemNetInfo * theItemInfo, bool bFromLoad) { NativeCall<void, const FItemNetInfo *, bool>(this, "UPrimalInventoryComponent.RequestAddArkTributeItem", theItemInfo, bFromLoad); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UPrimalInventoryComponent.Serialize", Ar); }
	bool ServerAddFromArkTributeInventory(FItemNetID * itemID, int Quantity) { return NativeCall<bool, FItemNetID *, int>(this, "UPrimalInventoryComponent.ServerAddFromArkTributeInventory", itemID, Quantity); }
	void ServerAddItemToSlot_Implementation(FItemNetID ItemID, int SlotIndex) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerAddItemToSlot_Implementation", ItemID, SlotIndex); }
	bool ServerAddToArkTributeInventory(FItemNetID * itemID, TArray<unsigned __int64> SteamItemUserIds, FItemNetInfo * AlternateItemInfo) { return NativeCall<bool, FItemNetID *, TArray<unsigned __int64>, FItemNetInfo *>(this, "UPrimalInventoryComponent.ServerAddToArkTributeInventory", itemID, SteamItemUserIds, AlternateItemInfo); }
	void ServerCloseRemoteInventory(AShooterPlayerController * ByPC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalInventoryComponent.ServerCloseRemoteInventory", ByPC); }
	void ServerCraftItem(FItemNetID * itemID, AShooterPlayerController * ByPC) { NativeCall<void, FItemNetID *, AShooterPlayerController *>(this, "UPrimalInventoryComponent.ServerCraftItem", itemID, ByPC); }
	bool ServerEquipItem(FItemNetID * itemID) { return NativeCall<bool, FItemNetID *>(this, "UPrimalInventoryComponent.ServerEquipItem", itemID); }
	void ServerForceMergeItemStack_Implementation(FItemNetID Item1ID, FItemNetID Item2ID) { NativeCall<void, FItemNetID, FItemNetID>(this, "UPrimalInventoryComponent.ServerForceMergeItemStack_Implementation", Item1ID, Item2ID); }
	void ServerMakeRecipeItem_Implementation(APrimalStructureItemContainer * Container, FItemNetID NoteToConsume, TSubclassOf<UPrimalItem> RecipeItemTemplate, const FString * CustomName, const FString * CustomDescription, const TArray<FColor> * CustomColors, const TArray<FCraftingResourceRequirement> * CustomRequirements) { NativeCall<void, APrimalStructureItemContainer *, FItemNetID, TSubclassOf<UPrimalItem>, const FString *, const FString *, const TArray<FColor> *, const TArray<FCraftingResourceRequirement> *>(this, "UPrimalInventoryComponent.ServerMakeRecipeItem_Implementation", Container, NoteToConsume, RecipeItemTemplate, CustomName, CustomDescription, CustomColors, CustomRequirements); }
	void ServerMergeItemStack_Implementation(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerMergeItemStack_Implementation", ItemID); }
	void ServerRemoveItemFromSlot_Implementation(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerRemoveItemFromSlot_Implementation", ItemID); }
	void ServerRepairItem(const FItemNetID * itemID, AShooterPlayerController * ByPC, bool bRepairIgnoreInventoryRequirement, float RepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, const FItemNetID *, AShooterPlayerController *, bool, float, float>(this, "UPrimalInventoryComponent.ServerRepairItem", itemID, ByPC, bRepairIgnoreInventoryRequirement, RepairPercentage, RepairSpeedMultiplier); }
	void ServerRequestItems(AShooterPlayerController * forPC, bool bEquippedItems, bool bIsFirstSpawn) { NativeCall<void, AShooterPlayerController *, bool, bool>(this, "UPrimalInventoryComponent.ServerRequestItems", forPC, bEquippedItems, bIsFirstSpawn); }
	void ServerSelectedCustomItemAction(const FItemNetID * itemID, const FName * SelectedOption, AShooterPlayerController * ForPC) { NativeCall<void, const FItemNetID *, const FName *, AShooterPlayerController *>(this, "UPrimalInventoryComponent.ServerSelectedCustomItemAction", itemID, SelectedOption, ForPC); }
	void ServerSplitItemStack_Implementation(FItemNetID ItemID, int AmountToSplit) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerSplitItemStack_Implementation", ItemID, AmountToSplit); }
	void ServerUseInventoryItem(FItemNetID * itemID, AShooterPlayerController * ByPC) { NativeCall<void, FItemNetID *, AShooterPlayerController *>(this, "UPrimalInventoryComponent.ServerUseInventoryItem", itemID, ByPC); }
	void ServerUseItemWithItem(const FItemNetID * itemID1, const FItemNetID * itemID2, int AdditionalData) { NativeCall<void, const FItemNetID *, const FItemNetID *, int>(this, "UPrimalInventoryComponent.ServerUseItemWithItem", itemID1, itemID2, AdditionalData); }
	void ServerViewRemoteInventory(AShooterPlayerController * ByPC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalInventoryComponent.ServerViewRemoteInventory", ByPC); }
	void SetCraftingEnabled(bool bEnable) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.SetCraftingEnabled", bEnable); }
	void SetEquippedItemsOwnerNoSee(bool bNewOwnerNoSee, bool bForceHideFirstPerson) { NativeCall<void, bool, bool>(this, "UPrimalInventoryComponent.SetEquippedItemsOwnerNoSee", bNewOwnerNoSee, bForceHideFirstPerson); }
	void SetFirstPersonMasterPoseComponent(USkeletalMeshComponent * WeaponComp) { NativeCall<void, USkeletalMeshComponent *>(this, "UPrimalInventoryComponent.SetFirstPersonMasterPoseComponent", WeaponComp); }
	void SetNextItemConsumptionID_Implementation(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemConsumptionID_Implementation", NextItemID); }
	void SetNextItemSpoilingID_Implementation(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemSpoilingID_Implementation", NextItemID); }
	void ShowBeforeUsingConfirmationDialog(UPrimalItem * Item) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.ShowBeforeUsingConfirmationDialog", Item); }
	void StopAllCraftingRepairing() { NativeCall<void>(this, "UPrimalInventoryComponent.StopAllCraftingRepairing"); }
	void SwapCustomFolder(FString CFolder1, FString CFolder2, int DataListType) { NativeCall<void, FString, FString, int>(this, "UPrimalInventoryComponent.SwapCustomFolder", CFolder1, CFolder2, DataListType); }
	void SwapInventoryItems(FItemNetID * itemID1, FItemNetID * itemID2) { NativeCall<void, FItemNetID *, FItemNetID *>(this, "UPrimalInventoryComponent.SwapInventoryItems", itemID1, itemID2); }
	void TickCraftQueue(float DeltaTime, AShooterGameState * theGameState) { NativeCall<void, float, AShooterGameState *>(this, "UPrimalInventoryComponent.TickCraftQueue", DeltaTime, theGameState); }
	void TransferAllItemsOfClassToInventory(UPrimalInventoryComponent * ToInventory, TSubclassOf<UPrimalItem> OfItemClass, const bool bAllowSubclasses) { NativeCall<void, UPrimalInventoryComponent *, TSubclassOf<UPrimalItem>, const bool>(this, "UPrimalInventoryComponent.TransferAllItemsOfClassToInventory", ToInventory, OfItemClass, bAllowSubclasses); }
	void TransferAllItemsOfClassesToInventory(UPrimalInventoryComponent * ToInventory, TArray<TSubclassOf<UPrimalItem>> OfItemClasses, const bool bAllowSubclasses) { NativeCall<void, UPrimalInventoryComponent *, TArray<TSubclassOf<UPrimalItem>>, const bool>(this, "UPrimalInventoryComponent.TransferAllItemsOfClassesToInventory", ToInventory, OfItemClasses, bAllowSubclasses); }
	void TransferAllItemsToInventory(UPrimalInventoryComponent * ToInventory) { NativeCall<void, UPrimalInventoryComponent *>(this, "UPrimalInventoryComponent.TransferAllItemsToInventory", ToInventory); }
	void TransferAllItemsToInventoryWithFilter(UPrimalInventoryComponent * ToInventory, TArray<TSubclassOf<UPrimalItem>> OfItemClasses, TArray<TSubclassOf<UPrimalItem>> IgnoreItemClasses, const bool bAllowSubclasses) { NativeCall<void, UPrimalInventoryComponent *, TArray<TSubclassOf<UPrimalItem>>, TArray<TSubclassOf<UPrimalItem>>, const bool>(this, "UPrimalInventoryComponent.TransferAllItemsToInventoryWithFilter", ToInventory, OfItemClasses, IgnoreItemClasses, bAllowSubclasses); }
	void TransferItemToInventory(UPrimalInventoryComponent * ToInventory, const int ItemIndex) { NativeCall<void, UPrimalInventoryComponent *, const int>(this, "UPrimalInventoryComponent.TransferItemToInventory", ToInventory, ItemIndex); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController *, int, int>(this, "UPrimalInventoryComponent.TryMultiUse", ForPC, UseIndex, hitBodyIndex); }
	void Unstasised() { NativeCall<void>(this, "UPrimalInventoryComponent.Unstasised"); }
	void UpdateNetWeaponClipAmmo(UPrimalItem * anItem, int ammo) { NativeCall<void, UPrimalItem *, int>(this, "UPrimalInventoryComponent.UpdateNetWeaponClipAmmo", anItem, ammo); }
	void UpdateTribeGroupInventoryRank_Implementation(char NewRank) { NativeCall<void, char>(this, "UPrimalInventoryComponent.UpdateTribeGroupInventoryRank_Implementation", NewRank); }
	void UpdatedCraftQueue() { NativeCall<void>(this, "UPrimalInventoryComponent.UpdatedCraftQueue"); }
	void UsedItem(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.UsedItem", anItem); }
	void BPAccessedInventory(AShooterPlayerController * ForPC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalInventoryComponent.BPAccessedInventory", ForPC); }
	bool BPAllowAddInventoryItem(UPrimalItem * Item, int RequestedQuantity, bool bOnlyAddAll) { return NativeCall<bool, UPrimalItem *, int, bool>(this, "UPrimalInventoryComponent.BPAllowAddInventoryItem", Item, RequestedQuantity, bOnlyAddAll); }
	bool BPAllowUseInInventory(UPrimalItem * theItem, bool bIsRemoteInventory, AShooterPlayerController * ByPC) { return NativeCall<bool, UPrimalItem *, bool, AShooterPlayerController *>(this, "UPrimalInventoryComponent.BPAllowUseInInventory", theItem, bIsRemoteInventory, ByPC); }
	void BPCraftingFinishedNotification(UPrimalItem * itemToBeCrafted) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.BPCraftingFinishedNotification", itemToBeCrafted); }
	bool BPCustomRemoteInventoryAllowAddItems(AShooterPlayerController * PC, UPrimalItem * anItem, int anItemQuantityOverride, bool bRequestedByPlayer) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, int, bool>(this, "UPrimalInventoryComponent.BPCustomRemoteInventoryAllowAddItems", PC, anItem, anItemQuantityOverride, bRequestedByPlayer); }
	bool BPCustomRemoteInventoryAllowRemoveItems(AShooterPlayerController * PC, UPrimalItem * anItemToTransfer, int requestedQuantity, bool bRequestedByPlayer, bool bRequestDropping) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, int, bool, bool>(this, "UPrimalInventoryComponent.BPCustomRemoteInventoryAllowRemoveItems", PC, anItemToTransfer, requestedQuantity, bRequestedByPlayer, bRequestDropping); }
	void BPGetExtraItemDisplay(bool * bShowExtraItem, FString * Description, FString * CustomString, UTexture2D ** EntryIcon, UMaterialInterface ** EntryMaterial) { NativeCall<void, bool *, FString *, FString *, UTexture2D **, UMaterialInterface **>(this, "UPrimalInventoryComponent.BPGetExtraItemDisplay", bShowExtraItem, Description, CustomString, EntryIcon, EntryMaterial); }
	void BPInitializeInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.BPInitializeInventory"); }
	void BPInventoryRefresh() { NativeCall<void>(this, "UPrimalInventoryComponent.BPInventoryRefresh"); }
	bool BPIsCraftingAllowed(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.BPIsCraftingAllowed", anItem); }
	bool BPIsValidCraftingResource(UPrimalItem * theItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.BPIsValidCraftingResource", theItem); }
	void BPNotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "UPrimalInventoryComponent.BPNotifyItemAdded", anItem, bEquipItem); }
	void BPNotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "UPrimalInventoryComponent.BPNotifyItemQuantityUpdated", anItem, amount); }
	void BPNotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.BPNotifyItemRemoved", anItem); }
	void BPOnTransferAll(UPrimalInventoryComponent * ToInventory) { NativeCall<void, UPrimalInventoryComponent *>(this, "UPrimalInventoryComponent.BPOnTransferAll", ToInventory); }
	float BPOverrideItemMinimumUseInterval(UPrimalItem * theItem) { return NativeCall<float, UPrimalItem *>(this, "UPrimalInventoryComponent.BPOverrideItemMinimumUseInterval", theItem); }
	void BPPostInitDefaultInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.BPPostInitDefaultInventory"); }
	void BPPreInitDefaultInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.BPPreInitDefaultInventory"); }
	bool BPPreventEquipItem(UPrimalItem * theItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.BPPreventEquipItem", theItem); }
	bool BPPreventEquipItemType(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.BPPreventEquipItemType", equipmentType); }
	bool BPRemoteInventoryAllowCrafting(AShooterPlayerController * PC) { return NativeCall<bool, AShooterPlayerController *>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowCrafting", PC); }
	bool BPRemoteInventoryAllowRemoveItems(AShooterPlayerController * PC, UPrimalItem * anItemToTransfer) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowRemoveItems", PC, anItemToTransfer); }
	bool BPRemoteInventoryAllowViewing(AShooterPlayerController * PC) { return NativeCall<bool, AShooterPlayerController *>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowViewing", PC); }
	int BPRemoteInventoryGetMaxVisibleSlots(int NumItems, AShooterPlayerController * PC, bool bIsLocal) { return NativeCall<int, int, AShooterPlayerController *, bool>(this, "UPrimalInventoryComponent.BPRemoteInventoryGetMaxVisibleSlots", NumItems, PC, bIsLocal); }
	void BPRequestedInventoryItems(AShooterPlayerController * forPC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalInventoryComponent.BPRequestedInventoryItems", forPC); }
	bool CanGrindItem(const UPrimalItem * item) { return NativeCall<bool, const UPrimalItem *>(this, "UPrimalInventoryComponent.CanGrindItem", item); }
	bool CanGrindItems(const AShooterPlayerController * PC) { return NativeCall<bool, const AShooterPlayerController *>(this, "UPrimalInventoryComponent.CanGrindItems", PC); }
	void ClientItemMessageNotification(FItemNetID ItemID, EPrimalItemMessage::Type ItemMessageType) { NativeCall<void, FItemNetID, EPrimalItemMessage::Type>(this, "UPrimalInventoryComponent.ClientItemMessageNotification", ItemID, ItemMessageType); }
	void ClientOnArkTributeItemsAdded() { NativeCall<void>(this, "UPrimalInventoryComponent.ClientOnArkTributeItemsAdded"); }
	void ClientUpdateFreeCraftingMode(bool bNewFreeCraftingModeValue) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientUpdateFreeCraftingMode", bNewFreeCraftingModeValue); }
	void GetGrinderSettings(int * MaxQuantityToGrind, float * GrindGiveItemsPercent, int * MaxItemsToGivePerGrind) { NativeCall<void, int *, float *, int *>(this, "UPrimalInventoryComponent.GetGrinderSettings", MaxQuantityToGrind, GrindGiveItemsPercent, MaxItemsToGivePerGrind); }
	void InventoryCustomFilter(const TArray<UPrimalItem *> * UnfilteredItemsList, TArray<UPrimalItem *> * FilteredItemsList) { NativeCall<void, const TArray<UPrimalItem *> *, TArray<UPrimalItem *> *>(this, "UPrimalInventoryComponent.InventoryCustomFilter", UnfilteredItemsList, FilteredItemsList); }
	bool InventoryCustomSortPredicate(UPrimalItem * LeftItem, UPrimalItem * RightItem) { return NativeCall<bool, UPrimalItem *, UPrimalItem *>(this, "UPrimalInventoryComponent.InventoryCustomSortPredicate", LeftItem, RightItem); }
	bool OverrideUseItem(UPrimalItem * theItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.OverrideUseItem", theItem); }
	void ServerAddItemToSlot(FItemNetID ItemID, int SlotIndex) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerAddItemToSlot", ItemID, SlotIndex); }
	void ServerForceMergeItemStack(FItemNetID Item1ID, FItemNetID Item2ID) { NativeCall<void, FItemNetID, FItemNetID>(this, "UPrimalInventoryComponent.ServerForceMergeItemStack", Item1ID, Item2ID); }
	void ServerMakeRecipeItem(APrimalStructureItemContainer * Container, FItemNetID NoteToConsume, TSubclassOf<UPrimalItem> RecipeItemTemplate, const FString * CustomName, const FString * CustomDescription, const TArray<FColor> * CustomColors, const TArray<FCraftingResourceRequirement> * CustomRequirements) { NativeCall<void, APrimalStructureItemContainer *, FItemNetID, TSubclassOf<UPrimalItem>, const FString *, const FString *, const TArray<FColor> *, const TArray<FCraftingResourceRequirement> *>(this, "UPrimalInventoryComponent.ServerMakeRecipeItem", Container, NoteToConsume, RecipeItemTemplate, CustomName, CustomDescription, CustomColors, CustomRequirements); }
	void ServerRemoveItemFromSlot(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerRemoveItemFromSlot", ItemID); }
	void ServerSplitItemStack(FItemNetID ItemID, int AmountToSplit) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerSplitItemStack", ItemID, AmountToSplit); }
	void SetNextItemConsumptionID(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemConsumptionID", NextItemID); }
	void SetNextItemSpoilingID(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemSpoilingID", NextItemID); }
};

struct UPrimalInventoryComponent_Static : UPrimalInventoryComponent
{

	// Functions

};

