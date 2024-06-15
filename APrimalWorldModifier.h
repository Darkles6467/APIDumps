#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrimalWorldModifier : AActor
{
	char __padding[0x78L];
	bool& bUseMapExclusionListAsExclusiveListField() { return *GetNativePointerField<bool*>(this, "APrimalWorldModifier.bUseMapExclusionListAsExclusiveList"); }
	TArray<FString>& MapExclusionListField() { return *GetNativePointerField<TArray<FString>*>(this, "APrimalWorldModifier.MapExclusionList"); }
	TArray<FName>& PriorityTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalWorldModifier.PriorityTags"); }
	TArray<AInstancedFoliageActor *>& ReskinnedFoliageTrackingListField() { return *GetNativePointerField<TArray<AInstancedFoliageActor *>*>(this, "APrimalWorldModifier.ReskinnedFoliageTrackingList"); }
	TArray<FFoliageReskinDefinition>& FoliageReskinListField() { return *GetNativePointerField<TArray<FFoliageReskinDefinition>*>(this, "APrimalWorldModifier.FoliageReskinList"); }
	TArray<FSublevelOverrideGroup>& SublevelOverrideGroupsField() { return *GetNativePointerField<TArray<FSublevelOverrideGroup>*>(this, "APrimalWorldModifier.SublevelOverrideGroups"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalWorldModifier.BeginPlay"); }
	void DoRescanForSublevelLoaded() { NativeCall<void>(this, "APrimalWorldModifier.DoRescanForSublevelLoaded"); }
	void GetCurrentSublevelOverrideGroup(FSublevelOverrideGroup * outSublevelOverrideGroup) { NativeCall<void, FSublevelOverrideGroup *>(this, "APrimalWorldModifier.GetCurrentSublevelOverrideGroup", outSublevelOverrideGroup); }
	bool HasPriority() { return NativeCall<bool>(this, "APrimalWorldModifier.HasPriority"); }
	bool IsAllowedOnCurrentMap() { return NativeCall<bool>(this, "APrimalWorldModifier.IsAllowedOnCurrentMap"); }
	void PreMapLoad() { NativeCall<void>(this, "APrimalWorldModifier.PreMapLoad"); }
	void RescanForFoliage() { NativeCall<void>(this, "APrimalWorldModifier.RescanForFoliage"); }
	void RescanForMapStaticMeshes() { NativeCall<void>(this, "APrimalWorldModifier.RescanForMapStaticMeshes"); }
	void TryFoliageReskin(AInstancedFoliageActor * ForFoliageActor) { NativeCall<void, AInstancedFoliageActor *>(this, "APrimalWorldModifier.TryFoliageReskin", ForFoliageActor); }
	void TryStaticMeshActorReskin(AStaticMeshActor * ForStaticMeshActor, FSublevelOverrideGroup * CurrentSublevelOverrideGroup) { NativeCall<void, AStaticMeshActor *, FSublevelOverrideGroup *>(this, "APrimalWorldModifier.TryStaticMeshActorReskin", ForStaticMeshActor, CurrentSublevelOverrideGroup); }
	void TrySublevelSwaps() { NativeCall<void>(this, "APrimalWorldModifier.TrySublevelSwaps"); }
	void BPPostFoliageScan() { NativeCall<void>(this, "APrimalWorldModifier.BPPostFoliageScan"); }
	void BPPostInitializationHasPriority() { NativeCall<void>(this, "APrimalWorldModifier.BPPostInitializationHasPriority"); }
	void BPPreFoliageScan() { NativeCall<void>(this, "APrimalWorldModifier.BPPreFoliageScan"); }
	void BPSkinFoliage(UHierarchicalInstancedStaticMeshComponent * FoliageInstance) { NativeCall<void, UHierarchicalInstancedStaticMeshComponent *>(this, "APrimalWorldModifier.BPSkinFoliage", FoliageInstance); }
};

