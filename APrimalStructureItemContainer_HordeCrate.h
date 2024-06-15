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
#include "FMultiUseEntry.h"

struct APrimalStructureItemContainer_SupplyCrate : APrimalStructureItemContainer
{
	char __padding[0xa0L];
	float& MinItemSetsField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MinItemSets"); }
	float& MaxItemSetsField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MaxItemSets"); }
	float& NumItemSetsPowerField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.NumItemSetsPower"); }
	bool& bSetsRandomWithoutReplacementField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_SupplyCrate.bSetsRandomWithoutReplacement"); }
	float& MinQualityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MinQualityMultiplier"); }
	float& MaxQualityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MaxQualityMultiplier"); }
	float& AboveOneExtraQualityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.AboveOneExtraQualityMultiplier"); }
	TArray<FSupplyCrateItemSet>& ItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet>*>(this, "APrimalStructureItemContainer_SupplyCrate.ItemSets"); }
	TSubclassOf<UPrimalSupplyCrateItemSets>& ItemSetsOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalSupplyCrateItemSets>*>(this, "APrimalStructureItemContainer_SupplyCrate.ItemSetsOverride"); }
	TArray<FSupplyCrateItemSet>& AdditionalItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet>*>(this, "APrimalStructureItemContainer_SupplyCrate.AdditionalItemSets"); }
	TSubclassOf<UPrimalSupplyCrateItemSets>& AdditionalItemSetsOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalSupplyCrateItemSets>*>(this, "APrimalStructureItemContainer_SupplyCrate.AdditionalItemSetsOverride"); }
	int& RequiredLevelToAccessField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_SupplyCrate.RequiredLevelToAccess"); }
	int& MaxLevelToAccessField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_SupplyCrate.MaxLevelToAccess"); }
	float& InitialTimeToLoseHealthField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.InitialTimeToLoseHealth"); }
	float& IntervalTimeToLoseHealthField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.IntervalTimeToLoseHealth"); }
	float& IntervalPercentHealthToLoseField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.IntervalPercentHealthToLose"); }
	TWeakObjectPtr<ASupplyCrateSpawningVolume>& LinkedToCrateSpawnVolumeField() { return *GetNativePointerField<TWeakObjectPtr<ASupplyCrateSpawningVolume>*>(this, "APrimalStructureItemContainer_SupplyCrate.LinkedToCrateSpawnVolume"); }
	TArray<TWeakObjectPtr<APrimalDinoCharacter>>& LinkedNPCsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalDinoCharacter>>*>(this, "APrimalStructureItemContainer_SupplyCrate.LinkedNPCs"); }
	FVector& LastMatineeUpdatedActorLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureItemContainer_SupplyCrate.LastMatineeUpdatedActorLocation"); }
	FVector& SpawnInInDamageCollisionBoxExtentField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureItemContainer_SupplyCrate.SpawnInInDamageCollisionBoxExtent"); }
	bool& bIsUnderWaterCrateField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_SupplyCrate.bIsUnderWaterCrate"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.BeginPlay"); }
	bool CanOpen(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureItemContainer_SupplyCrate.CanOpen", ForPC); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.Destroyed"); }
	void GenerateCrateItems() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.GenerateCrateItems"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureItemContainer_SupplyCrate.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureItemContainer_SupplyCrate.GetMultiUseEntries", ForPC, MultiUseEntries); }
	void LoseHealth() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.LoseHealth"); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureItemContainer_SupplyCrate.NotifyItemRemoved", anItem); }
	void SetAppliedBuff(bool bSet) { NativeCall<void, bool>(this, "APrimalStructureItemContainer_SupplyCrate.SetAppliedBuff", bSet); }
	void SetContainerActive(bool bNewActive) { NativeCall<void, bool>(this, "APrimalStructureItemContainer_SupplyCrate.SetContainerActive", bNewActive); }
	void StartLosingHealth() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.StartLosingHealth"); }
};

struct APrimalStructureItemContainer_HordeCrate : APrimalStructureItemContainer_SupplyCrate
{
	char __padding[0x18L];
	FVector& CrateLocField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureItemContainer_HordeCrate.CrateLoc"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_HordeCrate.BeginPlay"); }
	void SpawnElementNodePostProcess() { NativeCall<void>(this, "APrimalStructureItemContainer_HordeCrate.SpawnElementNodePostProcess"); }
};

