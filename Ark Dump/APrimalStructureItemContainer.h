#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructure.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"
#include "UPrimalItem.h"

struct APrimalStructureItemContainer : APrimalStructure
{
	char __padding[0x328L];
	float& SolarRefreshIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshIntervalMin"); }
	float& SolarRefreshIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshIntervalMax"); }
	float& SolarRefreshIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshInterval"); }
	long double& LastSolarRefreshTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastSolarRefreshTime"); }
	int& PoweredOverrideCounterField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.PoweredOverrideCounter"); }
	float& NotifyNearbyPowerGeneratorDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.NotifyNearbyPowerGeneratorDistance"); }
	int& NotifyNearbyPowerGeneratorOctreeGroupField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.NotifyNearbyPowerGeneratorOctreeGroup"); }
	TArray<FItemToDisplayInStructureTooltip>& ItemsToDisplayInStructureTooltipField() { return *GetNativePointerField<TArray<FItemToDisplayInStructureTooltip>*>(this, "APrimalStructureItemContainer.ItemsToDisplayInStructureTooltip"); }
	UChildActorComponent * MyChildEmitterSpawnableField() { return GetNativePointerField<UChildActorComponent *>(this, "APrimalStructureItemContainer.MyChildEmitterSpawnable"); }
	FString& BoxNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.BoxName"); }
	int& MaxBoxNameLengthField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.MaxBoxNameLength"); }
	float& InsulationRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.InsulationRange"); }
	float& HyperThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.HyperThermiaInsulation"); }
	float& HypoThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.HypoThermiaInsulation"); }
	float& ContainerActiveDecreaseHealthSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ContainerActiveDecreaseHealthSpeed"); }
	float& FuelConsumptionIntervalsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.FuelConsumptionIntervalsMultiplier"); }
	float& DropInventoryOnDestructionLifespanField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DropInventoryOnDestructionLifespan"); }
	FString& ActivateContainerStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.ActivateContainerString"); }
	FString& DeactivateContainerStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.DeactivateContainerString"); }
	TArray<float>& FuelItemsConsumeIntervalField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalStructureItemContainer.FuelItemsConsumeInterval"); }
	long double& NetDestructionTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.NetDestructionTime"); }
	unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureItemContainer.CurrentPinCode"); }
	long double& CurrentFuelTimeCacheField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.CurrentFuelTimeCache"); }
	long double& LastCheckedFuelTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastCheckedFuelTime"); }
	int& LinkedPowerJunctionStructureIDField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LinkedPowerJunctionStructureID"); }
	int& CurrentItemCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.CurrentItemCount"); }
	int& MaxItemCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.MaxItemCount"); }
	long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastLockStateChangeTime"); }
	long double& LastActiveStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastActiveStateChangeTime"); }
	int& LastPowerJunctionLinkIDField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LastPowerJunctionLinkID"); }
	FPrimalMapMarkerEntryData& MapMarkerLocationInfoField() { return *GetNativePointerField<FPrimalMapMarkerEntryData*>(this, "APrimalStructureItemContainer.MapMarkerLocationInfo"); }
	float& BasedCharacterDamageIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageInterval"); }
	float& BasedCharacterDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageAmount"); }
	float& PoweredNearbyStructureRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.PoweredNearbyStructureRange"); }
	UParticleSystem * JunctionLinkParticleTemplateField() { return GetNativePointerField<UParticleSystem *>(this, "APrimalStructureItemContainer.JunctionLinkParticleTemplate"); }
	FString& OpenSceneActionNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.OpenSceneActionName"); }
	FString& DisabledOpenSceneActionNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.DisabledOpenSceneActionName"); }
	long double& DeathCacheCreationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.DeathCacheCreationTime"); }
	long double& LastBasedCharacterDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastBasedCharacterDamageTime"); }
	int& LastBasedCharacterDamageFrameField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LastBasedCharacterDamageFrame"); }
	long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastSignNamingTime"); }
	FVector& JunctionCableBeamOffsetStartField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureItemContainer.JunctionCableBeamOffsetStart"); }
	FVector& JunctionCableBeamOffsetEndField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureItemContainer.JunctionCableBeamOffsetEnd"); }
	__int16& ReplicatedFuelItemColorIndexField() { return *GetNativePointerField<__int16*>(this, "APrimalStructureItemContainer.ReplicatedFuelItemColorIndex"); }
	UParticleSystem * DefaultParticleTemplateField() { return GetNativePointerField<UParticleSystem *>(this, "APrimalStructureItemContainer.DefaultParticleTemplate"); }
	TArray<UParticleSystem *>& OverrideParticleTemplatesField() { return *GetNativePointerField<TArray<UParticleSystem *>*>(this, "APrimalStructureItemContainer.OverrideParticleTemplates"); }
	float& MaxActivationDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.MaxActivationDistance"); }
	FString& BoxNamePrefaceStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.BoxNamePrefaceString"); }
	char& TribeGroupInventoryRankField() { return *GetNativePointerField<char*>(this, "APrimalStructureItemContainer.TribeGroupInventoryRank"); }
	TArray<float>& FuelConsumeDecreaseDurabilityAmountsField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalStructureItemContainer.FuelConsumeDecreaseDurabilityAmounts"); }
	float& RandomFuelUpdateTimeMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMin"); }
	float& RandomFuelUpdateTimeMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMax"); }
	long double& LastDeactivatedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastDeactivatedTime"); }
	long double& LastActivatedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastActivatedTime"); }
	float& ValidCraftingResourceMaxDurabilityField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ValidCraftingResourceMaxDurability"); }
	float& ActivationCooldownTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ActivationCooldownTime"); }
	float& UsablePriorityField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.UsablePriority"); }
	unsigned __int64& DeathCacheCharacterIDField() { return *GetNativePointerField<unsigned __int64*>(this, "APrimalStructureItemContainer.DeathCacheCharacterID"); }
	float& SinglePlayerFuelConsumptionIntervalsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SinglePlayerFuelConsumptionIntervalsMultiplier"); }
	float& PoweredBatteryDurabilityToDecreasePerSecondField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.PoweredBatteryDurabilityToDecreasePerSecond"); }
	float& DropInventoryDepositTraceDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DropInventoryDepositTraceDistance"); }
	TArray<TWeakObjectPtr<AShooterPlayerController>>& ValidatedByPinCodePlayerControllersField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterPlayerController>>*>(this, "APrimalStructureItemContainer.ValidatedByPinCodePlayerControllers"); }

	// Functions

	bool IsPowered() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsPowered"); }
	int AddToValidatedByPinCodePlayerControllers(AShooterPlayerController * ForPC) { return NativeCall<int, AShooterPlayerController *>(this, "APrimalStructureItemContainer.AddToValidatedByPinCodePlayerControllers", ForPC); }
	void AdjustDamage(float * Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, float *, const FDamageEvent *, AController *, AActor *>(this, "APrimalStructureItemContainer.AdjustDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool AdjustNetDestructionTime(float Delta) { return NativeCall<bool, float>(this, "APrimalStructureItemContainer.AdjustNetDestructionTime", Delta); }
	bool AllowSaving() { return NativeCall<bool>(this, "APrimalStructureItemContainer.AllowSaving"); }
	bool AllowToggleActivation(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureItemContainer.AllowToggleActivation", ForPC); }
	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureItemContainer.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void BPRename(FString NewName) { NativeCall<void, FString>(this, "APrimalStructureItemContainer.BPRename", NewName); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer.BeginPlay"); }
	bool CanBeActivated() { return NativeCall<bool>(this, "APrimalStructureItemContainer.CanBeActivated"); }
	bool CanOpen(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureItemContainer.CanOpen", ForPC); }
	void CharacterBasedOnUpdate(AActor * characterBasedOnMe, float DeltaSeconds) { NativeCall<void, AActor *, float>(this, "APrimalStructureItemContainer.CharacterBasedOnUpdate", characterBasedOnMe, DeltaSeconds); }
	void CheckAutoReactivate() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckAutoReactivate"); }
	void CheckForDeathCacheEmitter() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckForDeathCacheEmitter"); }
	void CheckFuelSetActive() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckFuelSetActive"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureItemContainer.ClientMultiUse", ForPC, UseIndex); }
	void ClientNotifyInventoryItemChange(bool bIsItemAdd, UPrimalItem * theItem, bool bEquipItem) { NativeCall<void, bool, UPrimalItem *, bool>(this, "APrimalStructureItemContainer.ClientNotifyInventoryItemChange", bIsItemAdd, theItem, bEquipItem); }
	void ConsumeFuel(bool bGiveItem) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.ConsumeFuel", bGiveItem); }
	void CopyStructureValuesFrom(APrimalStructureItemContainer * otherItemContainer) { NativeCall<void, APrimalStructureItemContainer *>(this, "APrimalStructureItemContainer.CopyStructureValuesFrom", otherItemContainer); }
	void DeferredNotifyItemAdded() { NativeCall<void>(this, "APrimalStructureItemContainer.DeferredNotifyItemAdded"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureItemContainer.DrawHUD", HUD); }
	void DrawStructureTooltip(AShooterHUD * HUD, bool bForMultiUseSelector) { NativeCall<void, AShooterHUD *, bool>(this, "APrimalStructureItemContainer.DrawStructureTooltip", HUD, bForMultiUseSelector); }
	void EnableActive() { NativeCall<void>(this, "APrimalStructureItemContainer.EnableActive"); }
	void GetBlueprintSpawnActorTransform(FVector * spawnLoc, FRotator * spawnRot) { NativeCall<void, FVector *, FRotator *>(this, "APrimalStructureItemContainer.GetBlueprintSpawnActorTransform", spawnLoc, spawnRot); }
	int GetDeathCacheCharacterID() { return NativeCall<int>(this, "APrimalStructureItemContainer.GetDeathCacheCharacterID"); }
	FString * GetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureItemContainer.GetDebugInfoString", result); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureItemContainer.GetDescriptiveName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureItemContainer.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureItemContainer.GetMultiUseEntries", ForPC, MultiUseEntries); }
	UParticleSystem * GetOverrideParticleTemplate() { return NativeCall<UParticleSystem *>(this, "APrimalStructureItemContainer.GetOverrideParticleTemplate"); }
	int GetPinCode() { return NativeCall<int>(this, "APrimalStructureItemContainer.GetPinCode"); }
	FSpawnPointInfo * GetSpawnPointInfo(FSpawnPointInfo * result) { return NativeCall<FSpawnPointInfo *, FSpawnPointInfo *>(this, "APrimalStructureItemContainer.GetSpawnPointInfo", result); }
	float GetUsablePriority_Implementation() { return NativeCall<float>(this, "APrimalStructureItemContainer.GetUsablePriority_Implementation"); }
	bool HasSamePinCode(APrimalStructureItemContainer * otherContainer) { return NativeCall<bool, APrimalStructureItemContainer *>(this, "APrimalStructureItemContainer.HasSamePinCode", otherContainer); }
	bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsPinLocked"); }
	bool IsPlayerControllerInPinCodeValidationList(APlayerController * PlayerController) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureItemContainer.IsPlayerControllerInPinCodeValidationList", PlayerController); }
	bool IsValidWaterSourceForPipe(APrimalStructureWaterPipe * ForWaterPipe) { return NativeCall<bool, APrimalStructureWaterPipe *>(this, "APrimalStructureItemContainer.IsValidWaterSourceForPipe", ForWaterPipe); }
	bool IsValidatedPinCodePlayerController(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureItemContainer.IsValidatedPinCodePlayerController", ForPC); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructureItemContainer.LoadedFromSaveGame"); }
	void MovePowerJunctionLink() { NativeCall<void>(this, "APrimalStructureItemContainer.MovePowerJunctionLink"); }
	void NetSetContainerActive_Implementation(bool bSetActive, TSubclassOf<UPrimalItem> NetReplicatedFuelItemClass, __int16 NetReplicatedFuelItemColorIndex) { NativeCall<void, bool, TSubclassOf<UPrimalItem>, __int16>(this, "APrimalStructureItemContainer.NetSetContainerActive_Implementation", bSetActive, NetReplicatedFuelItemClass, NetReplicatedFuelItemColorIndex); }
	void NetUpdateBoxName_Implementation(const FString * NewName) { NativeCall<void, const FString *>(this, "APrimalStructureItemContainer.NetUpdateBoxName_Implementation", NewName); }
	void NetUpdateLocation_Implementation(FVector NewLocation) { NativeCall<void, FVector>(this, "APrimalStructureItemContainer.NetUpdateLocation_Implementation", NewLocation); }
	void NotifyCraftedItem(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureItemContainer.NotifyCraftedItem", anItem); }
	void NotifyInventoryItemsSwapped(UPrimalItem * anItem1, UPrimalItem * anItem2) { NativeCall<void, UPrimalItem *, UPrimalItem *>(this, "APrimalStructureItemContainer.NotifyInventoryItemsSwapped", anItem1, anItem2); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "APrimalStructureItemContainer.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "APrimalStructureItemContainer.NotifyItemQuantityUpdated", anItem, amount); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureItemContainer.NotifyItemRemoved", anItem); }
	bool OverrideHasWaterSource() { return NativeCall<bool>(this, "APrimalStructureItemContainer.OverrideHasWaterSource"); }
	void PlacedStructure(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureItemContainer.PlacedStructure", PC); }
	void PlacedStructureLocation() { NativeCall<void>(this, "APrimalStructureItemContainer.PlacedStructureLocation"); }
	void PlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalStructureItemContainer.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureItemContainer.PostSpawnInitialize"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureItemContainer.PreInitializeComponents"); }
	void ProcessEditText(AShooterPlayerController * ForPC, const FString * TextToUse, bool bCheckedBox) { NativeCall<void, AShooterPlayerController *, const FString *, bool>(this, "APrimalStructureItemContainer.ProcessEditText", ForPC, TextToUse, bCheckedBox); }
	void RefreshFuelState() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshFuelState"); }
	void RefreshInventoryItemCounts() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshInventoryItemCounts"); }
	void RefreshPowerJunctionLink() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshPowerJunctionLink"); }
	void RefreshPowered(APrimalStructureItemContainer * InDirectPower) { NativeCall<void, APrimalStructureItemContainer *>(this, "APrimalStructureItemContainer.RefreshPowered", InDirectPower); }
	bool RemoteInventoryAllowActivation(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureItemContainer.RemoteInventoryAllowActivation", ForPC); }
	bool RemoteInventoryAllowViewing(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureItemContainer.RemoteInventoryAllowViewing", ForPC); }
	void ServerCloseRemoteInventory(AShooterPlayerController * ByPC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureItemContainer.ServerCloseRemoteInventory", ByPC); }
	void ServerOpenRemoteInventory(AShooterPlayerController * ByPC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureItemContainer.ServerOpenRemoteInventory", ByPC); }
	void SetContainerActive(bool bNewActive) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.SetContainerActive", bNewActive); }
	void SetDelayedActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.SetDelayedActivation"); }
	void SetDisabledTimer(float DisabledTime) { NativeCall<void, float>(this, "APrimalStructureItemContainer.SetDisabledTimer", DisabledTime); }
	void SetPlayerConstructor(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "APrimalStructureItemContainer.SetPlayerConstructor", PC); }
	void SetPoweredOverrideCounter(int NewPoweredOverrideCounter) { NativeCall<void, int>(this, "APrimalStructureItemContainer.SetPoweredOverrideCounter", NewPoweredOverrideCounter); }
	void Stasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Stasis"); }
	float SubtractWaterFromConnections(float Amount, bool bAllowNetworking) { return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromConnections", Amount, bAllowNetworking); }
	void TargetingTeamChanged() { NativeCall<void>(this, "APrimalStructureItemContainer.TargetingTeamChanged"); }
	void TryActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.TryActivation"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureItemContainer.TryMultiUse", ForPC, UseIndex); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Unstasis"); }
	void UpdateContainerActiveHealthDecrease() { NativeCall<void>(this, "APrimalStructureItemContainer.UpdateContainerActiveHealthDecrease"); }
	void UpdateSolarPower() { NativeCall<void>(this, "APrimalStructureItemContainer.UpdateSolarPower"); }
	void UpdateTribeGroupInventoryRank_Implementation(char NewRank) { NativeCall<void, char>(this, "APrimalStructureItemContainer.UpdateTribeGroupInventoryRank_Implementation", NewRank); }
	bool UseItemSpoilingTimeMultipliers() { return NativeCall<bool>(this, "APrimalStructureItemContainer.UseItemSpoilingTimeMultipliers"); }
	bool VerifyPinCode(int pinCode) { return NativeCall<bool, int>(this, "APrimalStructureItemContainer.VerifyPinCode", pinCode); }
	bool BPApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureItemContainer.BPApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	bool BPCanBeActivated() { return NativeCall<bool>(this, "APrimalStructureItemContainer.BPCanBeActivated"); }
	bool BPCanBeActivatedByPlayer(AShooterPlayerController * PC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureItemContainer.BPCanBeActivatedByPlayer", PC); }
	void BPContainerActivated() { NativeCall<void>(this, "APrimalStructureItemContainer.BPContainerActivated"); }
	void BPContainerDeactivated() { NativeCall<void>(this, "APrimalStructureItemContainer.BPContainerDeactivated"); }
	float BPGetFuelConsumptionMultiplier() { return NativeCall<float>(this, "APrimalStructureItemContainer.BPGetFuelConsumptionMultiplier"); }
	int BPGetQuantityOfItemWithoutCheckingInventory(TSubclassOf<UPrimalItem> ItemToCheckFor) { return NativeCall<int, TSubclassOf<UPrimalItem>>(this, "APrimalStructureItemContainer.BPGetQuantityOfItemWithoutCheckingInventory", ItemToCheckFor); }
	bool BPIsValidWaterSourceForPipe(APrimalStructureWaterPipe * ForWaterPipe) { return NativeCall<bool, APrimalStructureWaterPipe *>(this, "APrimalStructureItemContainer.BPIsValidWaterSourceForPipe", ForWaterPipe); }
	void BPNotifyInventoryItemChange(bool bIsItemAdd, UPrimalItem * theItem, bool bEquipItem) { NativeCall<void, bool, UPrimalItem *, bool>(this, "APrimalStructureItemContainer.BPNotifyInventoryItemChange", bIsItemAdd, theItem, bEquipItem); }
	void BPNotifyPowerChanged() { NativeCall<void>(this, "APrimalStructureItemContainer.BPNotifyPowerChanged"); }
	void BPNotifyRemoteViewerChange(bool bOpened) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.BPNotifyRemoteViewerChange", bOpened); }
	void BPOnContainerActiveHealthDecrease() { NativeCall<void>(this, "APrimalStructureItemContainer.BPOnContainerActiveHealthDecrease"); }
	FString * BPOverrideDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureItemContainer.BPOverrideDescriptiveName", result); }
	void BPPreGetMultiUseEntries(APlayerController * ForPC) { NativeCall<void, APlayerController *>(this, "APrimalStructureItemContainer.BPPreGetMultiUseEntries", ForPC); }
	void BPSetPlayerConstructor(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "APrimalStructureItemContainer.BPSetPlayerConstructor", PC); }
	bool IsValidForDinoFeedingContainer(APrimalDinoCharacter * ForDino) { return NativeCall<bool, APrimalDinoCharacter *>(this, "APrimalStructureItemContainer.IsValidForDinoFeedingContainer", ForDino); }
	void NetSetContainerActive(bool bSetActive, TSubclassOf<UPrimalItem> NetReplicatedFuelItemClass, __int16 NetReplicatedFuelItemColorIndex) { NativeCall<void, bool, TSubclassOf<UPrimalItem>, __int16>(this, "APrimalStructureItemContainer.NetSetContainerActive", bSetActive, NetReplicatedFuelItemClass, NetReplicatedFuelItemColorIndex); }
	void NetUpdateBoxName(const FString * NewName) { NativeCall<void, const FString *>(this, "APrimalStructureItemContainer.NetUpdateBoxName", NewName); }
	void OnContainerRenamed() { NativeCall<void>(this, "APrimalStructureItemContainer.OnContainerRenamed"); }
	void PowerGeneratorBuiltNearbyPoweredStructure(APrimalStructureItemContainer * PoweredStructure) { NativeCall<void, APrimalStructureItemContainer *>(this, "APrimalStructureItemContainer.PowerGeneratorBuiltNearbyPoweredStructure", PoweredStructure); }
	void UpdateTribeGroupInventoryRank(char NewRank) { NativeCall<void, char>(this, "APrimalStructureItemContainer.UpdateTribeGroupInventoryRank", NewRank); }
};

