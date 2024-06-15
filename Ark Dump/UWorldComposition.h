#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FDistanceVisibleLevel.h"

struct UWorldComposition : UObject
{
	char __padding[0x68L];
	FString& WorldRootField() { return *GetNativePointerField<FString*>(this, "UWorldComposition.WorldRoot"); }
	TArray<FWorldCompositionTile>& TilesField() { return *GetNativePointerField<TArray<FWorldCompositionTile>*>(this, "UWorldComposition.Tiles"); }
	long double& TilesStreamingTimeThresholdField() { return *GetNativePointerField<long double*>(this, "UWorldComposition.TilesStreamingTimeThreshold"); }
	TArray<FEditorTileInitialState>& TileInitialStateField() { return *GetNativePointerField<TArray<FEditorTileInitialState>*>(this, "UWorldComposition.TileInitialState"); }
	TArray<ATileStreamingVolume *>& TileVolumesField() { return *GetNativePointerField<TArray<ATileStreamingVolume *>*>(this, "UWorldComposition.TileVolumes"); }
	long double& LastTimeSwitchedContainedVolumesField() { return *GetNativePointerField<long double*>(this, "UWorldComposition.LastTimeSwitchedContainedVolumes"); }
	int& LastContainedVolumesNumField() { return *GetNativePointerField<int*>(this, "UWorldComposition.LastContainedVolumesNum"); }
	bool& bIsUsingMapExtensionsField() { return *GetNativePointerField<bool*>(this, "UWorldComposition.bIsUsingMapExtensions"); }
	bool& bLastScannedLowQualityField() { return *GetNativePointerField<bool*>(this, "UWorldComposition.bLastScannedLowQuality"); }

	// Functions

	void CaclulateTilesAbsolutePositions() { NativeCall<void>(this, "UWorldComposition.CaclulateTilesAbsolutePositions"); }
	void CommitTileStreamingState(UWorld * PersistenWorld, int TileIdx, bool bShouldBeLoaded, bool bShouldBeVisible, int LODIdx, int CurrentVisibleCount, int CurrentlyLoaded, bool bAnyTiledVolumes, bool bForceBlock) { NativeCall<void, UWorld *, int, bool, bool, int, int, int, bool, bool>(this, "UWorldComposition.CommitTileStreamingState", PersistenWorld, TileIdx, bShouldBeLoaded, bShouldBeVisible, LODIdx, CurrentVisibleCount, CurrentlyLoaded, bAnyTiledVolumes, bForceBlock); }
	FWorldCompositionTile * FindTileByName(const FName * InPackageName) { return NativeCall<FWorldCompositionTile *, const FName *>(this, "UWorldComposition.FindTileByName", InPackageName); }
	FWorldCompositionTile * FindTileByShortHandName(const FName * InShortHandName) { return NativeCall<FWorldCompositionTile *, const FName *>(this, "UWorldComposition.FindTileByShortHandName", InShortHandName); }
	void GetDistanceVisibleLevels(const FVector * InLocation, TArray<FDistanceVisibleLevel> * OutVisibleLevels, TArray<FDistanceVisibleLevel> * OutHiddenLevels, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * LevelNamesToForceInvisible, int * ActualVisible, int * CurrentlyLoaded, bool * bAnyTiledVolumes, bool * bAnyOnlyVisible) { NativeCall<void, const FVector *, TArray<FDistanceVisibleLevel> *, TArray<FDistanceVisibleLevel> *, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *, int *, int *, bool *, bool *>(this, "UWorldComposition.GetDistanceVisibleLevels", InLocation, OutVisibleLevels, OutHiddenLevels, LevelNamesToForceInvisible, ActualVisible, CurrentlyLoaded, bAnyTiledVolumes, bAnyOnlyVisible); }
	FIntVector * GetLevelOffset(FIntVector * result, ULevel * InLevel) { return NativeCall<FIntVector *, FIntVector *, ULevel *>(this, "UWorldComposition.GetLevelOffset", result, InLevel); }
	void OnLevelAddedToWorld(ULevel * InLevel, bool bFromSave) { NativeCall<void, ULevel *, bool>(this, "UWorldComposition.OnLevelAddedToWorld", InLevel, bFromSave); }
	static void OnLevelPostLoad(ULevel * InLevel) { NativeCall<void, ULevel *>(nullptr, "UWorldComposition.OnLevelPostLoad", InLevel); }
	void PopulateStreamingLevels() { NativeCall<void>(this, "UWorldComposition.PopulateStreamingLevels"); }
	void PostLoad() { NativeCall<void>(this, "UWorldComposition.PostLoad"); }
	void Rescan(bool bOnlyIfQualityChanged) { NativeCall<void, bool>(this, "UWorldComposition.Rescan", bOnlyIfQualityChanged); }
	void Reset() { NativeCall<void>(this, "UWorldComposition.Reset"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UWorldComposition.Serialize", Ar); }
	void SetTileUnstreamable(const FString * InTileName) { NativeCall<void, const FString *>(this, "UWorldComposition.SetTileUnstreamable", InTileName); }
	void UpdateStreamingState(const FVector * InLocation) { NativeCall<void, const FVector *>(this, "UWorldComposition.UpdateStreamingState", InLocation); }
	void UpdateStreamingState(FSceneViewFamily * ViewFamily) { NativeCall<void, FSceneViewFamily *>(this, "UWorldComposition.UpdateStreamingState", ViewFamily); }
	void UpdateTileVolumes() { NativeCall<void>(this, "UWorldComposition.UpdateTileVolumes"); }
};

