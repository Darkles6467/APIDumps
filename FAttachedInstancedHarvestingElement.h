#pragma once

#include "BaseDeclarations.h"
#include "FHarvestResourceEntry.h"
#include "UDamageType.h"
#include "FMultiUseEntry.h"

struct FAttachedInstanced
{
	char __padding[0x8L];

	// Functions

};

struct FAttachedInstancedHarvestingElement : FAttachedInstanced
{
	char __padding[0x98L];
	int& OriginalIndexIntoBaseField() { return *GetNativePointerField<int*>(this, "FAttachedInstancedHarvestingElement.OriginalIndexIntoBase"); }
	float& HarvestDamageCacheField() { return *GetNativePointerField<float*>(this, "FAttachedInstancedHarvestingElement.HarvestDamageCache"); }
	float& HarvestEffectivenessCacheField() { return *GetNativePointerField<float*>(this, "FAttachedInstancedHarvestingElement.HarvestEffectivenessCache"); }
	UPrimalHarvestingComponent * ParentHarvestingComponentField() { return GetNativePointerField<UPrimalHarvestingComponent *>(this, "FAttachedInstancedHarvestingElement.ParentHarvestingComponent"); }
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FAttachedInstancedHarvestingElement.Position"); }
	float& MaxHarvestHealthField() { return *GetNativePointerField<float*>(this, "FAttachedInstancedHarvestingElement.MaxHarvestHealth"); }
	float& CurrentHarvestHealthField() { return *GetNativePointerField<float*>(this, "FAttachedInstancedHarvestingElement.CurrentHarvestHealth"); }
	long double& LastDepletionTimeField() { return *GetNativePointerField<long double*>(this, "FAttachedInstancedHarvestingElement.LastDepletionTime"); }
	long double& LastReplenishTimeField() { return *GetNativePointerField<long double*>(this, "FAttachedInstancedHarvestingElement.LastReplenishTime"); }
	float& DepletionExhaustionEffectField() { return *GetNativePointerField<float*>(this, "FAttachedInstancedHarvestingElement.DepletionExhaustionEffect"); }
	float& NextReplenishIntervalField() { return *GetNativePointerField<float*>(this, "FAttachedInstancedHarvestingElement.NextReplenishInterval"); }

	// Functions

	void ApplyHarvestDamageEntryDamage(const FDamageHarvestingEntry * CurrentDamageEntry, bool bIsDirectDamage, UPrimalInventoryComponent * invComp, float Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser, TArray<FHarvestResourceEntry> * HarvestResourceEntryOverrides) { NativeCall<void, const FDamageHarvestingEntry *, bool, UPrimalInventoryComponent *, float, const FDamageEvent *, AController *, AActor *, TArray<FHarvestResourceEntry> *>(this, "FAttachedInstancedHarvestingElement.ApplyHarvestDamageEntryDamage", CurrentDamageEntry, bIsDirectDamage, invComp, Damage, DamageEvent, EventInstigator, DamageCauser, HarvestResourceEntryOverrides); }
	bool CheckForRepopulation(bool bForce, bool bDontCheckOverlaps, bool bDoExtraOverlapCheck, int TriggeredByTeamID) { return NativeCall<bool, bool, bool, bool, int>(this, "FAttachedInstancedHarvestingElement.CheckForRepopulation", bForce, bDontCheckOverlaps, bDoExtraOverlapCheck, TriggeredByTeamID); }
	void CleanUp() { NativeCall<void>(this, "FAttachedInstancedHarvestingElement.CleanUp"); }
	void DealDirectDamage(APlayerController * ForPC, float DamageAmount, TSubclassOf<UDamageType> DamageTypeClass, int hitBodyIndex) { NativeCall<void, APlayerController *, float, TSubclassOf<UDamageType>, int>(this, "FAttachedInstancedHarvestingElement.DealDirectDamage", ForPC, DamageAmount, DamageTypeClass, hitBodyIndex); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *, int>(this, "FAttachedInstancedHarvestingElement.GetMultiUseEntries", ForPC, MultiUseEntries, hitBodyIndex); }
	FVector * GetPositionOfInstance(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FAttachedInstancedHarvestingElement.GetPositionOfInstance", result); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "FAttachedInstancedHarvestingElement.GetWorld"); }
	void HarvestingComponentHidden() { NativeCall<void>(this, "FAttachedInstancedHarvestingElement.HarvestingComponentHidden"); }
	void HarvestingComponentShown() { NativeCall<void>(this, "FAttachedInstancedHarvestingElement.HarvestingComponentShown"); }
	bool IsVisibleAndActive() { return NativeCall<bool>(this, "FAttachedInstancedHarvestingElement.IsVisibleAndActive"); }
	void ReceiveComponentDamage(float Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, AController *, AActor *>(this, "FAttachedInstancedHarvestingElement.ReceiveComponentDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void Reset() { NativeCall<void>(this, "FAttachedInstancedHarvestingElement.Reset"); }
	void SetAttachedTo(UInstancedStaticMeshComponent * baseMeshComponent, int originalIndexIntoBase, const FVector * position, float instanceScale, bool bUnharvestable, const FRotator * instanceRotation) { NativeCall<void, UInstancedStaticMeshComponent *, int, const FVector *, float, bool, const FRotator *>(this, "FAttachedInstancedHarvestingElement.SetAttachedTo", baseMeshComponent, originalIndexIntoBase, position, instanceScale, bUnharvestable, instanceRotation); }
	void ShowHarvestingElement(ShowHarvestingElementOption Option) { NativeCall<void, ShowHarvestingElementOption>(this, "FAttachedInstancedHarvestingElement.ShowHarvestingElement", Option); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController *, int, int>(this, "FAttachedInstancedHarvestingElement.TryMultiUse", ForPC, UseIndex, hitBodyIndex); }
};

