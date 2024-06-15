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

struct APrimalStructureUnderwaterBase : APrimalStructureItemContainer
{
	char __padding[0xc8L];
	TArray<bool>& PortholeOpenField() { return *GetNativePointerField<TArray<bool>*>(this, "APrimalStructureUnderwaterBase.PortholeOpen"); }
	TArray<bool>& PortholeLockedField() { return *GetNativePointerField<TArray<bool>*>(this, "APrimalStructureUnderwaterBase.PortholeLocked"); }
	TArray<bool>& PortholeOpenSaveStateField() { return *GetNativePointerField<TArray<bool>*>(this, "APrimalStructureUnderwaterBase.PortholeOpenSaveState"); }
	TArray<FPorthole>& PortholesField() { return *GetNativePointerField<TArray<FPorthole>*>(this, "APrimalStructureUnderwaterBase.Portholes"); }
	UBoxComponent * InteriorBoxField() { return GetNativePointerField<UBoxComponent *>(this, "APrimalStructureUnderwaterBase.InteriorBox"); }
	TArray<unsigned int>& CurrentPinCodesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "APrimalStructureUnderwaterBase.CurrentPinCodes"); }
	TArray<int>& ForcePortholesClosedIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "APrimalStructureUnderwaterBase.ForcePortholesClosedIndices"); }
	TArray<FString>& PortholeNameOverridesField() { return *GetNativePointerField<TArray<FString>*>(this, "APrimalStructureUnderwaterBase.PortholeNameOverrides"); }
	long double& LastTogglePortholeStateTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureUnderwaterBase.LastTogglePortholeStateTime"); }

	// Functions

	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureUnderwaterBase.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void BPRefreshFloodState() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.BPRefreshFloodState"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.BeginPlay"); }
	bool CanOpenPorthole(const FPorthole * porthole) { return NativeCall<bool, const FPorthole *>(this, "APrimalStructureUnderwaterBase.CanOpenPorthole", porthole); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureUnderwaterBase.ClientMultiUse", ForPC, UseIndex); }
	void ContainerActivated() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.ContainerActivated"); }
	void ContainerDeactivated() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.ContainerDeactivated"); }
	void DoSetPortholeState(int index, bool bOpen) { NativeCall<void, int, bool>(this, "APrimalStructureUnderwaterBase.DoSetPortholeState", index, bOpen); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureUnderwaterBase.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureUnderwaterBase.GetMultiUseEntries", ForPC, MultiUseEntries); }
	bool HasOpenPortholesWithBase(APrimalStructureUnderwaterBase * structure) { return NativeCall<bool, APrimalStructureUnderwaterBase *>(this, "APrimalStructureUnderwaterBase.HasOpenPortholesWithBase", structure); }
	bool HasOpenPortholesWithWater() { return NativeCall<bool>(this, "APrimalStructureUnderwaterBase.HasOpenPortholesWithWater"); }
	bool IsInsideBase(const FVector * AtPoint) { return NativeCall<bool, const FVector *>(this, "APrimalStructureUnderwaterBase.IsInsideBase", AtPoint); }
	void ModifyHudMultiUseLoc_Implementation(FVector2D * theVec, APlayerController * PC, int index) { NativeCall<void, FVector2D *, APlayerController *, int>(this, "APrimalStructureUnderwaterBase.ModifyHudMultiUseLoc_Implementation", theVec, PC, index); }
	void MultiSetPortholeStates_Implementation(const TArray<bool> * portholes) { NativeCall<void, const TArray<bool> *>(this, "APrimalStructureUnderwaterBase.MultiSetPortholeStates_Implementation", portholes); }
	void OnRep_IsFlooded() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.OnRep_IsFlooded"); }
	void ParseGraphForFloods(TArray<APrimalStructure *> * InFloodedBases, TArray<APrimalStructure *> * ClosedBases) { NativeCall<void, TArray<APrimalStructure *> *, TArray<APrimalStructure *> *>(this, "APrimalStructureUnderwaterBase.ParseGraphForFloods", InFloodedBases, ClosedBases); }
	void PlacedStructure(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureUnderwaterBase.PlacedStructure", PC); }
	void PopulatePortholes() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.PopulatePortholes"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.PreInitializeComponents"); }
	void PreLinkedStructure() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.PreLinkedStructure"); }
	void PushFloodState(bool bShouldFlood) { NativeCall<void, bool>(this, "APrimalStructureUnderwaterBase.PushFloodState", bShouldFlood); }
	void RefreshFloodState(bool bDontIncrementTagger) { NativeCall<void, bool>(this, "APrimalStructureUnderwaterBase.RefreshFloodState", bDontIncrementTagger); }
	void RefreshLinkedPorthole(const FPorthole * porthole) { NativeCall<void, const FPorthole *>(this, "APrimalStructureUnderwaterBase.RefreshLinkedPorthole", porthole); }
	void RefreshPortholeLinks() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.RefreshPortholeLinks"); }
	void RemovedLinkedStructure(APrimalStructure * Structure) { NativeCall<void, APrimalStructure *>(this, "APrimalStructureUnderwaterBase.RemovedLinkedStructure", Structure); }
	void SetPortholeLocked_Implementation(int index, bool bLocked) { NativeCall<void, int, bool>(this, "APrimalStructureUnderwaterBase.SetPortholeLocked_Implementation", index, bLocked); }
	void SetPortholeState_Implementation(int index, bool bOpen) { NativeCall<void, int, bool>(this, "APrimalStructureUnderwaterBase.SetPortholeState_Implementation", index, bOpen); }
	void SetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.SetStructureCollisionChannels"); }
	void SetupDynamicMeshMaterials(UMeshComponent * meshComp) { NativeCall<void, UMeshComponent *>(this, "APrimalStructureUnderwaterBase.SetupDynamicMeshMaterials", meshComp); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureUnderwaterBase.TryMultiUse", ForPC, UseIndex); }
	void UpdateCurrentPinCodes_Implementation(const TArray<unsigned int> * NewPinCodes) { NativeCall<void, const TArray<unsigned int> *>(this, "APrimalStructureUnderwaterBase.UpdateCurrentPinCodes_Implementation", NewPinCodes); }
	void ChangedCompartmentFloodState() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.ChangedCompartmentFloodState"); }
	void SetPortholeLocked(int index, bool bLocked) { NativeCall<void, int, bool>(this, "APrimalStructureUnderwaterBase.SetPortholeLocked", index, bLocked); }
	void SetPortholeState(int index, bool bOpen) { NativeCall<void, int, bool>(this, "APrimalStructureUnderwaterBase.SetPortholeState", index, bOpen); }
};

