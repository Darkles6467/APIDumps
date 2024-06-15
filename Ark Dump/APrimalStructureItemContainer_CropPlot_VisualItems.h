#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureItemContainer.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"
#include "UPrimalItem.h"
#include "FMultiUseEntry.h"

struct APrimalStructureItemContainer_CropPlot : APrimalStructureItemContainer
{
	char __padding[0xf0L];
	float& CropRefreshIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshIntervalMin"); }
	float& CropRefreshIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshIntervalMax"); }
	float& WaterNearbyStructureRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterNearbyStructureRange"); }
	float& MaxWaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MaxWaterAmount"); }
	float& ActiveRainWaterIncreaseSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.ActiveRainWaterIncreaseSpeed"); }
	float& AverageRainWaterIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.AverageRainWaterIncreaseMultiplier"); }
	float& WaterItemAmountMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterItemAmountMultiplier"); }
	FVector& ExtraCropMeshScaleField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureItemContainer_CropPlot.ExtraCropMeshScale"); }
	float& CropRefreshIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshInterval"); }
	float& CropPhaseFertilizerCacheField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropPhaseFertilizerCache"); }
	float& CropFruitFertilizerCacheField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropFruitFertilizerCache"); }
	TEnumAsByte<enum ESeedCropPhase::Type>& CurrentCropPhaseField() { return *GetNativePointerField<TEnumAsByte<enum ESeedCropPhase::Type>*>(this, "APrimalStructureItemContainer_CropPlot.CurrentCropPhase"); }
	long double& LastCropRefreshTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.LastCropRefreshTime"); }
	bool& bDelayCropRefreshField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_CropPlot.bDelayCropRefresh"); }
	long double& NextAllowedCropRefreshTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.NextAllowedCropRefreshTime"); }
	long double& CropRefreshTimeCacheField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshTimeCache"); }
	int& FertilizerAmountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerAmount"); }
	float& WaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterAmount"); }
	char& NumGreenHouseStructuresField() { return *GetNativePointerField<char*>(this, "APrimalStructureItemContainer_CropPlot.NumGreenHouseStructures"); }
	bool& bIsOpenToSkyField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_CropPlot.bIsOpenToSky"); }
	float& FertilizerConsumptionRateMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerConsumptionRateMultiplier"); }
	float& LastReplicatedWaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.LastReplicatedWaterAmount"); }
	int& LastReplicatedFertilizerAmountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.LastReplicatedFertilizerAmount"); }
	float& LastWaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.LastWaterAmount"); }
	float& MinWateredOverridesCraftingField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MinWateredOverridesCrafting"); }
	int& MaxGreenHouseStructuresField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.MaxGreenHouseStructures"); }
	float& MaxGreenHouseCropGrowthMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MaxGreenHouseCropGrowthMultiplier"); }
	float& GainWaterRateField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.GainWaterRate"); }
	long double& LastForceReplicatedGreenhouseTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.LastForceReplicatedGreenhouseTime"); }
	float& CropMaxFruitsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropMaxFruitsMultiplier"); }

	// Functions

