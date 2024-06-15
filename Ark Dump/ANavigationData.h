#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "FNavigationProjectionWork.h"
#include "FNavigationRaycastWork.h"
#include "FNavigationDirtyArea.h"
#include "URecastFilter_UseDefaultArea.h"

struct ANavigationData : AActor
{
	char __padding[0x178L];
	FNavDataConfig& NavDataConfigField() { return *GetNativePointerField<FNavDataConfig*>(this, "ANavigationData.NavDataConfig"); }
	float& ObservedPathsTickIntervalField() { return *GetNativePointerField<float*>(this, "ANavigationData.ObservedPathsTickInterval"); }
	unsigned int& DataVersionField() { return *GetNativePointerField<unsigned int*>(this, "ANavigationData.DataVersion"); }
	TArray<FNavPathRecalculationRequest>& RepathRequestsField() { return *GetNativePointerField<TArray<FNavPathRecalculationRequest>*>(this, "ANavigationData.RepathRequests"); }
	float& NextObservedPathsTickInSecondsField() { return *GetNativePointerField<float*>(this, "ANavigationData.NextObservedPathsTickInSeconds"); }
	TArray<FSupportedAreaData>& SupportedAreasField() { return *GetNativePointerField<TArray<FSupportedAreaData>*>(this, "ANavigationData.SupportedAreas"); }
	unsigned __int16& NavDataUniqueIDField() { return *GetNativePointerField<unsigned __int16*>(this, "ANavigationData.NavDataUniqueID"); }

	// Functions

