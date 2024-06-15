#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct UTerrainComponent : UActorComponent
{
	char __padding[0x220L];
	TSubclassOf<UTerrainGenerator>& TerrainGeneratorTempleteField() { return *GetNativePointerField<TSubclassOf<UTerrainGenerator>*>(this, "UTerrainComponent.TerrainGeneratorTemplete"); }
	float& BlockingVolumeAreaRatioOfTerrainField() { return *GetNativePointerField<float*>(this, "UTerrainComponent.BlockingVolumeAreaRatioOfTerrain"); }
	int& PreviewSizeField() { return *GetNativePointerField<int*>(this, "UTerrainComponent.PreviewSize"); }
	UTerrainGenerator * TerrainGeneratorField() { return GetNativePointerField<UTerrainGenerator *>(this, "UTerrainComponent.TerrainGenerator"); }
	FVector& BiomeMapOffsetField() { return *GetNativePointerField<FVector*>(this, "UTerrainComponent.BiomeMapOffset"); }
	FVector& BiomeUnitScaleField() { return *GetNativePointerField<FVector*>(this, "UTerrainComponent.BiomeUnitScale"); }
	FVector& BiomeUnitDisplacementField() { return *GetNativePointerField<FVector*>(this, "UTerrainComponent.BiomeUnitDisplacement"); }
	int& SectionsPerComponentField() { return *GetNativePointerField<int*>(this, "UTerrainComponent.SectionsPerComponent"); }
	int& QuadsPerSectionField() { return *GetNativePointerField<int*>(this, "UTerrainComponent.QuadsPerSection"); }
	FTerrainInfo& ReplicatedTerrainInfoField() { return *GetNativePointerField<FTerrainInfo*>(this, "UTerrainComponent.ReplicatedTerrainInfo"); }
	int& TerrainMapSizeXField() { return *GetNativePointerField<int*>(this, "UTerrainComponent.TerrainMapSizeX"); }
	int& TerrainMapSizeYField() { return *GetNativePointerField<int*>(this, "UTerrainComponent.TerrainMapSizeY"); }
	int& MapSeedField() { return *GetNativePointerField<int*>(this, "UTerrainComponent.MapSeed"); }
	int& NumberOfThreadsField() { return *GetNativePointerField<int*>(this, "UTerrainComponent.NumberOfThreads"); }
	FVector& LandscapeScaleField() { return *GetNativePointerField<FVector*>(this, "UTerrainComponent.LandscapeScale"); }
	float& LandscapeRadiusField() { return *GetNativePointerField<float*>(this, "UTerrainComponent.LandscapeRadius"); }
	FVector& BiomeGridSizeField() { return *GetNativePointerField<FVector*>(this, "UTerrainComponent.BiomeGridSize"); }
	FVector& NPCGridSizeField() { return *GetNativePointerField<FVector*>(this, "UTerrainComponent.NPCGridSize"); }
	float& BiomeHeightField() { return *GetNativePointerField<float*>(this, "UTerrainComponent.BiomeHeight"); }
	float& NPCZoneHeightField() { return *GetNativePointerField<float*>(this, "UTerrainComponent.NPCZoneHeight"); }
	FVector2D& SupplyDropsGridSizeField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainComponent.SupplyDropsGridSize"); }
	TArray<ABiomeZoneVolume *>& BiomeZoneVolumesField() { return *GetNativePointerField<TArray<ABiomeZoneVolume *>*>(this, "UTerrainComponent.BiomeZoneVolumes"); }
	TArray<ANPCZoneSpawnVolume *>& NPCZoneSpawnVolumesField() { return *GetNativePointerField<TArray<ANPCZoneSpawnVolume *>*>(this, "UTerrainComponent.NPCZoneSpawnVolumes"); }
	TArray<ANPCZoneVolume *>& NPCZoneVolumesField() { return *GetNativePointerField<TArray<ANPCZoneVolume *>*>(this, "UTerrainComponent.NPCZoneVolumes"); }
	FString& PGTerrainPropertiesStringField() { return *GetNativePointerField<FString*>(this, "UTerrainComponent.PGTerrainPropertiesString"); }
	ALandscape * LandscapeField() { return GetNativePointerField<ALandscape *>(this, "UTerrainComponent.Landscape"); }
	bool& bDecorationCreatedField() { return *GetNativePointerField<bool*>(this, "UTerrainComponent.bDecorationCreated"); }
	AInstancedFoliageActor * FoliageActorField() { return GetNativePointerField<AInstancedFoliageActor *>(this, "UTerrainComponent.FoliageActor"); }
	FString& CacheNameField() { return *GetNativePointerField<FString*>(this, "UTerrainComponent.CacheName"); }

	// Functions

	void ApplyToLandscape(UFloatMap * FloatMap, const TArray<FString> * WeightmapsNames, const TArray<UByteMap *> * Weightmaps, UMaterialInterface * LandscapeMaterial, UObjectMap * PerComponentMaterialOverride) { NativeCall<void, UFloatMap *, const TArray<FString> *, const TArray<UByteMap *> *, UMaterialInterface *, UObjectMap *>(this, "UTerrainComponent.ApplyToLandscape", FloatMap, WeightmapsNames, Weightmaps, LandscapeMaterial, PerComponentMaterialOverride); }
	void ApplyToTexture(UFloatMap * FloatMap, UTexture2D ** HeightmapTexture, float Minimum, float Maximum) { NativeCall<void, UFloatMap *, UTexture2D **, float, float>(this, "UTerrainComponent.ApplyToTexture", FloatMap, HeightmapTexture, Minimum, Maximum); }
	void AssignSupplyPointsToVolumes(TArray<AActor *> * SupplyDropPoints, TArray<ASupplyCrateSpawningVolume *> * Volumes) { NativeCall<void, TArray<AActor *> *, TArray<ASupplyCrateSpawningVolume *> *>(this, "UTerrainComponent.AssignSupplyPointsToVolumes", SupplyDropPoints, Volumes); }
	void ClearFromFloatCache() { NativeCall<void>(this, "UTerrainComponent.ClearFromFloatCache"); }
	void CreateDecorations(UFloatMap * HeightMap, UObjectMap * ObjectMap, bool bLoadedFromFile) { NativeCall<void, UFloatMap *, UObjectMap *, bool>(this, "UTerrainComponent.CreateDecorations", HeightMap, ObjectMap, bLoadedFromFile); }
	void FillBiomeVolumeSettings(UObjectMap * BiomeMap) { NativeCall<void, UObjectMap *>(this, "UTerrainComponent.FillBiomeVolumeSettings", BiomeMap); }
	void FillFromFloatCache() { NativeCall<void>(this, "UTerrainComponent.FillFromFloatCache"); }
	void FillNPCVolumeSettings(UObjectMap * NPCMap) { NativeCall<void, UObjectMap *>(this, "UTerrainComponent.FillNPCVolumeSettings", NPCMap); }
	void FillSupplyCrateSpawningVolumes(UObjectMap * ObjectsMap, FVector2D GridSize, TArray<ASupplyCrateSpawningVolume *> * Volumes) { NativeCall<void, UObjectMap *, FVector2D, TArray<ASupplyCrateSpawningVolume *> *>(this, "UTerrainComponent.FillSupplyCrateSpawningVolumes", ObjectsMap, GridSize, Volumes); }
	void FitchBiomeVolumes() { NativeCall<void>(this, "UTerrainComponent.FitchBiomeVolumes"); }
	void FitchNPCVolumes() { NativeCall<void>(this, "UTerrainComponent.FitchNPCVolumes"); }
	TArray<ASupplyCrateSpawningVolume *> * FitchSupplyCrateSpawningVolumes(TArray<ASupplyCrateSpawningVolume *> * result) { return NativeCall<TArray<ASupplyCrateSpawningVolume *> *, TArray<ASupplyCrateSpawningVolume *> *>(this, "UTerrainComponent.FitchSupplyCrateSpawningVolumes", result); }
	void GenerateTerrain(bool bLoadedFromFile) { NativeCall<void, bool>(this, "UTerrainComponent.GenerateTerrain", bLoadedFromFile); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UTerrainComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void OnRep_TerrainInfo() { NativeCall<void>(this, "UTerrainComponent.OnRep_TerrainInfo"); }
	void SetSpawnPointsRegion() { NativeCall<void>(this, "UTerrainComponent.SetSpawnPointsRegion"); }
	void SpawnBlockingVolumeMeshes() { NativeCall<void>(this, "UTerrainComponent.SpawnBlockingVolumeMeshes"); }
};

