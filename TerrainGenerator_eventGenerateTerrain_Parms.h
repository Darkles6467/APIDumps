#pragma once

#include "BaseDeclarations.h"
struct TerrainGenerator_eventGenerateTerrain_Parms
{
	char __padding[0x70L];
	UFloatMap * HeightMapField() { return GetNativePointerField<UFloatMap *>(this, "TerrainGenerator_eventGenerateTerrain_Parms.HeightMap"); }
	TArray<FString>& WeightmapsNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "TerrainGenerator_eventGenerateTerrain_Parms.WeightmapsNames"); }
	TArray<UByteMap *>& WeightMapsField() { return *GetNativePointerField<TArray<UByteMap *>*>(this, "TerrainGenerator_eventGenerateTerrain_Parms.WeightMaps"); }
	TArray<FBiomeMiniMap>& BiomesMiniMapField() { return *GetNativePointerField<TArray<FBiomeMiniMap>*>(this, "TerrainGenerator_eventGenerateTerrain_Parms.BiomesMiniMap"); }

	// Functions

};

