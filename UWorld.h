#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FWriteFileTaskInfo.h"
#include "FGuid.h"
#include "FOverlapResult.h"
#include "FHitResult.h"

struct UWorld : UObject
{
	char __padding[0xbf8L];
	bool& bIsIdleField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsIdle"); }
	ULevel * PersistentLevelField() { return GetNativePointerField<ULevel *>(this, "UWorld.PersistentLevel"); }
	UDEPRECATED_SaveGameSummary * SaveGameSummary_DEPRECATEDField() { return GetNativePointerField<UDEPRECATED_SaveGameSummary *>(this, "UWorld.SaveGameSummary_DEPRECATED"); }
	ULineBatchComponent * LineBatcherField() { return GetNativePointerField<ULineBatchComponent *>(this, "UWorld.LineBatcher"); }
	ULineBatchComponent * PersistentLineBatcherField() { return GetNativePointerField<ULineBatchComponent *>(this, "UWorld.PersistentLineBatcher"); }
	ULineBatchComponent * ForegroundLineBatcherField() { return GetNativePointerField<ULineBatchComponent *>(this, "UWorld.ForegroundLineBatcher"); }
	AGameNetworkManager * NetworkManagerField() { return GetNativePointerField<AGameNetworkManager *>(this, "UWorld.NetworkManager"); }
	UPhysicsCollisionHandler * PhysicsCollisionHandlerField() { return GetNativePointerField<UPhysicsCollisionHandler *>(this, "UWorld.PhysicsCollisionHandler"); }
	FString& StreamingLevelsPrefixField() { return *GetNativePointerField<FString*>(this, "UWorld.StreamingLevelsPrefix"); }
	ULevel * CurrentLevelPendingVisibilityField() { return GetNativePointerField<ULevel *>(this, "UWorld.CurrentLevelPendingVisibility"); }
	AParticleEventManager * MyParticleEventManagerField() { return GetNativePointerField<AParticleEventManager *>(this, "UWorld.MyParticleEventManager"); }
	TArray<FVector>& ViewLocationsRenderedLastFrameField() { return *GetNativePointerField<TArray<FVector>*>(this, "UWorld.ViewLocationsRenderedLastFrame"); }
	TOctree<FOctreeElementSimple *,FInternalSimpleOctreeSemantics> * InternalSimpleOctreeField() { return GetNativePointerField<TOctree<FOctreeElementSimple *,FInternalSimpleOctreeSemantics> *>(this, "UWorld.InternalSimpleOctree"); }
	UNavigationSystem * NavigationSystemField() { return GetNativePointerField<UNavigationSystem *>(this, "UWorld.NavigationSystem"); }
	UAvoidanceManager * AvoidanceManagerField() { return GetNativePointerField<UAvoidanceManager *>(this, "UWorld.AvoidanceManager"); }
	TArray<ULevel *>& LevelsField() { return *GetNativePointerField<TArray<ULevel *>*>(this, "UWorld.Levels"); }
	ULevel * CurrentLevelField() { return GetNativePointerField<ULevel *>(this, "UWorld.CurrentLevel"); }
	TArray<UMaterialParameterCollectionInstance *>& ParameterCollectionInstancesField() { return *GetNativePointerField<TArray<UMaterialParameterCollectionInstance *>*>(this, "UWorld.ParameterCollectionInstances"); }
	UCanvas * CanvasForRenderingToTargetField() { return GetNativePointerField<UCanvas *>(this, "UWorld.CanvasForRenderingToTarget"); }
	UCanvas * CanvasForDrawMaterialToRenderTargetField() { return GetNativePointerField<UCanvas *>(this, "UWorld.CanvasForDrawMaterialToRenderTarget"); }
	int& FrameCounterField() { return *GetNativePointerField<int*>(this, "UWorld.FrameCounter"); }
	int& DinosDestroyedThisFrameField() { return *GetNativePointerField<int*>(this, "UWorld.DinosDestroyedThisFrame"); }
	long double& IgnoreForcedLevelAsDistanceStreamingEnabledUntilTimeField() { return *GetNativePointerField<long double*>(this, "UWorld.IgnoreForcedLevelAsDistanceStreamingEnabledUntilTime"); }
	bool& GamePreviewField() { return *GetNativePointerField<bool*>(this, "UWorld.GamePreview"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "UWorld.FeatureLevel"); }
	FieldArray<FLevelViewportInfo, 4> EditorViewsField() { return {this, "UWorld.EditorViews"}; }
	int& SearchedForTrueSkyActorStateField() { return *GetNativePointerField<int*>(this, "UWorld.SearchedForTrueSkyActorState"); }
	TArray<TAutoWeakObjectPtr<ACameraActor>>& AutoCameraActorListField() { return *GetNativePointerField<TArray<TAutoWeakObjectPtr<ACameraActor>>*>(this, "UWorld.AutoCameraActorList"); }
	FPhysScene * PhysicsSceneField() { return GetNativePointerField<FPhysScene *>(this, "UWorld.PhysicsScene"); }
	FWorldAsyncTraceState& AsyncTraceStateField() { return *GetNativePointerField<FWorldAsyncTraceState*>(this, "UWorld.AsyncTraceState"); }
	bool& bRequiresHitProxiesField() { return *GetNativePointerField<bool*>(this, "UWorld.bRequiresHitProxies"); }
	FLatentActionManager& LatentActionManagerField() { return *GetNativePointerField<FLatentActionManager*>(this, "UWorld.LatentActionManager"); }
	long double& BuildStreamingDataTimerField() { return *GetNativePointerField<long double*>(this, "UWorld.BuildStreamingDataTimer"); }
	UWorld::FOnNetTickEvent& TickDispatchEventField() { return *GetNativePointerField<UWorld::FOnNetTickEvent*>(this, "UWorld.TickDispatchEvent"); }
	UWorld::FOnNetTickEvent& TickFlushEventField() { return *GetNativePointerField<UWorld::FOnNetTickEvent*>(this, "UWorld.TickFlushEvent"); }
	UWorld::FOnTickFlushEvent& PostTickFlushEventField() { return *GetNativePointerField<UWorld::FOnTickFlushEvent*>(this, "UWorld.PostTickFlushEvent"); }
	UWorld::FOnLevelsChangedEvent& LevelsChangedEventField() { return *GetNativePointerField<UWorld::FOnLevelsChangedEvent*>(this, "UWorld.LevelsChangedEvent"); }
	FURL& URLField() { return *GetNativePointerField<FURL*>(this, "UWorld.URL"); }
	FTickTaskLevel * TickTaskLevelField() { return GetNativePointerField<FTickTaskLevel *>(this, "UWorld.TickTaskLevel"); }
	bool& bInTickField() { return *GetNativePointerField<bool*>(this, "UWorld.bInTick"); }
	bool& bIsBuiltField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsBuilt"); }
	bool& bTickNewlySpawnedField() { return *GetNativePointerField<bool*>(this, "UWorld.bTickNewlySpawned"); }
	ETickingGroup& TickGroupField() { return *GetNativePointerField<ETickingGroup*>(this, "UWorld.TickGroup"); }
	bool& bPostTickComponentUpdateField() { return *GetNativePointerField<bool*>(this, "UWorld.bPostTickComponentUpdate"); }
	int& PlayerNumField() { return *GetNativePointerField<int*>(this, "UWorld.PlayerNum"); }
	float& TimeSinceLastPendingKillPurgeField() { return *GetNativePointerField<float*>(this, "UWorld.TimeSinceLastPendingKillPurge"); }
	bool& FullPurgeTriggeredField() { return *GetNativePointerField<bool*>(this, "UWorld.FullPurgeTriggered"); }
	bool& bShouldDelayGarbageCollectField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldDelayGarbageCollect"); }
	bool& bIsWorldInitializedField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsWorldInitialized"); }
	int& AllowLevelLoadOverrideField() { return *GetNativePointerField<int*>(this, "UWorld.AllowLevelLoadOverride"); }
	int& StreamingVolumeUpdateDelayField() { return *GetNativePointerField<int*>(this, "UWorld.StreamingVolumeUpdateDelay"); }
	bool& bIsLevelStreamingFrozenField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsLevelStreamingFrozen"); }
	bool& bShouldForceUnloadStreamingLevelsField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldForceUnloadStreamingLevels"); }
	bool& bShouldForceVisibleStreamingLevelsField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldForceVisibleStreamingLevels"); }
	bool& bDoDelayedUpdateCullDistanceVolumesField() { return *GetNativePointerField<bool*>(this, "UWorld.bDoDelayedUpdateCullDistanceVolumes"); }
	TEnumAsByte<enum EWorldType::Type>& WorldTypeField() { return *GetNativePointerField<TEnumAsByte<enum EWorldType::Type>*>(this, "UWorld.WorldType"); }
	bool& bIsRunningConstructionScriptField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsRunningConstructionScript"); }
	bool& bShouldSimulatePhysicsField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldSimulatePhysics"); }
	FName& DebugDrawTraceTagField() { return *GetNativePointerField<FName*>(this, "UWorld.DebugDrawTraceTag"); }
	TArray<IInterface_PostProcessVolume *>& PostProcessVolumesField() { return *GetNativePointerField<TArray<IInterface_PostProcessVolume *>*>(this, "UWorld.PostProcessVolumes"); }
	TAutoWeakObjectPtr<AReverbVolume>& HighestPriorityReverbVolumeField() { return *GetNativePointerField<TAutoWeakObjectPtr<AReverbVolume>*>(this, "UWorld.HighestPriorityReverbVolume"); }
	long double& LastTimeUnbuiltLightingWasEncounteredField() { return *GetNativePointerField<long double*>(this, "UWorld.LastTimeUnbuiltLightingWasEncountered"); }
	long double& TimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.TimeSeconds"); }
	long double& LoadedAtTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.LoadedAtTimeSeconds"); }
	long double& RealTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.RealTimeSeconds"); }
	long double& AudioTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.AudioTimeSeconds"); }
	float& DeltaTimeSecondsField() { return *GetNativePointerField<float*>(this, "UWorld.DeltaTimeSeconds"); }
	float& PauseDelayField() { return *GetNativePointerField<float*>(this, "UWorld.PauseDelay"); }
	unsigned int& StasisThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisThisFrame"); }
	unsigned int& UnStasisThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.UnStasisThisFrame"); }
	unsigned int& StasisOssilationThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisOssilationThisFrame"); }
	unsigned int& StasisThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisThisFrameMax"); }
	unsigned int& UnStasisThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.UnStasisThisFrameMax"); }
	unsigned int& StasisOssilationThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisOssilationThisFrameMax"); }
	float& StasisThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UWorld.StasisThisFrameAvg"); }
	float& UnStasisThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UWorld.UnStasisThisFrameAvg"); }
	float& StasisOssilationThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UWorld.StasisOssilationThisFrameAvg"); }
	float& StasisMaxResetTimerField() { return *GetNativePointerField<float*>(this, "UWorld.StasisMaxResetTimer"); }
	unsigned int& LastUnstasisCountField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.LastUnstasisCount"); }
	unsigned int& LoadedSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.LoadedSaveIncrementor"); }
	unsigned int& CurrentSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.CurrentSaveIncrementor"); }
	bool& bBlockAllOnNextLevelStreamingProcessField() { return *GetNativePointerField<bool*>(this, "UWorld.bBlockAllOnNextLevelStreamingProcess"); }
	FIntVector& OriginLocationField() { return *GetNativePointerField<FIntVector*>(this, "UWorld.OriginLocation"); }
	FIntVector& RequestedOriginLocationField() { return *GetNativePointerField<FIntVector*>(this, "UWorld.RequestedOriginLocation"); }
	bool& bOriginOffsetThisFrameField() { return *GetNativePointerField<bool*>(this, "UWorld.bOriginOffsetThisFrame"); }
	UWorldComposition * WorldCompositionField() { return GetNativePointerField<UWorldComposition *>(this, "UWorld.WorldComposition"); }
	bool& bFlushingLevelStreamingField() { return *GetNativePointerField<bool*>(this, "UWorld.bFlushingLevelStreaming"); }
	long double& ForceBlockLoadTimeoutField() { return *GetNativePointerField<long double*>(this, "UWorld.ForceBlockLoadTimeout"); }
	ETravelType& NextTravelTypeField() { return *GetNativePointerField<ETravelType*>(this, "UWorld.NextTravelType"); }
	FString& NextURLField() { return *GetNativePointerField<FString*>(this, "UWorld.NextURL"); }
	float& NextSwitchCountdownField() { return *GetNativePointerField<float*>(this, "UWorld.NextSwitchCountdown"); }
	TArray<FName>& PreparingLevelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UWorld.PreparingLevelNames"); }
	FName& CommittedPersistentLevelNameField() { return *GetNativePointerField<FName*>(this, "UWorld.CommittedPersistentLevelName"); }
	FString& CurrentDayTimeField() { return *GetNativePointerField<FString*>(this, "UWorld.CurrentDayTime"); }
	unsigned int& NumLightingUnbuiltObjectsField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.NumLightingUnbuiltObjects"); }