	float AddWater(float Amount, bool bAllowNetworking) { return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer_CropPlot.AddWater", Amount, bAllowNetworking); }
	bool AllowBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "APrimalStructureItemContainer_CropPlot.AllowBlueprintCraftingRequirement", ItemTemplate, ItemQuantity); }
	bool AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "APrimalStructureItemContainer_CropPlot.AllowCraftingResourceConsumption", ItemTemplate, ItemQuantity); }
	bool AllowRemoteAddItemToInventory(UPrimalInventoryComponent * invComp, UPrimalItem * anItem) { return NativeCall<bool, UPrimalInventoryComponent *, UPrimalItem *>(this, "APrimalStructureItemContainer_CropPlot.AllowRemoteAddItemToInventory", invComp, anItem); }
	bool AreCropRequirementsMet() { return NativeCall<bool>(this, "APrimalStructureItemContainer_CropPlot.AreCropRequirementsMet"); }
	void AutoWaterRefreshCrop() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.AutoWaterRefreshCrop"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.BeginPlay"); }
	void Demolish(APlayerController * ForPC, AActor * DamageCauser) { NativeCall<void, APlayerController *, AActor *>(this, "APrimalStructureItemContainer_CropPlot.Demolish", ForPC, DamageCauser); }
	void DoRefreshCrop() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.DoRefreshCrop"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureItemContainer_CropPlot.DrawHUD", HUD); }
	bool ForceAllowsInventoryUse(UObject * InventoryItemObject) { return NativeCall<bool, UObject *>(this, "APrimalStructureItemContainer_CropPlot.ForceAllowsInventoryUse", InventoryItemObject); }
	FString * GetCropName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureItemContainer_CropPlot.GetCropName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureItemContainer_CropPlot.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureItemContainer_CropPlot.GetMultiUseEntries", ForPC, MultiUseEntries); }
	int GetPhaseInventoryItemCount(ESeedCropPhase::Type cropPhase) { return NativeCall<int, ESeedCropPhase::Type>(this, "APrimalStructureItemContainer_CropPlot.GetPhaseInventoryItemCount", cropPhase); }
	void InventoryItemUsed(UObject * InventoryItemObject) { NativeCall<void, UObject *>(this, "APrimalStructureItemContainer_CropPlot.InventoryItemUsed", InventoryItemObject); }
	bool NetExecCommand(FName CommandName, const FNetExecParams * ExecParams) { return NativeCall<bool, FName, const FNetExecParams *>(this, "APrimalStructureItemContainer_CropPlot.NetExecCommand", CommandName, ExecParams); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "APrimalStructureItemContainer_CropPlot.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureItemContainer_CropPlot.NotifyItemRemoved", anItem); }
	void OnRep_CurrentCropPhase(const ESeedCropPhase::Type PrevCropPhase) { NativeCall<void, const ESeedCropPhase::Type>(this, "APrimalStructureItemContainer_CropPlot.OnRep_CurrentCropPhase", PrevCropPhase); }
	void OnRep_HasFruitItems(bool bPreviousHasFruitItems) { NativeCall<void, bool>(this, "APrimalStructureItemContainer_CropPlot.OnRep_HasFruitItems", bPreviousHasFruitItems); }
	void OnRep_PlantedCrop(UClass * PrevPlantedCrop) { NativeCall<void, UClass *>(this, "APrimalStructureItemContainer_CropPlot.OnRep_PlantedCrop", PrevPlantedCrop); }
	bool OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "APrimalStructureItemContainer_CropPlot.OverrideBlueprintCraftingRequirement", ItemTemplate, ItemQuantity); }
	bool OverrideHasWaterSource() { return NativeCall<bool>(this, "APrimalStructureItemContainer_CropPlot.OverrideHasWaterSource"); }
	void PlacedStructure(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureItemContainer_CropPlot.PlacedStructure", PC); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.PostInitializeComponents"); }
	bool RefreshCrop(float DeltaTime) { return NativeCall<bool, float>(this, "APrimalStructureItemContainer_CropPlot.RefreshCrop", DeltaTime); }
	void RefreshFertilized() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RefreshFertilized"); }
	void RefreshOpenToSky() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RefreshOpenToSky"); }
	void RefreshWaterState() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RefreshWaterState"); }
	void RefreshWatered() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RefreshWatered"); }
	bool RemoteInventoryAllowViewing(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureItemContainer_CropPlot.RemoteInventoryAllowViewing", ForPC); }
	void RemovePlantedCrop() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RemovePlantedCrop"); }
	void SetWaterState(bool bValue) { NativeCall<void, bool>(this, "APrimalStructureItemContainer_CropPlot.SetWaterState", bValue); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalStructureItemContainer_CropPlot.Tick", DeltaTime); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureItemContainer_CropPlot.TryMultiUse", ForPC, UseIndex); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.Unstasis"); }
	void UpdateCropVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.UpdateCropVisuals"); }
	bool UseItemSpoilingTimeMultipliers() { return NativeCall<bool>(this, "APrimalStructureItemContainer_CropPlot.UseItemSpoilingTimeMultipliers"); }
	float BPGetAdditionalGrowthMultiplier() { return NativeCall<float>(this, "APrimalStructureItemContainer_CropPlot.BPGetAdditionalGrowthMultiplier"); }
};

struct APrimalStructureItemContainer_CropPlot_VisualItems : APrimalStructureItemContainer_CropPlot
{
	char __padding[0x30L];
	UStaticMesh * ExtraStaticMesh_NoItemsField() { return GetNativePointerField<UStaticMesh *>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.ExtraStaticMesh_NoItems"); }
	UStaticMesh * ExtraStaticMesh_HasItemsField() { return GetNativePointerField<UStaticMesh *>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.ExtraStaticMesh_HasItems"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.BeginPlay"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.NotifyItemRemoved", anItem); }
	void OnRep_HasItems() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.OnRep_HasItems"); }
	void UpdateVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.UpdateVisuals"); }
};

