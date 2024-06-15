#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AHibernationManager : AActor
{
	char __padding[0xa8L];
	TOctree<FHibernationEntity *,FHibernationOctreeSemantics> * OctreeField() { return GetNativePointerField<TOctree<FHibernationEntity *,FHibernationOctreeSemantics> *>(this, "AHibernationManager.Octree"); }

	// Functions

	void FClassIDData(const AHibernationManager::FClassIDData * __that) { NativeCall<void, const AHibernationManager::FClassIDData *>(this, "AHibernationManager.FClassIDData", __that); }
	bool Awaken(FHibernationEntity * InEntity, bool bConfirmOnly) { return NativeCall<bool, FHibernationEntity *, bool>(this, "AHibernationManager.Awaken", InEntity, bConfirmOnly); }
	void AwakenActorsForPlayers() { NativeCall<void>(this, "AHibernationManager.AwakenActorsForPlayers"); }
	void BeginDestroy() { NativeCall<void>(this, "AHibernationManager.BeginDestroy"); }
	void BeginPlay() { NativeCall<void>(this, "AHibernationManager.BeginPlay"); }
	void FailedLoad() { NativeCall<void>(this, "AHibernationManager.FailedLoad"); }
	bool Hibernate(AActor * InActor) { return NativeCall<bool, AActor *>(this, "AHibernationManager.Hibernate", InActor); }
	void SerializeForSaveFile(FArchive * Ar, bool bDontActuallyUse) { NativeCall<void, FArchive *, bool>(this, "AHibernationManager.SerializeForSaveFile", Ar, bDontActuallyUse); }
};

