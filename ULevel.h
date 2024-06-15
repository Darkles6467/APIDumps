#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UAssetUserData.h"

struct ULevelBase : UObject
{
	char __padding[0x88L];
	FURL& URLField() { return *GetNativePointerField<FURL*>(this, "ULevelBase.URL"); }
	TArray<TArray<FString>>& DestroyedMapActorsPathsField() { return *GetNativePointerField<TArray<TArray<FString>>*>(this, "ULevelBase.DestroyedMapActorsPaths"); }

	// Functions

	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "ULevelBase.AddReferencedObjects", InThis, Collector); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ULevelBase.Serialize", Ar); }
};

struct ULevel : ULevelBase
{
	char __padding[0x2a0L];
	UWorld * OwningWorldField() { return GetNativePointerField<UWorld *>(this, "ULevel.OwningWorld"); }
	UModel * ModelField() { return GetNativePointerField<UModel *>(this, "ULevel.Model"); }
	TArray<UModelComponent *>& ModelComponentsField() { return *GetNativePointerField<TArray<UModelComponent *>*>(this, "ULevel.ModelComponents"); }
	ALevelScriptActor * LevelScriptActorField() { return GetNativePointerField<ALevelScriptActor *>(this, "ULevel.LevelScriptActor"); }
	float& LightmapTotalSizeField() { return *GetNativePointerField<float*>(this, "ULevel.LightmapTotalSize"); }
	float& ShadowmapTotalSizeField() { return *GetNativePointerField<float*>(this, "ULevel.ShadowmapTotalSize"); }
	TArray<FVector>& StaticNavigableGeometryField() { return *GetNativePointerField<TArray<FVector>*>(this, "ULevel.StaticNavigableGeometry"); }
	bool& bTextureStreamingBuiltField() { return *GetNativePointerField<bool*>(this, "ULevel.bTextureStreamingBuilt"); }
	int& iFirstNetRelevantActorField() { return *GetNativePointerField<int*>(this, "ULevel.iFirstNetRelevantActor"); }
	FTickTaskLevel * TickTaskLevelField() { return GetNativePointerField<FTickTaskLevel *>(this, "ULevel.TickTaskLevel"); }
	FPrecomputedLightVolume * PrecomputedLightVolumeField() { return GetNativePointerField<FPrecomputedLightVolume *>(this, "ULevel.PrecomputedLightVolume"); }
	FPrecomputedVisibilityHandler& PrecomputedVisibilityHandlerField() { return *GetNativePointerField<FPrecomputedVisibilityHandler*>(this, "ULevel.PrecomputedVisibilityHandler"); }
	FPrecomputedVolumeDistanceField& PrecomputedVolumeDistanceFieldField() { return *GetNativePointerField<FPrecomputedVolumeDistanceField*>(this, "ULevel.PrecomputedVolumeDistanceField"); }
	FRenderCommandFence& RemoveFromSceneFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "ULevel.RemoveFromSceneFence"); }
	int& CurrentActorIndexForUpdateComponentsField() { return *GetNativePointerField<int*>(this, "ULevel.CurrentActorIndexForUpdateComponents"); }
	TWeakObjectPtr<ALevelBounds>& LevelBoundsActorField() { return *GetNativePointerField<TWeakObjectPtr<ALevelBounds>*>(this, "ULevel.LevelBoundsActor"); }
	ULevel::FLevelBoundsActorUpdatedEvent& LevelBoundsActorUpdatedEventField() { return *GetNativePointerField<ULevel::FLevelBoundsActorUpdatedEvent*>(this, "ULevel.LevelBoundsActorUpdatedEvent"); }
	TArray<UAssetUserData *>& AssetUserDataField() { return *GetNativePointerField<TArray<UAssetUserData *>*>(this, "ULevel.AssetUserData"); }
	TArray<FPendingAutoReceiveInputActor>& PendingAutoReceiveInputActorsField() { return *GetNativePointerField<TArray<FPendingAutoReceiveInputActor>*>(this, "ULevel.PendingAutoReceiveInputActors"); }

	// Functions

	void AddActiveRuntimeMovieScenePlayer(UObject * RuntimeMovieScenePlayer) { NativeCall<void, UObject *>(this, "ULevel.AddActiveRuntimeMovieScenePlayer", RuntimeMovieScenePlayer); }
	void AddAssetUserData(UAssetUserData * InUserData) { NativeCall<void, UAssetUserData *>(this, "ULevel.AddAssetUserData", InUserData); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "ULevel.AddReferencedObjects", InThis, Collector); }
	void BeginDestroy() { NativeCall<void>(this, "ULevel.BeginDestroy"); }
	void BuildStreamingData(UTexture2D * UpdateSpecificTextureOnly) { NativeCall<void, UTexture2D *>(this, "ULevel.BuildStreamingData", UpdateSpecificTextureOnly); }
	static void BuildStreamingData(UWorld * World, ULevel * TargetLevel, UTexture2D * UpdateSpecificTextureOnly) { NativeCall<void, UWorld *, ULevel *, UTexture2D *>(nullptr, "ULevel.BuildStreamingData", World, TargetLevel, UpdateSpecificTextureOnly); }
	void ClearLevelComponents() { NativeCall<void>(this, "ULevel.ClearLevelComponents"); }
	void CommitModelSurfaces() { NativeCall<void>(this, "ULevel.CommitModelSurfaces"); }
	void FinishDestroy() { NativeCall<void>(this, "ULevel.FinishDestroy"); }
	UAssetUserData * GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { return NativeCall<UAssetUserData *, TSubclassOf<UAssetUserData>>(this, "ULevel.GetAssetUserDataOfClass", InUserDataClass); }
	ALevelScriptActor * GetLevelScriptActor() { return NativeCall<ALevelScriptActor *>(this, "ULevel.GetLevelScriptActor"); }
	void IncrementalUpdateComponents(int NumComponentsToUpdate, bool bRerunConstructionScripts, bool (__fastcall *)(const wchar_t *, long double, ULevel *) bool, long double bool) { NativeCall<void, int, bool, bool (__fastcall *)(const wchar_t *, long double, ULevel *), long double>(this, "ULevel.IncrementalUpdateComponents", NumComponentsToUpdate, bRerunConstructionScripts, bool, bool); }
	void InitializeNetworkActors() { NativeCall<void>(this, "ULevel.InitializeNetworkActors"); }
	void InitializePreLoadSaveFile() { NativeCall<void>(this, "ULevel.InitializePreLoadSaveFile"); }
	void InitializeRenderingResources() { NativeCall<void>(this, "ULevel.InitializeRenderingResources"); }
	bool IsPersistentLevel() { return NativeCall<bool>(this, "ULevel.IsPersistentLevel"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "ULevel.IsReadyForFinishDestroy"); }
	void NormalizeLightmapTexelFactor() { NativeCall<void>(this, "ULevel.NormalizeLightmapTexelFactor"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "ULevel.PostDuplicate", bDuplicateForPIE); }
	void PostLoad() { NativeCall<void>(this, "ULevel.PostLoad"); }
	void PushPendingAutoReceiveInput(APlayerController * InPlayerController) { NativeCall<void, APlayerController *>(this, "ULevel.PushPendingAutoReceiveInput", InPlayerController); }
	void RegisterActorForAutoReceiveInput(AActor * Actor, const int PlayerIndex) { NativeCall<void, AActor *, const int>(this, "ULevel.RegisterActorForAutoReceiveInput", Actor, PlayerIndex); }
	void ReleaseRenderingResources() { NativeCall<void>(this, "ULevel.ReleaseRenderingResources"); }
	void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { NativeCall<void, TSubclassOf<UAssetUserData>>(this, "ULevel.RemoveUserDataOfClass", InUserDataClass); }
	void RouteActorInitialize() { NativeCall<void>(this, "ULevel.RouteActorInitialize"); }
	void RunOptimizer(bool bCheckForErrors) { NativeCall<void, bool>(this, "ULevel.RunOptimizer", bCheckForErrors); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ULevel.Serialize", Ar); }
	void SortActorList() { NativeCall<void>(this, "ULevel.SortActorList"); }
	void TickRuntimeMovieScenePlayers(const float DeltaSeconds) { NativeCall<void, const float>(this, "ULevel.TickRuntimeMovieScenePlayers", DeltaSeconds); }
	void UpdateLevelComponents(bool bRerunConstructionScripts) { NativeCall<void, bool>(this, "ULevel.UpdateLevelComponents", bRerunConstructionScripts); }
	void UpdateModelComponents() { NativeCall<void>(this, "ULevel.UpdateModelComponents"); }
};