	// Functions

	FPhysScene * GetPhysicsScene() { return NativeCall<FPhysScene *>(this, "UWorld.GetPhysicsScene"); }
	void CleanupActors() { NativeCall<void>(this, "UWorld.CleanupActors"); }
	bool DestroyActor(AActor * ThisActor, bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, AActor *, bool, bool>(this, "UWorld.DestroyActor", ThisActor, bNetForce, bShouldModifyLevel); }
	bool EncroachingBlockingGeometry(AActor * TestActor, FVector TestLocation, FRotator TestRotation, FVector * ProposedAdjustment, const FVector * TraceWorldGeometryFromLocation) { return NativeCall<bool, AActor *, FVector, FRotator, FVector *, const FVector *>(this, "UWorld.EncroachingBlockingGeometry", TestActor, TestLocation, TestRotation, ProposedAdjustment, TraceWorldGeometryFromLocation); }
	bool FindTeleportSpot(AActor * TestActor, FVector * TestLocation, FRotator TestRotation, const FVector * TraceWorldGeometryFromLocation) { return NativeCall<bool, AActor *, FVector *, FRotator, const FVector *>(this, "UWorld.FindTeleportSpot", TestActor, TestLocation, TestRotation, TraceWorldGeometryFromLocation); }
	void ForceGarbageCollection(bool bForcePurge) { NativeCall<void, bool>(this, "UWorld.ForceGarbageCollection", bForcePurge); }
	AReverbVolume * GetAudioSettings(const FVector * ViewLocation, FReverbSettings * OutReverbSettings, FInteriorSettings * OutInteriorSettings) { return NativeCall<AReverbVolume *, const FVector *, FReverbSettings *, FInteriorSettings *>(this, "UWorld.GetAudioSettings", ViewLocation, OutReverbSettings, OutInteriorSettings); }
	bool IsPaused() { return NativeCall<bool>(this, "UWorld.IsPaused"); }
	void MarkActorComponentForNeededEndOfFrameUpdate(UActorComponent * Component, bool bForceGameThread) { NativeCall<void, UActorComponent *, bool>(this, "UWorld.MarkActorComponentForNeededEndOfFrameUpdate", Component, bForceGameThread); }
	void ProcessLevelStreamingVolumes(FVector * OverrideViewLocation) { NativeCall<void, FVector *>(this, "UWorld.ProcessLevelStreamingVolumes", OverrideViewLocation); }
	void SendAllEndOfFrameUpdates(TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4> > * OutCompletion) { NativeCall<void, TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4> > *>(this, "UWorld.SendAllEndOfFrameUpdates", OutCompletion); }
	void SetMapNeedsLightingFullyRebuilt(int InNumLightingUnbuiltObjects) { NativeCall<void, int>(this, "UWorld.SetMapNeedsLightingFullyRebuilt", InNumLightingUnbuiltObjects); }
	void Tick(ELevelTick TickType, float DeltaSeconds) { NativeCall<void, ELevelTick, float>(this, "UWorld.Tick", TickType, DeltaSeconds); }
	void TickNetClient(float DeltaSeconds) { NativeCall<void, float>(this, "UWorld.TickNetClient", DeltaSeconds); }
	void UpdateAllReflectionCaptures() { NativeCall<void>(this, "UWorld.UpdateAllReflectionCaptures"); }
	void AddController(AController * Controller) { NativeCall<void, AController *>(this, "UWorld.AddController", Controller); }
	bool AddLevel(ULevel * InLevel) { return NativeCall<bool, ULevel *>(this, "UWorld.AddLevel", InLevel); }
	void AddNetworkActor(AActor * Actor) { NativeCall<void, AActor *>(this, "UWorld.AddNetworkActor", Actor); }
	void AddParameterCollectionInstance(UMaterialParameterCollection * Collection, bool bUpdateScene) { NativeCall<void, UMaterialParameterCollection *, bool>(this, "UWorld.AddParameterCollectionInstance", Collection, bUpdateScene); }
	void AddToWorld(ULevel * Level, const FTransform * LevelTransform, bool bAlwaysConsiderTimeLimit) { NativeCall<void, ULevel *, const FTransform *, bool>(this, "UWorld.AddToWorld", Level, LevelTransform, bAlwaysConsiderTimeLimit); }
	bool AllowAudioPlayback() { return NativeCall<bool>(this, "UWorld.AllowAudioPlayback"); }
	bool AreActorsInitialized() { return NativeCall<bool>(this, "UWorld.AreActorsInitialized"); }
	bool AreAlwaysLoadedLevelsLoaded() { return NativeCall<bool>(this, "UWorld.AreAlwaysLoadedLevelsLoaded"); }
	void BeginPlay() { NativeCall<void>(this, "UWorld.BeginPlay"); }
	void BroadcastLevelsChanged() { NativeCall<void>(this, "UWorld.BroadcastLevelsChanged"); }
	static FString * BuildPIEPackagePrefix(FString * result, int PIEInstanceID) { return NativeCall<FString *, FString *, int>(nullptr, "UWorld.BuildPIEPackagePrefix", result, PIEInstanceID); }
	void CancelPendingMapChange() { NativeCall<void>(this, "UWorld.CancelPendingMapChange"); }
	void CleanupWorld(bool bSessionEnded, bool bCleanupResources, UWorld * NewWorld) { NativeCall<void, bool, bool, UWorld *>(this, "UWorld.CleanupWorld", bSessionEnded, bCleanupResources, NewWorld); }
	void ClearWorldComponents() { NativeCall<void>(this, "UWorld.ClearWorldComponents"); }
	void CommitMapChange() { NativeCall<void>(this, "UWorld.CommitMapChange"); }
	bool ContainsActor(AActor * Actor) { return NativeCall<bool, AActor *>(this, "UWorld.ContainsActor", Actor); }
	bool ContainsLevel(ULevel * InLevel) { return NativeCall<bool, ULevel *>(this, "UWorld.ContainsLevel", InLevel); }
	static FString * ConvertToPIEPackageName(FString * result, const FString * PackageName, int PIEInstanceID) { return NativeCall<FString *, FString *, const FString *, int>(nullptr, "UWorld.ConvertToPIEPackageName", result, PackageName, PIEInstanceID); }
	void CreatePhysicsScene() { NativeCall<void>(this, "UWorld.CreatePhysicsScene"); }
	static UWorld * CreateWorld(const EWorldType::Type InWorldType, bool bInformEngineOfWorld, FName WorldName, UPackage * InWorldPackage, bool bAddToRoot) { return NativeCall<UWorld *, const EWorldType::Type, bool, FName, UPackage *, bool>(nullptr, "UWorld.CreateWorld", InWorldType, bInformEngineOfWorld, WorldName, InWorldPackage, bAddToRoot); }
	bool DestroySwappedPC(UNetConnection * Connection) { return NativeCall<bool, UNetConnection *>(this, "UWorld.DestroySwappedPC", Connection); }
	static UWorld * DuplicateWorldForPIE(const FString * PackageName, UWorld * OwningWorld) { return NativeCall<UWorld *, const FString *, UWorld *>(nullptr, "UWorld.DuplicateWorldForPIE", PackageName, OwningWorld); }
	void EnsureCollisionTreeIsBuilt() { NativeCall<void>(this, "UWorld.EnsureCollisionTreeIsBuilt"); }
	void EvaluateWorldOriginLocation(FSceneViewFamily * ViewFamily) { NativeCall<void, FSceneViewFamily *>(this, "UWorld.EvaluateWorldOriginLocation", ViewFamily); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UWorld.Exec", InWorld, Cmd, Ar); }
	static UWorld * FindWorldInPackage(UPackage * Package) { return NativeCall<UWorld *, UPackage *>(nullptr, "UWorld.FindWorldInPackage", Package); }
	void FinishDestroy() { NativeCall<void>(this, "UWorld.FinishDestroy"); }
	void FlushLevelStreaming(FSceneViewFamily * ViewFamily, bool bOnlyFlushVisibility, FName ExcludeType) { NativeCall<void, FSceneViewFamily *, bool, FName>(this, "UWorld.FlushLevelStreaming", ViewFamily, bOnlyFlushVisibility, ExcludeType); }
	static UWorld * FollowWorldRedirectorInPackage(UPackage * Package, UObjectRedirector ** OptionalOutRedirector) { return NativeCall<UWorld *, UPackage *, UObjectRedirector **>(nullptr, "UWorld.FollowWorldRedirectorInPackage", Package, OptionalOutRedirector); }
	int GetActorCount() { return NativeCall<int>(this, "UWorld.GetActorCount"); }
	FString * GetAddressURL(FString * result) { return NativeCall<FString *, FString *>(this, "UWorld.GetAddressURL", result); }
	long double GetAudioTimeSeconds() { return NativeCall<long double>(this, "UWorld.GetAudioTimeSeconds"); }
	TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<ACameraActor>> const ,TAutoWeakObjectPtr<ACameraActor> const ,int> * GetAutoActivateCameraIterator(TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<ACameraActor>> const ,TAutoWeakObjectPtr<ACameraActor> const ,int> * result) { return NativeCall<TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<ACameraActor>> const ,TAutoWeakObjectPtr<ACameraActor> const ,int> *, TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<ACameraActor>> const ,TAutoWeakObjectPtr<ACameraActor> const ,int> *>(this, "UWorld.GetAutoActivateCameraIterator", result); }
	UCanvas * GetCanvasForDrawMaterialToRenderTarget() { return NativeCall<UCanvas *>(this, "UWorld.GetCanvasForDrawMaterialToRenderTarget"); }
	UCanvas * GetCanvasForRenderingToTarget() { return NativeCall<UCanvas *>(this, "UWorld.GetCanvasForRenderingToTarget"); }
	ULevel * GetCurrentLevel() { return NativeCall<ULevel *>(this, "UWorld.GetCurrentLevel"); }
	float GetDefaultGravityZ() { return NativeCall<float>(this, "UWorld.GetDefaultGravityZ"); }
	float GetDeltaSeconds() { return NativeCall<float>(this, "UWorld.GetDeltaSeconds"); }
	float GetGravityZ() { return NativeCall<float>(this, "UWorld.GetGravityZ"); }
	ULevel * GetLevel(int InLevelIndex) { return NativeCall<ULevel *, int>(this, "UWorld.GetLevel", InLevelIndex); }
	ALevelScriptActor * GetLevelScriptActor(ULevel * OwnerLevel) { return NativeCall<ALevelScriptActor *, ULevel *>(this, "UWorld.GetLevelScriptActor", OwnerLevel); }
	const TArray<ULevel *> * GetLevels() { return NativeCall<const TArray<ULevel *> *>(this, "UWorld.GetLevels"); }
	FString * GetLocalURL(FString * result) { return NativeCall<FString *, FString *>(this, "UWorld.GetLocalURL", result); }
	const FString * GetMapName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UWorld.GetMapName", result); }
	void GetMatineeActors(TArray<AMatineeActor *> * OutMatineeActors) { NativeCall<void, TArray<AMatineeActor *> *>(this, "UWorld.GetMatineeActors", OutMatineeActors); }
	int GetNetRelevantActorCount() { return NativeCall<int>(this, "UWorld.GetNetRelevantActorCount"); }
	int GetNumLevels() { return NativeCall<int>(this, "UWorld.GetNumLevels"); }
	UMaterialParameterCollectionInstance * GetParameterCollectionInstance(const UMaterialParameterCollection * Collection) { return NativeCall<UMaterialParameterCollectionInstance *, const UMaterialParameterCollection *>(this, "UWorld.GetParameterCollectionInstance", Collection); }
	long double GetRealTimeSeconds() { return NativeCall<long double>(this, "UWorld.GetRealTimeSeconds"); }
	long double GetTimeSeconds() { return NativeCall<long double>(this, "UWorld.GetTimeSeconds"); }
	bool HandleTraceTagCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UWorld.HandleTraceTagCommand", Cmd, Ar); }
	bool HasBegunPlay() { return NativeCall<bool>(this, "UWorld.HasBegunPlay"); }
	void InitWorld(const UWorld::InitializationValues IVS) { NativeCall<void, const UWorld::InitializationValues>(this, "UWorld.InitWorld", IVS); }
	void InitializeActorsForPlay(const FURL * InURL, bool bResetTime) { NativeCall<void, const FURL *, bool>(this, "UWorld.InitializeActorsForPlay", InURL, bResetTime); }
	void InitializeNewWorld(const UWorld::InitializationValues IVS) { NativeCall<void, const UWorld::InitializationValues>(this, "UWorld.InitializeNewWorld", IVS); }
	bool IsActuallyUsingTrueSkyActor() { return NativeCall<bool>(this, "UWorld.IsActuallyUsingTrueSkyActor"); }
	bool IsGameWorld() { return NativeCall<bool>(this, "UWorld.IsGameWorld"); }
	bool IsInSeamlessTravel() { return NativeCall<bool>(this, "UWorld.IsInSeamlessTravel"); }
	bool IsLevelLoadedByName(const FName * LevelName) { return NativeCall<bool, const FName *>(this, "UWorld.IsLevelLoadedByName", LevelName); }
	bool IsPlayInEditor() { return NativeCall<bool>(this, "UWorld.IsPlayInEditor"); }
	bool IsPreparingMapChange() { return NativeCall<bool>(this, "UWorld.IsPreparingMapChange"); }
	bool IsServer() { return NativeCall<bool>(this, "UWorld.IsServer"); }
	bool IsVisibilityRequestPending() { return NativeCall<bool>(this, "UWorld.IsVisibilityRequestPending"); }
	bool Listen(FURL * InURL) { return NativeCall<bool, FURL *>(this, "UWorld.Listen", InURL); }
	bool LoadFromFile(const FString * filename) { return NativeCall<bool, const FString *>(this, "UWorld.LoadFromFile", filename); }
	void ModifyLevel(ULevel * Level) { NativeCall<void, ULevel *>(this, "UWorld.ModifyLevel", Level); }
	void NavigateTo(FIntVector InLocation) { NativeCall<void, FIntVector>(this, "UWorld.NavigateTo", InLocation); }
	bool NotifyAcceptingChannel(UChannel * Channel) { return NativeCall<bool, UChannel *>(this, "UWorld.NotifyAcceptingChannel", Channel); }
	EAcceptConnection::Type NotifyAcceptingConnection() { return NativeCall<EAcceptConnection::Type>(this, "UWorld.NotifyAcceptingConnection"); }
	void NotifyControlMessage(UNetConnection * Connection, char MessageType, FInBunch * Bunch) { NativeCall<void, UNetConnection *, char, FInBunch *>(this, "UWorld.NotifyControlMessage", Connection, MessageType, Bunch); }
	bool OverlapMultiInternalOctree(TArray<UPrimitiveComponent *> * OutPrimitives, const FBoxCenterAndExtent * InBounds, unsigned int InSearchMask, bool bDontClearOutArray) { return NativeCall<bool, TArray<UPrimitiveComponent *> *, const FBoxCenterAndExtent *, unsigned int, bool>(this, "UWorld.OverlapMultiInternalOctree", OutPrimitives, InBounds, InSearchMask, bDontClearOutArray); }
	bool OverlapMultiInternalSimpleOctree(TArray<FOctreeElementSimple *> * OutPrimitives, const FBoxCenterAndExtent * InBounds, unsigned int InSearchMask, bool bDontClearOutArray) { return NativeCall<bool, TArray<FOctreeElementSimple *> *, const FBoxCenterAndExtent *, unsigned int, bool>(this, "UWorld.OverlapMultiInternalSimpleOctree", OutPrimitives, InBounds, InSearchMask, bDontClearOutArray); }
	int OverlapNumInternalOctree(const FBoxCenterAndExtent * InBounds, unsigned int InSearchMask) { return NativeCall<int, const FBoxCenterAndExtent *, unsigned int>(this, "UWorld.OverlapNumInternalOctree", InBounds, InSearchMask); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UWorld.PostDuplicate", bDuplicateForPIE); }
	void PostLoad() { NativeCall<void>(this, "UWorld.PostLoad"); }
	void PostSaveRoot(bool bCleanupIsRequired) { NativeCall<void, bool>(this, "UWorld.PostSaveRoot", bCleanupIsRequired); }
	bool PreSaveRoot(const wchar_t * Filename, TArray<FString> * AdditionalPackagesToCook) { return NativeCall<bool, const wchar_t *, TArray<FString> *>(this, "UWorld.PreSaveRoot", Filename, AdditionalPackagesToCook); }
	void PrepareMapChange(const TArray<FName> * LevelNames) { NativeCall<void, const TArray<FName> *>(this, "UWorld.PrepareMapChange", LevelNames); }
	void RegisterAutoActivateCamera(ACameraActor * CameraActor, int PlayerIndex) { NativeCall<void, ACameraActor *, int>(this, "UWorld.RegisterAutoActivateCamera", CameraActor, PlayerIndex); }
	void RemoveActor(AActor * Actor, bool bShouldModifyLevel) { NativeCall<void, AActor *, bool>(this, "UWorld.RemoveActor", Actor, bShouldModifyLevel); }
	void RemoveController(AController * Controller) { NativeCall<void, AController *>(this, "UWorld.RemoveController", Controller); }
	void RemoveFromInternalOctree(UPrimitiveComponent * InComponent) { NativeCall<void, UPrimitiveComponent *>(this, "UWorld.RemoveFromInternalOctree", InComponent); }
	void RemoveFromInternalSimpleOctree(FOctreeElementSimple * InElement) { NativeCall<void, FOctreeElementSimple *>(this, "UWorld.RemoveFromInternalSimpleOctree", InElement); }
	void RemoveFromWorld(ULevel * Level) { NativeCall<void, ULevel *>(this, "UWorld.RemoveFromWorld", Level); }
	void RemoveNetworkActor(AActor * Actor) { NativeCall<void, AActor *>(this, "UWorld.RemoveNetworkActor", Actor); }
	static FString * RemovePIEPrefix(FString * result, const FString * Source) { return NativeCall<FString *, FString *, const FString *>(nullptr, "UWorld.RemovePIEPrefix", result, Source); }
	void RequestNewWorldOrigin(FIntVector InNewOriginLocation) { NativeCall<void, FIntVector>(this, "UWorld.RequestNewWorldOrigin", InNewOriginLocation); }
	TSharedPtr<FWriteFileTaskInfo,0> * SaveToFile(TSharedPtr<FWriteFileTaskInfo,0> * result, const FString * Filename, const FString * TempFilename, const TArray<TSubclassOf<AActor>> * typesToSave) { return NativeCall<TSharedPtr<FWriteFileTaskInfo,0> *, TSharedPtr<FWriteFileTaskInfo,0> *, const FString *, const FString *, const TArray<TSubclassOf<AActor>> *>(this, "UWorld.SaveToFile", result, Filename, TempFilename, typesToSave); }
	void SeamlessTravel(const FString * SeamlessTravelURL, bool bAbsolute, FGuid MapPackageGuid) { NativeCall<void, const FString *, bool, FGuid>(this, "UWorld.SeamlessTravel", SeamlessTravelURL, bAbsolute, MapPackageGuid); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UWorld.Serialize", Ar); }
	void ServerTravel(const FString * FURL, bool bAbsolute, bool bShouldSkipGameNotify) { NativeCall<void, const FString *, bool, bool>(this, "UWorld.ServerTravel", FURL, bAbsolute, bShouldSkipGameNotify); }
	bool SetGameMode(const FURL * InURL) { return NativeCall<bool, const FURL *>(this, "UWorld.SetGameMode", InURL); }
	void SetNavigationSystem(UNavigationSystem * InNavigationSystem) { NativeCall<void, UNavigationSystem *>(this, "UWorld.SetNavigationSystem", InNavigationSystem); }
	bool SetNewWorldOrigin(FIntVector InNewOriginLocation) { return NativeCall<bool, FIntVector>(this, "UWorld.SetNewWorldOrigin", InNewOriginLocation); }
	void SetupParameterCollectionInstances() { NativeCall<void>(this, "UWorld.SetupParameterCollectionInstances"); }
	static FString * StripPIEPrefixFromPackageName(FString * result, const FString * PrefixedName, const FString * Prefix) { return NativeCall<FString *, FString *, const FString *, const FString *>(nullptr, "UWorld.StripPIEPrefixFromPackageName", result, PrefixedName, Prefix); }
	void TempCheatHelper(FName ParamName, float ParamValue) { NativeCall<void, FName, float>(this, "UWorld.TempCheatHelper", ParamName, ParamValue); }
	long double TimeSince(long double Time) { return NativeCall<long double, long double>(this, "UWorld.TimeSince", Time); }
	void UpdateConstraintActors() { NativeCall<void>(this, "UWorld.UpdateConstraintActors"); }
	void UpdateCullDistanceVolumes() { NativeCall<void>(this, "UWorld.UpdateCullDistanceVolumes"); }
	void UpdateInternalOctreeTransform(UPrimitiveComponent * InComponent) { NativeCall<void, UPrimitiveComponent *>(this, "UWorld.UpdateInternalOctreeTransform", InComponent); }
	void UpdateInternalSimpleOctreeTransform(FOctreeElementSimple * InElement) { NativeCall<void, FOctreeElementSimple *>(this, "UWorld.UpdateInternalSimpleOctreeTransform", InElement); }
	void UpdateLevelStreaming(FSceneViewFamily * ViewFamily) { NativeCall<void, FSceneViewFamily *>(this, "UWorld.UpdateLevelStreaming", ViewFamily); }
	void UpdateLevelStreamingInner(UWorld * PersistentWorld, FSceneViewFamily * ViewFamily) { NativeCall<void, UWorld *, FSceneViewFamily *>(this, "UWorld.UpdateLevelStreamingInner", PersistentWorld, ViewFamily); }
	void UpdateParameterCollectionInstances(bool bUpdateInstanceUniformBuffers) { NativeCall<void, bool>(this, "UWorld.UpdateParameterCollectionInstances", bUpdateInstanceUniformBuffers); }
	void UpdateWorldComponents(bool bRerunConstructionScripts, bool bCurrentLevelOnly) { NativeCall<void, bool, bool>(this, "UWorld.UpdateWorldComponents", bRerunConstructionScripts, bCurrentLevelOnly); }
	void WelcomePlayer(UNetConnection * Connection) { NativeCall<void, UNetConnection *>(this, "UWorld.WelcomePlayer", Connection); }
	bool ComponentOverlapMulti(TArray<FOverlapResult> * OutOverlaps, UPrimitiveComponent * PrimComp, const FVector * Pos, const FQuat * Quat, const FComponentQueryParams * Params, const FCollisionObjectQueryParams * ObjectQueryParams) { return NativeCall<bool, TArray<FOverlapResult> *, UPrimitiveComponent *, const FVector *, const FQuat *, const FComponentQueryParams *, const FCollisionObjectQueryParams *>(this, "UWorld.ComponentOverlapMulti", OutOverlaps, PrimComp, Pos, Quat, Params, ObjectQueryParams); }
	bool ComponentOverlapMulti(TArray<FOverlapResult> * OutOverlaps, UPrimitiveComponent * PrimComp, const FVector * Pos, const FQuat * Quat, ECollisionChannel TraceChannel, const FComponentQueryParams * Params, const FCollisionObjectQueryParams * ObjectQueryParams) { return NativeCall<bool, TArray<FOverlapResult> *, UPrimitiveComponent *, const FVector *, const FQuat *, ECollisionChannel, const FComponentQueryParams *, const FCollisionObjectQueryParams *>(this, "UWorld.ComponentOverlapMulti", OutOverlaps, PrimComp, Pos, Quat, TraceChannel, Params, ObjectQueryParams); }
	bool ComponentSweepMulti(TArray<FHitResult> * OutHits, UPrimitiveComponent * PrimComp, const FVector * Start, const FVector * End, const FQuat * Quat, const FComponentQueryParams * Params) { return NativeCall<bool, TArray<FHitResult> *, UPrimitiveComponent *, const FVector *, const FVector *, const FQuat *, const FComponentQueryParams *>(this, "UWorld.ComponentSweepMulti", OutHits, PrimComp, Start, End, Quat, Params); }
	void FinishAsyncTrace() { NativeCall<void>(this, "UWorld.FinishAsyncTrace"); }
	bool LineTraceMulti(TArray<FHitResult> * OutHits, const FVector * Start, const FVector * End, const FCollisionQueryParams * Params, const FCollisionObjectQueryParams * ObjectQueryParams, bool bDoSort, bool bCullBackfaces, bool bUsePostFilter, float NegativeDistanceTolerance) { return NativeCall<bool, TArray<FHitResult> *, const FVector *, const FVector *, const FCollisionQueryParams *, const FCollisionObjectQueryParams *, bool, bool, bool, float>(this, "UWorld.LineTraceMulti", OutHits, Start, End, Params, ObjectQueryParams, bDoSort, bCullBackfaces, bUsePostFilter, NegativeDistanceTolerance); }
	bool LineTraceMulti(TArray<FHitResult> * OutHits, const FVector * Start, const FVector * End, ECollisionChannel TraceChannel, const FCollisionQueryParams * Params, const FCollisionResponseParams * ResponseParam, bool bDoSort, bool bCullBackfaces, bool bUsePostFilter, float NegativeDistanceTolerance) { return NativeCall<bool, TArray<FHitResult> *, const FVector *, const FVector *, ECollisionChannel, const FCollisionQueryParams *, const FCollisionResponseParams *, bool, bool, bool, float>(this, "UWorld.LineTraceMulti", OutHits, Start, End, TraceChannel, Params, ResponseParam, bDoSort, bCullBackfaces, bUsePostFilter, NegativeDistanceTolerance); }
	bool LineTraceSingle(FHitResult * OutHit, const FVector * Start, const FVector * End, const FCollisionQueryParams * Params, const FCollisionObjectQueryParams * ObjectQueryParams, bool bUsePostFilter, float NegativeDistanceTolerance) { return NativeCall<bool, FHitResult *, const FVector *, const FVector *, const FCollisionQueryParams *, const FCollisionObjectQueryParams *, bool, float>(this, "UWorld.LineTraceSingle", OutHit, Start, End, Params, ObjectQueryParams, bUsePostFilter, NegativeDistanceTolerance); }
	bool LineTraceSingle(FHitResult * OutHit, const FVector * Start, const FVector * End, ECollisionChannel TraceChannel, const FCollisionQueryParams * Params, const FCollisionResponseParams * ResponseParam, bool bUsePostfilter, float NegativeDistanceTolerance) { return NativeCall<bool, FHitResult *, const FVector *, const FVector *, ECollisionChannel, const FCollisionQueryParams *, const FCollisionResponseParams *, bool, float>(this, "UWorld.LineTraceSingle", OutHit, Start, End, TraceChannel, Params, ResponseParam, bUsePostfilter, NegativeDistanceTolerance); }
	bool LineTraceTest(const FVector * Start, const FVector * End, ECollisionChannel TraceChannel, const FCollisionQueryParams * Params, const FCollisionResponseParams * ResponseParam) { return NativeCall<bool, const FVector *, const FVector *, ECollisionChannel, const FCollisionQueryParams *, const FCollisionResponseParams *>(this, "UWorld.LineTraceTest", Start, End, TraceChannel, Params, ResponseParam); }
	bool OverlapMulti(TArray<FOverlapResult> * OutOverlaps, const FVector * Pos, const FQuat * Rot, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionObjectQueryParams * ObjectQueryParams) { return NativeCall<bool, TArray<FOverlapResult> *, const FVector *, const FQuat *, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionObjectQueryParams *>(this, "UWorld.OverlapMulti", OutOverlaps, Pos, Rot, CollisionShape, Params, ObjectQueryParams); }
	bool OverlapMulti(TArray<FOverlapResult> * OutOverlaps, const FVector * Pos, const FQuat * Rot, ECollisionChannel TraceChannel, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionResponseParams * ResponseParam) { return NativeCall<bool, TArray<FOverlapResult> *, const FVector *, const FQuat *, ECollisionChannel, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionResponseParams *>(this, "UWorld.OverlapMulti", OutOverlaps, Pos, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	bool OverlapSingle(FOverlapResult * OutOverlap, const FVector * Pos, const FQuat * Rot, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionObjectQueryParams * ObjectQueryParams) { return NativeCall<bool, FOverlapResult *, const FVector *, const FQuat *, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionObjectQueryParams *>(this, "UWorld.OverlapSingle", OutOverlap, Pos, Rot, CollisionShape, Params, ObjectQueryParams); }
	bool OverlapSingle(FOverlapResult * OutOverlap, const FVector * Pos, const FQuat * Rot, ECollisionChannel TraceChannel, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionResponseParams * ResponseParam, bool bBlockingOnly) { return NativeCall<bool, FOverlapResult *, const FVector *, const FQuat *, ECollisionChannel, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionResponseParams *, bool>(this, "UWorld.OverlapSingle", OutOverlap, Pos, Rot, TraceChannel, CollisionShape, Params, ResponseParam, bBlockingOnly); }
	bool OverlapTest(const FVector * Pos, const FQuat * Rot, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionObjectQueryParams * ObjectQueryParams) { return NativeCall<bool, const FVector *, const FQuat *, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionObjectQueryParams *>(this, "UWorld.OverlapTest", Pos, Rot, CollisionShape, Params, ObjectQueryParams); }
	bool OverlapTest(const FVector * Pos, const FQuat * Rot, ECollisionChannel TraceChannel, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionResponseParams * ResponseParam) { return NativeCall<bool, const FVector *, const FQuat *, ECollisionChannel, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionResponseParams *>(this, "UWorld.OverlapTest", Pos, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	bool QueryTraceData(const FTraceHandle * Handle, int FrameOffset, FTraceDatum * OutData) { return NativeCall<bool, const FTraceHandle *, int, FTraceDatum *>(this, "UWorld.QueryTraceData", Handle, FrameOffset, OutData); }
	void ResetAsyncTrace() { NativeCall<void>(this, "UWorld.ResetAsyncTrace"); }
	void StartAsyncTrace() { NativeCall<void>(this, "UWorld.StartAsyncTrace"); }
	bool SweepMulti(TArray<FHitResult> * OutHits, const FVector * Start, const FVector * End, const FQuat * Rot, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionObjectQueryParams * ObjectQueryParams, bool bDoSort) { return NativeCall<bool, TArray<FHitResult> *, const FVector *, const FVector *, const FQuat *, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionObjectQueryParams *, bool>(this, "UWorld.SweepMulti", OutHits, Start, End, Rot, CollisionShape, Params, ObjectQueryParams, bDoSort); }
	bool SweepMulti(TArray<FHitResult> * OutHits, const FVector * Start, const FVector * End, const FQuat * Rot, ECollisionChannel TraceChannel, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionResponseParams * ResponseParam, bool bDoSort) { return NativeCall<bool, TArray<FHitResult> *, const FVector *, const FVector *, const FQuat *, ECollisionChannel, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionResponseParams *, bool>(this, "UWorld.SweepMulti", OutHits, Start, End, Rot, TraceChannel, CollisionShape, Params, ResponseParam, bDoSort); }
	bool SweepSingle(FHitResult * OutHit, const FVector * Start, const FVector * End, const FQuat * Rot, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionObjectQueryParams * ObjectQueryParams) { return NativeCall<bool, FHitResult *, const FVector *, const FVector *, const FQuat *, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionObjectQueryParams *>(this, "UWorld.SweepSingle", OutHit, Start, End, Rot, CollisionShape, Params, ObjectQueryParams); }
	bool SweepSingle(FHitResult * OutHit, const FVector * Start, const FVector * End, const FQuat * Rot, ECollisionChannel TraceChannel, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionResponseParams * ResponseParam) { return NativeCall<bool, FHitResult *, const FVector *, const FVector *, const FQuat *, ECollisionChannel, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionResponseParams *>(this, "UWorld.SweepSingle", OutHit, Start, End, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	bool SweepTest(const FVector * Start, const FVector * End, const FQuat * Rot, ECollisionChannel TraceChannel, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionResponseParams * ResponseParam) { return NativeCall<bool, const FVector *, const FVector *, const FQuat *, ECollisionChannel, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionResponseParams *>(this, "UWorld.SweepTest", Start, End, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	void FinishPhysicsSim() { NativeCall<void>(this, "UWorld.FinishPhysicsSim"); }
	void StartPhysicsSim() { NativeCall<void>(this, "UWorld.StartPhysicsSim"); }
};

