#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UDamageType.h"
#include "FMultiUseEntry.h"
#include "FHarvestResourceEntry.h"

struct UPrimalHarvestingComponent : UActorComponent
{
	char __padding[0x178L];
	TArray<FHarvestResourceEntry>& HarvestResourceEntriesField() { return *GetNativePointerField<TArray<FHarvestResourceEntry>*>(this, "UPrimalHarvestingComponent.HarvestResourceEntries"); }
	TArray<FHarvestResourceEntry>& BaseHarvestResourceEntriesField() { return *GetNativePointerField<TArray<FHarvestResourceEntry>*>(this, "UPrimalHarvestingComponent.BaseHarvestResourceEntries"); }
	TArray<FDamageHarvestingEntry>& HarvestDamageTypeEntriesField() { return *GetNativePointerField<TArray<FDamageHarvestingEntry>*>(this, "UPrimalHarvestingComponent.HarvestDamageTypeEntries"); }
	float& MaxHarvestHealthField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MaxHarvestHealth"); }
	float& ExtraHarvestingXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ExtraHarvestingXPMultiplier"); }
	float& HarvestHealthGiveResourceIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.HarvestHealthGiveResourceInterval"); }
	float& CurrentHarvestHealthField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.CurrentHarvestHealth"); }
	bool& bIsUnharvestableField() { return *GetNativePointerField<bool*>(this, "UPrimalHarvestingComponent.bIsUnharvestable"); }
	int& AssignedToTribeIDField() { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.AssignedToTribeID"); }
	float& UseHarvestDamageAmountField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.UseHarvestDamageAmount"); }
	FString& DescriptiveNameField() { return *GetNativePointerField<FString*>(this, "UPrimalHarvestingComponent.DescriptiveName"); }
	FString& UseHarvestStringField() { return *GetNativePointerField<FString*>(this, "UPrimalHarvestingComponent.UseHarvestString"); }
	FString& UnequipWeaponToUseHarvestStringField() { return *GetNativePointerField<FString*>(this, "UPrimalHarvestingComponent.UnequipWeaponToUseHarvestString"); }
	float& UsableHarvestSphereRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.UsableHarvestSphereRadius"); }
	bool& ShouldReplenishField() { return *GetNativePointerField<bool*>(this, "UPrimalHarvestingComponent.ShouldReplenish"); }
	float& MinPlayerDistanceReplenishingField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MinPlayerDistanceReplenishing"); }
	float& MinStructureDistanceReplenishingField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MinStructureDistanceReplenishing"); }
	float& MinNonCoreStructureDistanceReplenishingField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MinNonCoreStructureDistanceReplenishing"); }
	float& BaseMinTimeAfterDepletionReplenishingField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.BaseMinTimeAfterDepletionReplenishing"); }
	float& BaseMaxTimeAfterDepletionReplenishingField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.BaseMaxTimeAfterDepletionReplenishing"); }
	float& ExhaustedDepletionTimeIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ExhaustedDepletionTimeInterval"); }
	float& ExhaustedDepletionPowerField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ExhaustedDepletionPower"); }
	float& ExhaustedDepletionEffectScaleField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ExhaustedDepletionEffectScale"); }
	float& ReduceExhaustedDepletionSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ReduceExhaustedDepletionSpeed"); }
	float& AutoReplenishIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.AutoReplenishInterval"); }
	float& AutoReplenishPercentField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.AutoReplenishPercent"); }
	float& DamageInstigatorAmountField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.DamageInstigatorAmount"); }
	int& GiveItemEntriesMinField() { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.GiveItemEntriesMin"); }
	int& GiveItemEntriesMaxField() { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.GiveItemEntriesMax"); }
	float& TamedDinoHarvestGiveHealthMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.TamedDinoHarvestGiveHealthMultiplier"); }
	FString& UIStringIMeleeHitToHarvestField() { return *GetNativePointerField<FString*>(this, "UPrimalHarvestingComponent.UIStringIMeleeHitToHarvest"); }
	FString& UIStringHarvestRequiresToolField() { return *GetNativePointerField<FString*>(this, "UPrimalHarvestingComponent.UIStringHarvestRequiresTool"); }
	FString& UIStringCantHarvestUnderwaterField() { return *GetNativePointerField<FString*>(this, "UPrimalHarvestingComponent.UIStringCantHarvestUnderwater"); }
	float& DinoHarvestGiveHealthAmountField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.DinoHarvestGiveHealthAmount"); }
	float& DinoHarvestGiveHealthSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.DinoHarvestGiveHealthSpeed"); }
	int& DinoHarvestGiveHealthDescriptionIndexField() { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.DinoHarvestGiveHealthDescriptionIndex"); }
	float& HarvestingPriorityField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.HarvestingPriority"); }
	TArray<FComponentAttachmentEntry>& AdditionalComponentAttachmentsField() { return *GetNativePointerField<TArray<FComponentAttachmentEntry>*>(this, "UPrimalHarvestingComponent.AdditionalComponentAttachments"); }
	TArray<FComponentAttachmentEntry>& AdditionalComponentAttachmentsDedicatedField() { return *GetNativePointerField<TArray<FComponentAttachmentEntry>*>(this, "UPrimalHarvestingComponent.AdditionalComponentAttachmentsDedicated"); }

	// Functions

	int BPCustomHarvestResource_Implementation(UPrimalInventoryComponent * invComp, int NumToGive, TSubclassOf<UDamageType> DamageTypeClass, AActor * ToActor) { return NativeCall<int, UPrimalInventoryComponent *, int, TSubclassOf<UDamageType>, AActor *>(this, "UPrimalHarvestingComponent.BPCustomHarvestResource_Implementation", invComp, NumToGive, DamageTypeClass, ToActor); }
	void DealDirectDamage(APlayerController * ForPC, float DamageAmount, TSubclassOf<UDamageType> DamageTypeClass) { NativeCall<void, APlayerController *, float, TSubclassOf<UDamageType>>(this, "UPrimalHarvestingComponent.DealDirectDamage", ForPC, DamageAmount, DamageTypeClass); }
	float GetCurrentHarvestHealth() { return NativeCall<float>(this, "UPrimalHarvestingComponent.GetCurrentHarvestHealth"); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *, int>(this, "UPrimalHarvestingComponent.GetMultiUseEntries", ForPC, MultiUseEntries, hitBodyIndex); }
	void GiveHarvestResource(UPrimalInventoryComponent * invComp, float AdditionalEffectiveness, TSubclassOf<UDamageType> DamageTypeClass, AActor * ToActor, TArray<FHarvestResourceEntry> * HarvestResourceEntryOverrides) { NativeCall<void, UPrimalInventoryComponent *, float, TSubclassOf<UDamageType>, AActor *, TArray<FHarvestResourceEntry> *>(this, "UPrimalHarvestingComponent.GiveHarvestResource", invComp, AdditionalEffectiveness, DamageTypeClass, ToActor, HarvestResourceEntryOverrides); }
	bool IsValidHarvestingDamageType(TSubclassOf<UDamageType> DamageTypeClass) { return NativeCall<bool, TSubclassOf<UDamageType>>(this, "UPrimalHarvestingComponent.IsValidHarvestingDamageType", DamageTypeClass); }
	bool ShouldAddToActorComponents() { return NativeCall<bool>(this, "UPrimalHarvestingComponent.ShouldAddToActorComponents"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController *, int, int>(this, "UPrimalHarvestingComponent.TryMultiUse", ForPC, UseIndex, hitBodyIndex); }
	bool WantsInstanceRotation() { return NativeCall<bool>(this, "UPrimalHarvestingComponent.WantsInstanceRotation"); }
	int BPCustomHarvestResource(UPrimalInventoryComponent * invComp, int NumToGive, TSubclassOf<UDamageType> DamageTypeClass, AActor * ToActor) { return NativeCall<int, UPrimalInventoryComponent *, int, TSubclassOf<UDamageType>, AActor *>(this, "UPrimalHarvestingComponent.BPCustomHarvestResource", invComp, NumToGive, DamageTypeClass, ToActor); }
	void BPRecieveComponentDamage(float Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, AController *, AActor *>(this, "UPrimalHarvestingComponent.BPRecieveComponentDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
};

