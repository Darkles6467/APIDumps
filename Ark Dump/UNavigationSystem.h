#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FAsyncPathFindingQuery.h"
#include "URecastFilter_UseDefaultArea.h"

struct UNavigationSystem : UBlueprintFunctionLibrary
{
	enum ECleanupMode
	{
		CleanupWithWorld = 0x0,
		CleanupUnsafe = 0x1,
	};

	enum EOctreeUpdateMode
	{
		OctreeUpdate_Default = 0x0,
		OctreeUpdate_Geometry = 0x1,
		OctreeUpdate_Modifiers = 0x2,
		OctreeUpdate_Refresh = 0x4,
		OctreeUpdate_ParentChain = 0x8,
	};

	enum ERegistrationResult
	{
		RegistrationError = 0x0,
		RegistrationFailed_DataPendingKill = 0x1,
		RegistrationFailed_AgentAlreadySupported = 0x2,
		RegistrationFailed_AgentNotValid = 0x3,
		RegistrationSuccessful = 0x4,
	};

	char __padding[0x2c0L];
	TArray<FNavDataConfig>& SupportedAgentsField() { return *GetNativePointerField<TArray<FNavDataConfig>*>(this, "UNavigationSystem.SupportedAgents"); }
	float& DirtyAreasUpdateFreqField() { return *GetNativePointerField<float*>(this, "UNavigationSystem.DirtyAreasUpdateFreq"); }
	TArray<ANavMeshBoundsVolume *>& PendingNavVolumeUpdatesField() { return *GetNativePointerField<TArray<ANavMeshBoundsVolume *>*>(this, "UNavigationSystem.PendingNavVolumeUpdates"); }
	TArray<FStringClassReference>& RequiredNavigationDataClassNamesField() { return *GetNativePointerField<TArray<FStringClassReference>*>(this, "UNavigationSystem.RequiredNavigationDataClassNames"); }
	FNavigationSystem::EMode& OperationModeField() { return *GetNativePointerField<FNavigationSystem::EMode*>(this, "UNavigationSystem.OperationMode"); }
	TArray<FAsyncPathFindingQuery>& AsyncPathFindingQueriesField() { return *GetNativePointerField<TArray<FAsyncPathFindingQuery>*>(this, "UNavigationSystem.AsyncPathFindingQueries"); }
	FWindowsCriticalSection& NavDataRegistrationField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "UNavigationSystem.NavDataRegistration"); }
	TArray<FNavigationDirtyArea>& DirtyAreasField() { return *GetNativePointerField<TArray<FNavigationDirtyArea>*>(this, "UNavigationSystem.DirtyAreas"); }
	FWindowsCriticalSection& NavDataRegistrationSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "UNavigationSystem.NavDataRegistrationSection"); }
	FBox& NavigableWorldBoundsField() { return *GetNativePointerField<FBox*>(this, "UNavigationSystem.NavigableWorldBounds"); }
	int& CurrentlyDrawnNavDataIndexField() { return *GetNativePointerField<int*>(this, "UNavigationSystem.CurrentlyDrawnNavDataIndex"); }
	float& DirtyAreasUpdateTimeField() { return *GetNativePointerField<float*>(this, "UNavigationSystem.DirtyAreasUpdateTime"); }

	// Functions

	void AddDirtyArea(const FBox * NewArea, int Flags) { NativeCall<void, const FBox *, int>(this, "UNavigationSystem.AddDirtyArea", NewArea, Flags); }
	void AddElementToNavOctree(const FNavigationDirtyElement * DirtyElement) { NativeCall<void, const FNavigationDirtyElement *>(this, "UNavigationSystem.AddElementToNavOctree", DirtyElement); }
	void AddLevelCollisionToOctree(ULevel * Level) { NativeCall<void, ULevel *>(this, "UNavigationSystem.AddLevelCollisionToOctree", Level); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UNavigationSystem.AddReferencedObjects", InThis, Collector); }
	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "UNavigationSystem.ApplyWorldOffset", InOffset, bWorldShift); }
	void Build() { NativeCall<void>(this, "UNavigationSystem.Build"); }
	void CleanUp(UNavigationSystem::ECleanupMode Mode) { NativeCall<void, UNavigationSystem::ECleanupMode>(this, "UNavigationSystem.CleanUp", Mode); }
	static UNavigationSystem * CreateNavigationSystem(UWorld * WorldOwner) { return NativeCall<UNavigationSystem *, UWorld *>(nullptr, "UNavigationSystem.CreateNavigationSystem", WorldOwner); }
	void DoInitialSetup() { NativeCall<void>(this, "UNavigationSystem.DoInitialSetup"); }
	FPathFindingResult * FindPathSync(FPathFindingResult * result, const FNavAgentProperties * AgentProperties, FPathFindingQuery Query, EPathFindingMode::Type Mode) { return NativeCall<FPathFindingResult *, FPathFindingResult *, const FNavAgentProperties *, FPathFindingQuery, EPathFindingMode::Type>(this, "UNavigationSystem.FindPathSync", result, AgentProperties, Query, Mode); }
	FPathFindingResult * FindPathSync(FPathFindingResult * result, FPathFindingQuery Query, EPathFindingMode::Type Mode) { return NativeCall<FPathFindingResult *, FPathFindingResult *, FPathFindingQuery, EPathFindingMode::Type>(this, "UNavigationSystem.FindPathSync", result, Query, Mode); }
	static UNavigationPath * FindPathToActorSynchronously(UObject * WorldContext, const FVector * PathStart, AActor * GoalActor, float TetherDistance, AActor * PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass) { return NativeCall<UNavigationPath *, UObject *, const FVector *, AActor *, float, AActor *, TSubclassOf<UNavigationQueryFilter>>(nullptr, "UNavigationSystem.FindPathToActorSynchronously", WorldContext, PathStart, GoalActor, TetherDistance, PathfindingContext, FilterClass); }
	static UNavigationPath * FindPathToLocationSynchronously(UObject * WorldContext, const FVector * PathStart, const FVector * PathEnd, AActor * PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass) { return NativeCall<UNavigationPath *, UObject *, const FVector *, const FVector *, AActor *, TSubclassOf<UNavigationQueryFilter>>(nullptr, "UNavigationSystem.FindPathToLocationSynchronously", WorldContext, PathStart, PathEnd, PathfindingContext, FilterClass); }
	static UNavigationSystem * GetCurrent(UWorld * World) { return NativeCall<UNavigationSystem *, UWorld *>(nullptr, "UNavigationSystem.GetCurrent", World); }
	INavLinkCustomInterface * GetCustomLink(unsigned int UniqueLinkId) { return NativeCall<INavLinkCustomInterface *, unsigned int>(this, "UNavigationSystem.GetCustomLink", UniqueLinkId); }
	bool GetNavOctreeElementData(UObject * NodeOwner, int * DirtyFlags, FBox * DirtyBounds) { return NativeCall<bool, UObject *, int *, FBox *>(this, "UNavigationSystem.GetNavOctreeElementData", NodeOwner, DirtyFlags, DirtyBounds); }
	ENavigationQueryResult::Type GetPathCost(const FVector * PathStart, const FVector * PathEnd, float * OutPathCost, ANavigationData * NavData, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter) { return NativeCall<ENavigationQueryResult::Type, const FVector *, const FVector *, float *, ANavigationData *, TSharedPtr<FNavigationQueryFilter const ,0>>(this, "UNavigationSystem.GetPathCost", PathStart, PathEnd, OutPathCost, NavData, QueryFilter); }
	static ENavigationQueryResult::Type GetPathCost(UObject * WorldContextObject, const FVector * PathStart, const FVector * PathEnd, float * OutPathCost, ANavigationData * NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) { return NativeCall<ENavigationQueryResult::Type, UObject *, const FVector *, const FVector *, float *, ANavigationData *, TSubclassOf<UNavigationQueryFilter>>(nullptr, "UNavigationSystem.GetPathCost", WorldContextObject, PathStart, PathEnd, OutPathCost, NavData, FilterClass); }
	ENavigationQueryResult::Type GetPathLength(const FVector * PathStart, const FVector * PathEnd, float * OutPathLength, ANavigationData * NavData, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter) { return NativeCall<ENavigationQueryResult::Type, const FVector *, const FVector *, float *, ANavigationData *, TSharedPtr<FNavigationQueryFilter const ,0>>(this, "UNavigationSystem.GetPathLength", PathStart, PathEnd, OutPathLength, NavData, QueryFilter); }
	static ENavigationQueryResult::Type GetPathLength(UObject * WorldContextObject, const FVector * PathStart, const FVector * PathEnd, float * OutPathLength, ANavigationData * NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) { return NativeCall<ENavigationQueryResult::Type, UObject *, const FVector *, const FVector *, float *, ANavigationData *, TSubclassOf<UNavigationQueryFilter>>(nullptr, "UNavigationSystem.GetPathLength", WorldContextObject, PathStart, PathEnd, OutPathLength, NavData, FilterClass); }
	bool GetRandomPoint(FNavLocation * ResultLocation, ANavigationData * NavData, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter) { return NativeCall<bool, FNavLocation *, ANavigationData *, TSharedPtr<FNavigationQueryFilter const ,0>>(this, "UNavigationSystem.GetRandomPoint", ResultLocation, NavData, QueryFilter); }
	static FVector * GetRandomPoint(FVector * result, UObject * WorldContextObject, ANavigationData * NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) { return NativeCall<FVector *, FVector *, UObject *, ANavigationData *, TSubclassOf<UNavigationQueryFilter>>(nullptr, "UNavigationSystem.GetRandomPoint", result, WorldContextObject, NavData, FilterClass); }
	bool GetRandomPointInRadius(const FVector * Origin, float Radius, FNavLocation * ResultLocation, ANavigationData * NavData, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter) { return NativeCall<bool, const FVector *, float, FNavLocation *, ANavigationData *, TSharedPtr<FNavigationQueryFilter const ,0>>(this, "UNavigationSystem.GetRandomPointInRadius", Origin, Radius, ResultLocation, NavData, QueryFilter); }
	static FVector * GetRandomPointInRadius(FVector * result, UObject * WorldContextObject, const FVector * Origin, float Radius, ANavigationData * NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) { return NativeCall<FVector *, FVector *, UObject *, const FVector *, float, ANavigationData *, TSubclassOf<UNavigationQueryFilter>>(nullptr, "UNavigationSystem.GetRandomPointInRadius", result, WorldContextObject, Origin, Radius, NavData, FilterClass); }
	static FVector * GetRandomReachablePointInMinMaxRadius(FVector * result, UObject * WorldContextObject, const FVector * Origin, float MinRadius, float MaxRadius, const FRandomStream * RandStream, const FVector PathDirection, const float DotLimit, ANavigationData * NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) { return NativeCall<FVector *, FVector *, UObject *, const FVector *, float, float, const FRandomStream *, const FVector, const float, ANavigationData *, TSubclassOf<UNavigationQueryFilter>>(nullptr, "UNavigationSystem.GetRandomReachablePointInMinMaxRadius", result, WorldContextObject, Origin, MinRadius, MaxRadius, RandStream, PathDirection, DotLimit, NavData, FilterClass); }
	int GetSupportedAgentIndex(const FNavAgentProperties * NavAgent) { return NativeCall<int, const FNavAgentProperties *>(this, "UNavigationSystem.GetSupportedAgentIndex", NavAgent); }
	int GetSupportedAgentIndex(ANavigationData * NavData) { return NativeCall<int, ANavigationData *>(this, "UNavigationSystem.GetSupportedAgentIndex", NavData); }
	FBox * GetWorldBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "UNavigationSystem.GetWorldBounds", result); }
	static void InitializeForWorld(UWorld * World, FNavigationSystem::EMode Mode) { NativeCall<void, UWorld *, FNavigationSystem::EMode>(nullptr, "UNavigationSystem.InitializeForWorld", World, Mode); }
	static bool IsNavigationBeingBuilt(UObject * WorldContextObject) { return NativeCall<bool, UObject *>(nullptr, "UNavigationSystem.IsNavigationBeingBuilt", WorldContextObject); }
	bool IsNavigationBuildInProgress(bool bCheckDirtyToo) { return NativeCall<bool, bool>(this, "UNavigationSystem.IsNavigationBuildInProgress", bCheckDirtyToo); }
	bool IsNavigationBuilt(const AWorldSettings * Settings) { return NativeCall<bool, const AWorldSettings *>(this, "UNavigationSystem.IsNavigationBuilt", Settings); }
	bool IsNavigationRelevant(AActor * TestActor) { return NativeCall<bool, AActor *>(this, "UNavigationSystem.IsNavigationRelevant", TestActor); }
	bool IsThereAnywhereToBuildNavigation() { return NativeCall<bool>(this, "UNavigationSystem.IsThereAnywhereToBuildNavigation"); }
	static bool NavigationRaycast(UObject * WorldContextObject, const FVector * RayStart, const FVector * RayEnd, FVector * HitLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, AController * Querier) { return NativeCall<bool, UObject *, const FVector *, const FVector *, FVector *, TSubclassOf<UNavigationQueryFilter>, AController *>(nullptr, "UNavigationSystem.NavigationRaycast", WorldContextObject, RayStart, RayEnd, HitLocation, FilterClass, Querier); }
	static void OnActorRegistered(AActor * Actor) { NativeCall<void, AActor *>(nullptr, "UNavigationSystem.OnActorRegistered", Actor); }
	static void OnComponentRegistered(UActorComponent * Comp) { NativeCall<void, UActorComponent *>(nullptr, "UNavigationSystem.OnComponentRegistered", Comp); }
	static void OnComponentUnregistered(UActorComponent * Comp) { NativeCall<void, UActorComponent *>(nullptr, "UNavigationSystem.OnComponentUnregistered", Comp); }
	void OnLevelAddedToWorld(ULevel * InLevel, UWorld * InWorld) { NativeCall<void, ULevel *, UWorld *>(this, "UNavigationSystem.OnLevelAddedToWorld", InLevel, InWorld); }
	void OnLevelRemovedFromWorld(ULevel * InLevel, UWorld * InWorld) { NativeCall<void, ULevel *, UWorld *>(this, "UNavigationSystem.OnLevelRemovedFromWorld", InLevel, InWorld); }
	void OnNavigationAreaEvent(UClass * AreaClass, ENavAreaEvent::Type Event) { NativeCall<void, UClass *, ENavAreaEvent::Type>(this, "UNavigationSystem.OnNavigationAreaEvent", AreaClass, Event); }
	void OnNavigationBoundsUpdated(ANavMeshBoundsVolume * NavVolume) { NativeCall<void, ANavMeshBoundsVolume *>(this, "UNavigationSystem.OnNavigationBoundsUpdated", NavVolume); }
	void OnNavigationDirtied(const FBox * Bounds) { NativeCall<void, const FBox *>(this, "UNavigationSystem.OnNavigationDirtied", Bounds); }
	void OnPostLoadMap() { NativeCall<void>(this, "UNavigationSystem.OnPostLoadMap"); }
	void OnWorldInitDone(FNavigationSystem::EMode Mode) { NativeCall<void, FNavigationSystem::EMode>(this, "UNavigationSystem.OnWorldInitDone", Mode); }
	void PerformAsyncQueries(TArray<FAsyncPathFindingQuery> PathFindingQueries) { NativeCall<void, TArray<FAsyncPathFindingQuery>>(this, "UNavigationSystem.PerformAsyncQueries", PathFindingQueries); }
	void PerformNavigationBoundsUpdate(ANavMeshBoundsVolume * NavVolume) { NativeCall<void, ANavMeshBoundsVolume *>(this, "UNavigationSystem.PerformNavigationBoundsUpdate", NavVolume); }
	void PopulateNavOctree() { NativeCall<void>(this, "UNavigationSystem.PopulateNavOctree"); }
	void PostInitProperties() { NativeCall<void>(this, "UNavigationSystem.PostInitProperties"); }
	void ProcessNavAreaPendingRegistration() { NativeCall<void>(this, "UNavigationSystem.ProcessNavAreaPendingRegistration"); }
	void ProcessRegistrationCandidates() { NativeCall<void>(this, "UNavigationSystem.ProcessRegistrationCandidates"); }
	bool ProjectPointToNavigation(const FVector * Point, FNavLocation * OutLocation, const FVector * Extent, ANavigationData * NavData, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter) { return NativeCall<bool, const FVector *, FNavLocation *, const FVector *, ANavigationData *, TSharedPtr<FNavigationQueryFilter const ,0>>(this, "UNavigationSystem.ProjectPointToNavigation", Point, OutLocation, Extent, NavData, QueryFilter); }
	static FVector * ProjectPointToNavigation(FVector * result, UObject * WorldContextObject, const FVector * Point, ANavigationData * NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) { return NativeCall<FVector *, FVector *, UObject *, const FVector *, ANavigationData *, TSubclassOf<UNavigationQueryFilter>>(nullptr, "UNavigationSystem.ProjectPointToNavigation", result, WorldContextObject, Point, NavData, FilterClass); }
	static FVector * ProjectPointToNavigationEx(FVector * result, UObject * WorldContext, const FVector * Point, const FVector * Extent, ANavigationData * NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) { return NativeCall<FVector *, FVector *, UObject *, const FVector *, const FVector *, ANavigationData *, TSubclassOf<UNavigationQueryFilter>>(nullptr, "UNavigationSystem.ProjectPointToNavigationEx", result, WorldContext, Point, Extent, NavData, FilterClass); }
	void RebuildAll() { NativeCall<void>(this, "UNavigationSystem.RebuildAll"); }
	void RegisterNavAreaClass(UClass * AreaClass) { NativeCall<void, UClass *>(this, "UNavigationSystem.RegisterNavAreaClass", AreaClass); }
	UNavigationSystem::ERegistrationResult RegisterNavData(ANavigationData * NavData) { return NativeCall<UNavigationSystem::ERegistrationResult, ANavigationData *>(this, "UNavigationSystem.RegisterNavData", NavData); }
	FSetElementId * RegisterNavOctreeElement(FSetElementId * result, UObject * ElementOwner, INavRelevantInterface * ElementInterface, int UpdateFlags) { return NativeCall<FSetElementId *, FSetElementId *, UObject *, INavRelevantInterface *, int>(this, "UNavigationSystem.RegisterNavOctreeElement", result, ElementOwner, ElementInterface, UpdateFlags); }
	void RemoveLevelCollisionFromOctree(ULevel * Level) { NativeCall<void, ULevel *>(this, "UNavigationSystem.RemoveLevelCollisionFromOctree", Level); }
	void RemoveNavOctreeElementId(const FOctreeElementId * ElementId, int UpdateFlags) { NativeCall<void, const FOctreeElementId *, int>(this, "UNavigationSystem.RemoveNavOctreeElementId", ElementId, UpdateFlags); }
	static void RequestAreaRegistering(UClass * NavAreaClass) { NativeCall<void, UClass *>(nullptr, "UNavigationSystem.RequestAreaRegistering", NavAreaClass); }
	static void RequestAreaUnregistering(UClass * NavAreaClass) { NativeCall<void, UClass *>(nullptr, "UNavigationSystem.RequestAreaUnregistering", NavAreaClass); }
	void RequestRegistration(ANavigationData * NavData, bool bTriggerRegistrationProcessing) { NativeCall<void, ANavigationData *, bool>(this, "UNavigationSystem.RequestRegistration", NavData, bTriggerRegistrationProcessing); }
	static void SimpleMoveToActor(AController * Controller, AActor * Goal) { NativeCall<void, AController *, AActor *>(nullptr, "UNavigationSystem.SimpleMoveToActor", Controller, Goal); }
	static void SimpleMoveToLocation(AController * Controller, const FVector * Goal) { NativeCall<void, AController *, const FVector *>(nullptr, "UNavigationSystem.SimpleMoveToLocation", Controller, Goal); }
	void SpawnMissingNavigationData() { NativeCall<void>(this, "UNavigationSystem.SpawnMissingNavigationData"); }
	bool TestPathSync(FPathFindingQuery Query, EPathFindingMode::Type Mode, int * NumVisitedNodes) { return NativeCall<bool, FPathFindingQuery, EPathFindingMode::Type, int *>(this, "UNavigationSystem.TestPathSync", Query, Mode, NumVisitedNodes); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "UNavigationSystem.Tick", DeltaSeconds); }
	void TriggerAsyncQueries(TArray<FAsyncPathFindingQuery> * PathFindingQueries) { NativeCall<void, TArray<FAsyncPathFindingQuery> *>(this, "UNavigationSystem.TriggerAsyncQueries", PathFindingQueries); }
	void UnregisterNavData(ANavigationData * NavData) { NativeCall<void, ANavigationData *>(this, "UNavigationSystem.UnregisterNavData", NavData); }
	void UnregisterNavOctreeElement(UObject * ElementOwner, INavRelevantInterface * ElementInterface, int UpdateFlags) { NativeCall<void, UObject *, INavRelevantInterface *, int>(this, "UNavigationSystem.UnregisterNavOctreeElement", ElementOwner, ElementInterface, UpdateFlags); }
	void UpdateCustomLink(const INavLinkCustomInterface * CustomLink) { NativeCall<void, const INavLinkCustomInterface *>(this, "UNavigationSystem.UpdateCustomLink", CustomLink); }
	static void UpdateNavOctreeAll(AActor * Actor) { NativeCall<void, AActor *>(nullptr, "UNavigationSystem.UpdateNavOctreeAll", Actor); }
	void UpdateNavOctreeElement(UObject * ElementOwner, INavRelevantInterface * ElementInterface, int UpdateFlags) { NativeCall<void, UObject *, INavRelevantInterface *, int>(this, "UNavigationSystem.UpdateNavOctreeElement", ElementOwner, ElementInterface, UpdateFlags); }
	bool UpdateNavOctreeElementBounds(UActorComponent * Comp, const FBox * NewBounds, const FBox * DirtyArea) { return NativeCall<bool, UActorComponent *, const FBox *, const FBox *>(this, "UNavigationSystem.UpdateNavOctreeElementBounds", Comp, NewBounds, DirtyArea); }
	void UpdateNavOctreeParentChain(UObject * ElementOwner) { NativeCall<void, UObject *>(this, "UNavigationSystem.UpdateNavOctreeParentChain", ElementOwner); }
};

