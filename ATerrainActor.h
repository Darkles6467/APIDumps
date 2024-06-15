#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ATerrainActor : AActor
{
	char __padding[0x20L];
	TSubobjectPtr<UTerrainComponent>& TerrainComponentField() { return *GetNativePointerField<TSubobjectPtr<UTerrainComponent>*>(this, "ATerrainActor.TerrainComponent"); }
	AInstancedFoliageActor * FoliageActorField() { return GetNativePointerField<AInstancedFoliageActor *>(this, "ATerrainActor.FoliageActor"); }
	TArray<UHierarchicalInstancedStaticMeshComponent *>& HierarchicalInstancedStaticMeshComponentsField() { return *GetNativePointerField<TArray<UHierarchicalInstancedStaticMeshComponent *>*>(this, "ATerrainActor.HierarchicalInstancedStaticMeshComponents"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ATerrainActor.BeginPlay"); }
	void GenerateTerrain() { NativeCall<void>(this, "ATerrainActor.GenerateTerrain"); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "ATerrainActor.LoadedFromSaveGame"); }
};

