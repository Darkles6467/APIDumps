#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FMultiUseEntry.h"

struct AInstancedFoliageActor : AActor
{
	char __padding[0xc0L];
	float& EditorScrollPercentField() { return *GetNativePointerField<float*>(this, "AInstancedFoliageActor.EditorScrollPercent"); }
	TArray<UHierarchicalInstancedStaticMeshComponent *>& InstancedStaticMeshComponentField() { return *GetNativePointerField<TArray<UHierarchicalInstancedStaticMeshComponent *>*>(this, "AInstancedFoliageActor.InstancedStaticMeshComponent"); }
	TArray<FString>& BaseMeshLookupField() { return *GetNativePointerField<TArray<FString>*>(this, "AInstancedFoliageActor.BaseMeshLookup"); }
	TArray<FFoliageOctreeClusterData *>& OctreeClusterDataField() { return *GetNativePointerField<TArray<FFoliageOctreeClusterData *>*>(this, "AInstancedFoliageActor.OctreeClusterData"); }
	TArray<UStaticMesh *>& StaticMeshRefsField() { return *GetNativePointerField<TArray<UStaticMesh *>*>(this, "AInstancedFoliageActor.StaticMeshRefs"); }
	struct TOctree<FFoliageOctreeClusterData *,FFoliageOctreeSemantics> * FoliageOctreeField() { return GetNativePointerField<struct TOctree<FFoliageOctreeClusterData *,FFoliageOctreeSemantics> *>(this, "AInstancedFoliageActor.FoliageOctree"); }
	int& LastSkippedUpdateTimeField() { return *GetNativePointerField<int*>(this, "AInstancedFoliageActor.LastSkippedUpdateTime"); }

	// Functions

	FFoliageMeshInfo * AddMesh(UFoliageType * InType) { return NativeCall<FFoliageMeshInfo *, UFoliageType *>(this, "AInstancedFoliageActor.AddMesh", InType); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "AInstancedFoliageActor.AddReferencedObjects", InThis, Collector); }
	void ApplyChanges() { NativeCall<void>(this, "AInstancedFoliageActor.ApplyChanges"); }
	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "AInstancedFoliageActor.ApplyWorldOffset", InOffset, bWorldShift); }
	void BPConvertStaticMeshActorsToFoliage(const TArray<AStaticMeshActor *> * InActors, TArray<AStaticMeshActor *> * OutConvertedActors) { NativeCall<void, const TArray<AStaticMeshActor *> *, TArray<AStaticMeshActor *> *>(this, "AInstancedFoliageActor.BPConvertStaticMeshActorsToFoliage", InActors, OutConvertedActors); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AInstancedFoliageActor.EndPlay", EndPlayReason); }
	FFoliageMeshInfo * FindOrAddMesh(UFoliageType * InType) { return NativeCall<FFoliageMeshInfo *, UFoliageType *>(this, "AInstancedFoliageActor.FindOrAddMesh", InType); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "AInstancedFoliageActor.GetMultiUseEntries", ForPC, MultiUseEntries); }
	void PostLoad() { NativeCall<void>(this, "AInstancedFoliageActor.PostLoad"); }
	void PreSave() { NativeCall<void>(this, "AInstancedFoliageActor.PreSave"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "AInstancedFoliageActor.Serialize", Ar); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "AInstancedFoliageActor.TryMultiUse", ForPC, UseIndex); }
	void UpdateFromViewQuality() { NativeCall<void>(this, "AInstancedFoliageActor.UpdateFromViewQuality"); }
};

