#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct APrimalStructureWaterPipe : APrimalStructure
{
	char __padding[0x20L];
	float& AutoDestroyPeriodWhenUnconnectedToNonPipeField() { return *GetNativePointerField<float*>(this, "APrimalStructureWaterPipe.AutoDestroyPeriodWhenUnconnectedToNonPipe"); }
	int& WaterMaterialIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructureWaterPipe.WaterMaterialIndex"); }

	// Functions

	void AddedLinkedStructure(APrimalStructure * Structure) { NativeCall<void, APrimalStructure *>(this, "APrimalStructureWaterPipe.AddedLinkedStructure", Structure); }
	bool CheckForWater(TSet<APrimalStructure *,DefaultKeyFuncs<APrimalStructure *,0>,FDefaultSetAllocator> * TestedStructures, bool bAllowWateredOverride, APrimalStructureWaterPipe * OriginalWaterPipe) { return NativeCall<bool, TSet<APrimalStructure *,DefaultKeyFuncs<APrimalStructure *,0>,FDefaultSetAllocator> *, bool, APrimalStructureWaterPipe *>(this, "APrimalStructureWaterPipe.CheckForWater", TestedStructures, bAllowWateredOverride, OriginalWaterPipe); }
	void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructureWaterPipe.FinalLoadedFromSaveGame"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureWaterPipe.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool Internal_CheckForNonPipeLink() { return NativeCall<bool>(this, "APrimalStructureWaterPipe.Internal_CheckForNonPipeLink"); }
	void Internal_PushNonPipeLink(bool bHasLinkToNonPipe) { NativeCall<void, bool>(this, "APrimalStructureWaterPipe.Internal_PushNonPipeLink", bHasLinkToNonPipe); }
	void OnRep_HasWater(bool bPreviousHasWater) { NativeCall<void, bool>(this, "APrimalStructureWaterPipe.OnRep_HasWater", bPreviousHasWater); }
	void ParseGraphForWater(TArray<APrimalStructure *> * InContainerOverrideWaterSpots, TArray<APrimalStructure *> * InAlwaysWaterSpots, APrimalStructureWaterPipe * OriginalWaterPipe) { NativeCall<void, TArray<APrimalStructure *> *, TArray<APrimalStructure *> *, APrimalStructureWaterPipe *>(this, "APrimalStructureWaterPipe.ParseGraphForWater", InContainerOverrideWaterSpots, InAlwaysWaterSpots, OriginalWaterPipe); }
	void PlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalStructureWaterPipe.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureWaterPipe.PostInitializeComponents"); }
	void PreLinkedStructure() { NativeCall<void>(this, "APrimalStructureWaterPipe.PreLinkedStructure"); }
	void PushWaterState(bool bHasInContainerOverrideSpots, bool bHasAlwaysWaterSpots) { NativeCall<void, bool, bool>(this, "APrimalStructureWaterPipe.PushWaterState", bHasInContainerOverrideSpots, bHasAlwaysWaterSpots); }
	void RefreshLinkedToNonPipeState() { NativeCall<void>(this, "APrimalStructureWaterPipe.RefreshLinkedToNonPipeState"); }
	void RefreshWaterState() { NativeCall<void>(this, "APrimalStructureWaterPipe.RefreshWaterState"); }
	void RemovedLinkedStructure(APrimalStructure * Structure) { NativeCall<void, APrimalStructure *>(this, "APrimalStructureWaterPipe.RemovedLinkedStructure", Structure); }
	void SetHasWater(bool bNewHasWater) { NativeCall<void, bool>(this, "APrimalStructureWaterPipe.SetHasWater", bNewHasWater); }
	void SubtractWaterFromConnections(float Amount, float * AmountRemoved, TArray<APrimalStructure *> * TestedStructures, bool bAllowNetworking) { NativeCall<void, float, float *, TArray<APrimalStructure *> *, bool>(this, "APrimalStructureWaterPipe.SubtractWaterFromConnections", Amount, AmountRemoved, TestedStructures, bAllowNetworking); }
	void SubtractWaterFromConnections_Internal(float Amount, float * AmountRemoved, TArray<APrimalStructure *> * TestedStructures, bool bAllowNetworking) { NativeCall<void, float, float *, TArray<APrimalStructure *> *, bool>(this, "APrimalStructureWaterPipe.SubtractWaterFromConnections_Internal", Amount, AmountRemoved, TestedStructures, bAllowNetworking); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureWaterPipe.Unstasis"); }
	static void RefreshHasSourceMaterials(void * __formal) { NativeCall<void, void *>(nullptr, "APrimalStructureWaterPipe.RefreshHasSourceMaterials", __formal); }
	void BPOnWaterStateChange(bool bPipeHasWaterOrPower) { NativeCall<void, bool>(this, "APrimalStructureWaterPipe.BPOnWaterStateChange", bPipeHasWaterOrPower); }
};