	void RequestRePath(TSharedPtr<FNavigationPath,1> Path, ENavPathUpdateType::Type Reason) { NativeCall<void, TSharedPtr<FNavigationPath,1>, ENavPathUpdateType::Type>(this, "ANavigationData.RequestRePath", Path, Reason); }
	void BatchProjectPoints(TArray<FNavigationProjectionWork> * Workload, const FVector * Extent, TSharedPtr<FNavigationQueryFilter const ,0> Filter, UObject * Querier) { NativeCall<void, TArray<FNavigationProjectionWork> *, const FVector *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ANavigationData.BatchProjectPoints", Workload, Extent, Filter, Querier); }
	void BatchRaycast(TArray<FNavigationRaycastWork> * Workload, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter, UObject * Querier) { NativeCall<void, TArray<FNavigationRaycastWork> *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ANavigationData.BatchRaycast", Workload, QueryFilter, Querier); }
	ENavigationQueryResult::Type CalcPathCost(const FVector * PathStart, const FVector * PathEnd, float * OutPathCost, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter, UObject * Querier) { return NativeCall<ENavigationQueryResult::Type, const FVector *, const FVector *, float *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ANavigationData.CalcPathCost", PathStart, PathEnd, OutPathCost, QueryFilter, Querier); }
	ENavigationQueryResult::Type CalcPathLength(const FVector * PathStart, const FVector * PathEnd, float * OutPathLength, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter, UObject * Querier) { return NativeCall<ENavigationQueryResult::Type, const FVector *, const FVector *, float *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ANavigationData.CalcPathLength", PathStart, PathEnd, OutPathLength, QueryFilter, Querier); }
	ENavigationQueryResult::Type CalcPathLengthAndCost(const FVector * PathStart, const FVector * PathEnd, float * OutPathLength, float * OutPathCost, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter, UObject * Querier) { return NativeCall<ENavigationQueryResult::Type, const FVector *, const FVector *, float *, float *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ANavigationData.CalcPathLengthAndCost", PathStart, PathEnd, OutPathLength, OutPathCost, QueryFilter, Querier); }
	bool CanRebuild() { return NativeCall<bool>(this, "ANavigationData.CanRebuild"); }
	void CleanUp() { NativeCall<void>(this, "ANavigationData.CleanUp"); }
	void CleanUpAndMarkPendingKill() { NativeCall<void>(this, "ANavigationData.CleanUpAndMarkPendingKill"); }
	void DestroyGenerator() { NativeCall<void>(this, "ANavigationData.DestroyGenerator"); }
	void Destroyed() { NativeCall<void>(this, "ANavigationData.Destroyed"); }
	void FillConfig(FNavDataConfig * Dest) { NativeCall<void, FNavDataConfig *>(this, "ANavigationData.FillConfig", Dest); }
	FPathFindingResult * FindPath(FPathFindingResult * result, const FNavAgentProperties * AgentProperties, const FPathFindingQuery * Query) { return NativeCall<FPathFindingResult *, FPathFindingResult *, const FNavAgentProperties *, const FPathFindingQuery *>(this, "ANavigationData.FindPath", result, AgentProperties, Query); }
	int GetAreaID(const UClass * AreaClass) { return NativeCall<int, const UClass *>(this, "ANavigationData.GetAreaID", AreaClass); }
	FBox * GetBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "ANavigationData.GetBounds", result); }
	int GetNewAreaID(const UClass * AreaClass) { return NativeCall<int, const UClass *>(this, "ANavigationData.GetNewAreaID", AreaClass); }
	bool GetRandomPointInRadius(const FVector * Origin, float Radius, FNavLocation * OutResult, TSharedPtr<FNavigationQueryFilter const ,0> Filter, UObject * Querier) { return NativeCall<bool, const FVector *, float, FNavLocation *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ANavigationData.GetRandomPointInRadius", Origin, Radius, OutResult, Filter, Querier); }
	bool GetRandomReachablePointInMinMaxRadius(const FVector * Origin, float MinRadius, float MaxRadius, const FRandomStream * RandomStream, const FVector PathDirection, const float DotLimit, FNavLocation * ResultLocation, TSharedPtr<FNavigationQueryFilter const ,0> Filter, UObject * Querier) { return NativeCall<bool, const FVector *, float, float, const FRandomStream *, const FVector, const float, FNavLocation *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ANavigationData.GetRandomReachablePointInMinMaxRadius", Origin, MinRadius, MaxRadius, RandomStream, PathDirection, DotLimit, ResultLocation, Filter, Querier); }
	unsigned int LogMemUsed() { return NativeCall<unsigned int>(this, "ANavigationData.LogMemUsed"); }
	void OnNavAreaAdded(const UClass * NavAreaClass, int AgentIndex) { NativeCall<void, const UClass *, int>(this, "ANavigationData.OnNavAreaAdded", NavAreaClass, AgentIndex); }
	void OnNavAreaEvent(const UClass * NavAreaClass, ENavAreaEvent::Type Event) { NativeCall<void, const UClass *, ENavAreaEvent::Type>(this, "ANavigationData.OnNavAreaEvent", NavAreaClass, Event); }
	void OnNavAreaRemoved(const UClass * NavAreaClass) { NativeCall<void, const UClass *>(this, "ANavigationData.OnNavAreaRemoved", NavAreaClass); }
	void OnRegistered() { NativeCall<void>(this, "ANavigationData.OnRegistered"); }
	void OnUnregistered() { NativeCall<void>(this, "ANavigationData.OnUnregistered"); }
	void PostInitProperties() { NativeCall<void>(this, "ANavigationData.PostInitProperties"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ANavigationData.PostInitializeComponents"); }
	void PostLoad() { NativeCall<void>(this, "ANavigationData.PostLoad"); }
	void ProcessNavAreas(const TArray<UClass const *> * AreaClasses, int AgentIndex) { NativeCall<void, const TArray<UClass const *> *, int>(this, "ANavigationData.ProcessNavAreas", AreaClasses, AgentIndex); }
	bool ProjectPoint(const FVector * Point, FNavLocation * OutLocation, const FVector * Extent, TSharedPtr<FNavigationQueryFilter const ,0> Filter, UObject * Querier) { return NativeCall<bool, const FVector *, FNavLocation *, const FVector *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ANavigationData.ProjectPoint", Point, OutLocation, Extent, Filter, Querier); }
	void PurgeUnusedPaths() { NativeCall<void>(this, "ANavigationData.PurgeUnusedPaths"); }
	void RebuildDirtyAreas(const TArray<FNavigationDirtyArea> * DirtyAreas) { NativeCall<void, const TArray<FNavigationDirtyArea> *>(this, "ANavigationData.RebuildDirtyAreas", DirtyAreas); }
	void RegisterActivePath(TSharedPtr<FNavigationPath,1> SharedPath) { NativeCall<void, TSharedPtr<FNavigationPath,1>>(this, "ANavigationData.RegisterActivePath", SharedPath); }
	void RerunConstructionScripts() { NativeCall<void>(this, "ANavigationData.RerunConstructionScripts"); }
	void SetConfig(const FNavDataConfig * Src) { NativeCall<void, const FNavDataConfig *>(this, "ANavigationData.SetConfig", Src); }
	void StoreQueryFilter(TSubclassOf<UNavigationQueryFilter> FilterClass, TSharedPtr<FNavigationQueryFilter const ,0> NavFilter) { NativeCall<void, TSubclassOf<UNavigationQueryFilter>, TSharedPtr<FNavigationQueryFilter const ,0>>(this, "ANavigationData.StoreQueryFilter", FilterClass, NavFilter); }
	FPathFindingResult * FindHierarchicalPath(FPathFindingResult * result, const FNavAgentProperties * AgentProperties, const FPathFindingQuery * Query) { return NativeCall<FPathFindingResult *, FPathFindingResult *, const FNavAgentProperties *, const FPathFindingQuery *>(this, "ANavigationData.FindHierarchicalPath", result, AgentProperties, Query); }
	void RegisterObservedPath(TSharedPtr<FNavigationPath,1> SharedPath) { NativeCall<void, TSharedPtr<FNavigationPath,1>>(this, "ANavigationData.RegisterObservedPath", SharedPath); }
};

