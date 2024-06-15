#pragma once

#include "BaseDeclarations.h"
#include "ANavigationData.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FNavigationProjectionWork.h"
#include "FNavigationRaycastWork.h"
#include "FNavigationPortalEdge.h"
#include "FNavPathPoint.h"
#include "FAreaNavModifier.h"
#include "FNavMeshTileData.h"
#include "UNavArea.h"

struct ARecastNavMesh : ANavigationData
{
	char __padding[0x118L];
	float& DrawOffsetField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.DrawOffset"); }
	float& TileSizeUUField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.TileSizeUU"); }
	float& CellSizeField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.CellSize"); }
	float& CellHeightField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.CellHeight"); }
	float& AgentRadiusField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.AgentRadius"); }
	float& AgentHeightField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.AgentHeight"); }
	float& AgentMaxHeightField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.AgentMaxHeight"); }
	float& AgentMaxSlopeField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.AgentMaxSlope"); }
	float& AgentMaxStepHeightField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.AgentMaxStepHeight"); }
	float& MinRegionAreaField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.MinRegionArea"); }
	float& MergeRegionSizeField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.MergeRegionSize"); }
	float& MaxSimplificationErrorField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.MaxSimplificationError"); }
	float& DefaultDrawDistanceField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.DefaultDrawDistance"); }
	float& DefaultMaxSearchNodesField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.DefaultMaxSearchNodes"); }
	float& DefaultMaxHierarchicalSearchNodesField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.DefaultMaxHierarchicalSearchNodes"); }
	TEnumAsByte<enum ERecastPartitioning::Type>& RegionPartitioningField() { return *GetNativePointerField<TEnumAsByte<enum ERecastPartitioning::Type>*>(this, "ARecastNavMesh.RegionPartitioning"); }
	TEnumAsByte<enum ERecastPartitioning::Type>& LayerPartitioningField() { return *GetNativePointerField<TEnumAsByte<enum ERecastPartitioning::Type>*>(this, "ARecastNavMesh.LayerPartitioning"); }
	int& RegionChunkSplitsField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.RegionChunkSplits"); }
	int& LayerChunkSplitsField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.LayerChunkSplits"); }
	int& MaxTileGridWidthField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.MaxTileGridWidth"); }
	int& MaxTileGridHeightField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.MaxTileGridHeight"); }
	float& NextTimeToSortTilesField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.NextTimeToSortTiles"); }
	float& TileSetUpdateIntervalField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.TileSetUpdateInterval"); }
	float& HeuristicScaleField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.HeuristicScale"); }
	TArray<FTileSetItem>& TileSetField() { return *GetNativePointerField<TArray<FTileSetItem>*>(this, "ARecastNavMesh.TileSet"); }
	int& GridWidthField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.GridWidth"); }
	int& GridHeightField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.GridHeight"); }
	unsigned int& NavMeshVersionField() { return *GetNativePointerField<unsigned int*>(this, "ARecastNavMesh.NavMeshVersion"); }
	FRecastTickHelper& TickHelperField() { return *GetNativePointerField<FRecastTickHelper*>(this, "ARecastNavMesh.TickHelper"); }
	FPImplRecastNavMesh * RecastNavMeshImplField() { return GetNativePointerField<FPImplRecastNavMesh *>(this, "ARecastNavMesh.RecastNavMeshImpl"); }
	TArray<unsigned int>& FreshTilesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "ARecastNavMesh.FreshTiles"); }
	TNavStatArray<FNavMeshTileData>& TileNavDataContainerField() { return *GetNativePointerField<TNavStatArray<FNavMeshTileData>*>(this, "ARecastNavMesh.TileNavDataContainer"); }
	FWindowsCriticalSection * NavDataReadWriteLockField() { return GetNativePointerField<FWindowsCriticalSection *>(this, "ARecastNavMesh.NavDataReadWriteLock"); }
	FWindowsCriticalSection& NavDataReadWriteLockDummyField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "ARecastNavMesh.NavDataReadWriteLockDummy"); }
	int& BatchQueryCounterField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.BatchQueryCounter"); }

	// Functions

	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "ARecastNavMesh.ApplyWorldOffset", InOffset, bWorldShift); }
	void BatchProjectPoints(TArray<FNavigationProjectionWork> * Workload, const FVector * Extent, TSharedPtr<FNavigationQueryFilter const ,0> Filter, UObject * Querier) { NativeCall<void, TArray<FNavigationProjectionWork> *, const FVector *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ARecastNavMesh.BatchProjectPoints", Workload, Extent, Filter, Querier); }
	void BatchRaycast(TArray<FNavigationRaycastWork> * Workload, TSharedPtr<FNavigationQueryFilter const ,0> Filter, UObject * Querier) { NativeCall<void, TArray<FNavigationRaycastWork> *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ARecastNavMesh.BatchRaycast", Workload, Filter, Querier); }
	void BeginBatchQuery() { NativeCall<void>(this, "ARecastNavMesh.BeginBatchQuery"); }
	ENavigationQueryResult::Type CalcPathCost(const FVector * PathStart, const FVector * PathEnd, float * OutPathCost, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter, UObject * QueryOwner) { return NativeCall<ENavigationQueryResult::Type, const FVector *, const FVector *, float *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ARecastNavMesh.CalcPathCost", PathStart, PathEnd, OutPathCost, QueryFilter, QueryOwner); }
	ENavigationQueryResult::Type CalcPathLength(const FVector * PathStart, const FVector * PathEnd, float * OutPathLength, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter, UObject * QueryOwner) { return NativeCall<ENavigationQueryResult::Type, const FVector *, const FVector *, float *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ARecastNavMesh.CalcPathLength", PathStart, PathEnd, OutPathLength, QueryFilter, QueryOwner); }
	ENavigationQueryResult::Type CalcPathLengthAndCost(const FVector * PathStart, const FVector * PathEnd, float * OutPathLength, float * OutPathCost, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter, UObject * QueryOwner) { return NativeCall<ENavigationQueryResult::Type, const FVector *, const FVector *, float *, float *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ARecastNavMesh.CalcPathLengthAndCost", PathStart, PathEnd, OutPathLength, OutPathCost, QueryFilter, QueryOwner); }
	void CleanUp() { NativeCall<void>(this, "ARecastNavMesh.CleanUp"); }
	void DestroyGenerator() { NativeCall<void>(this, "ARecastNavMesh.DestroyGenerator"); }
	void DestroyRecastPImpl() { NativeCall<void>(this, "ARecastNavMesh.DestroyRecastPImpl"); }
	bool DoesSupportAgent(const FNavAgentProperties * AgentProps) { return NativeCall<bool, const FNavAgentProperties *>(this, "ARecastNavMesh.DoesSupportAgent", AgentProps); }
	void FillConfig(FNavDataConfig * Dest) { NativeCall<void, FNavDataConfig *>(this, "ARecastNavMesh.FillConfig", Dest); }
	static FPathFindingResult * FindPath(FPathFindingResult * result, const FNavAgentProperties * AgentProperties, const FPathFindingQuery * Query) { return NativeCall<FPathFindingResult *, FPathFindingResult *, const FNavAgentProperties *, const FPathFindingQuery *>(nullptr, "ARecastNavMesh.FindPath", result, AgentProperties, Query); }
	bool FindStraightPath(const FVector * StartLoc, const FVector * EndLoc, const TArray<unsigned __int64> * PathCorridor, TArray<FNavPathPoint> * PathPoints, TArray<unsigned int> * CustomLinks) { return NativeCall<bool, const FVector *, const FVector *, const TArray<unsigned __int64> *, TArray<FNavPathPoint> *, TArray<unsigned int> *>(this, "ARecastNavMesh.FindStraightPath", StartLoc, EndLoc, PathCorridor, PathPoints, CustomLinks); }
	void FinishBatchQuery() { NativeCall<void>(this, "ARecastNavMesh.FinishBatchQuery"); }
	FBox * GetBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "ARecastNavMesh.GetBounds", result); }
	void GetEdgesForPathCorridor(const TArray<unsigned __int64> * PathCorridor, TArray<FNavigationPortalEdge> * PathCorridorEdges) { NativeCall<void, const TArray<unsigned __int64> *, TArray<FNavigationPortalEdge> *>(this, "ARecastNavMesh.GetEdgesForPathCorridor", PathCorridor, PathCorridorEdges); }
	FBox * GetNavMeshBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "ARecastNavMesh.GetNavMeshBounds", result); }
	int GetNewAreaID(const UClass * AreaClass) { return NativeCall<int, const UClass *>(this, "ARecastNavMesh.GetNewAreaID", AreaClass); }
	bool GetPolyVerts(unsigned __int64 PolyID, TArray<FVector> * OutVerts) { return NativeCall<bool, unsigned __int64, TArray<FVector> *>(this, "ARecastNavMesh.GetPolyVerts", PolyID, OutVerts); }
	bool GetPolysWithinPathingDistance(const FVector * StartLoc, const float PathingDistance, TArray<unsigned __int64> * FoundPolys, TSharedPtr<FNavigationQueryFilter const ,0> Filter, UObject * QueryOwner) { return NativeCall<bool, const FVector *, const float, TArray<unsigned __int64> *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ARecastNavMesh.GetPolysWithinPathingDistance", StartLoc, PathingDistance, FoundPolys, Filter, QueryOwner); }
	bool GetRandomPointInRadius(const FVector * Origin, float Radius, FNavLocation * OutResult, TSharedPtr<FNavigationQueryFilter const ,0> Filter, UObject * QueryOwner) { return NativeCall<bool, const FVector *, float, FNavLocation *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ARecastNavMesh.GetRandomPointInRadius", Origin, Radius, OutResult, Filter, QueryOwner); }
	bool GetRandomReachablePointInMinMaxRadius(const FVector * Origin, float MinRadius, float MaxRadius, const FRandomStream * RandStream, const FVector PathDirection, const float DotLimit, FNavLocation * OutResult, TSharedPtr<FNavigationQueryFilter const ,0> Filter, UObject * QueryOwner) { return NativeCall<bool, const FVector *, float, float, const FRandomStream *, const FVector, const float, FNavLocation *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ARecastNavMesh.GetRandomReachablePointInMinMaxRadius", Origin, MinRadius, MaxRadius, RandStream, PathDirection, DotLimit, OutResult, Filter, QueryOwner); }
	int GetRemainingTilesToRebuild() { return NativeCall<int>(this, "ARecastNavMesh.GetRemainingTilesToRebuild"); }
	static bool NavMeshRaycast(ANavigationData * Self, const FVector * RayStart, const FVector * RayEnd, FVector * HitLocation, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter, UObject * Querier) { return NativeCall<bool, ANavigationData *, const FVector *, const FVector *, FVector *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(nullptr, "ARecastNavMesh.NavMeshRaycast", Self, RayStart, RayEnd, HitLocation, QueryFilter, Querier); }
	static bool NavMeshRaycast(ANavigationData * Self, const FVector * RayStart, const FVector * RayEnd, FVector * HitLocation, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter, UObject * QueryOwner, ARecastNavMesh::FRaycastResult * Result) { return NativeCall<bool, ANavigationData *, const FVector *, const FVector *, FVector *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *, ARecastNavMesh::FRaycastResult *>(nullptr, "ARecastNavMesh.NavMeshRaycast", Self, RayStart, RayEnd, HitLocation, QueryFilter, QueryOwner, Result); }
	bool NeedsRebuild() { return NativeCall<bool>(this, "ARecastNavMesh.NeedsRebuild"); }
	void OnNavAreaAdded(const UClass * NavAreaClass, int AgentIndex) { NativeCall<void, const UClass *, int>(this, "ARecastNavMesh.OnNavAreaAdded", NavAreaClass, AgentIndex); }
	void PostInitProperties() { NativeCall<void>(this, "ARecastNavMesh.PostInitProperties"); }
	bool ProjectPoint(const FVector * Point, FNavLocation * OutLocation, const FVector * Extent, TSharedPtr<FNavigationQueryFilter const ,0> Filter, UObject * QueryOwner) { return NativeCall<bool, const FVector *, FNavLocation *, const FVector *, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ARecastNavMesh.ProjectPoint", Point, OutLocation, Extent, Filter, QueryOwner); }
	bool ProjectPointMulti(const FVector * Point, TArray<FNavLocation> * OutLocations, const FVector * Extent, float MinZ, float MaxZ, TSharedPtr<FNavigationQueryFilter const ,0> Filter, UObject * QueryOwner) { return NativeCall<bool, const FVector *, TArray<FNavLocation> *, const FVector *, float, float, TSharedPtr<FNavigationQueryFilter const ,0>, UObject *>(this, "ARecastNavMesh.ProjectPointMulti", Point, OutLocations, Extent, MinZ, MaxZ, Filter, QueryOwner); }
	void ReserveTileSet(int NewGridWidth, int NewGridHeight) { NativeCall<void, int, int>(this, "ARecastNavMesh.ReserveTileSet", NewGridWidth, NewGridHeight); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ARecastNavMesh.Serialize", Ar); }
	void SerializeRecastNavMesh(FArchive * Ar, FPImplRecastNavMesh ** NavMesh) { NativeCall<void, FArchive *, FPImplRecastNavMesh **>(this, "ARecastNavMesh.SerializeRecastNavMesh", Ar, NavMesh); }
	void SetConfig(const FNavDataConfig * Src) { NativeCall<void, const FNavDataConfig *>(this, "ARecastNavMesh.SetConfig", Src); }
	void SortAreasForGenerator(TArray<FAreaNavModifier> * Areas) { NativeCall<void, TArray<FAreaNavModifier> *>(this, "ARecastNavMesh.SortAreasForGenerator", Areas); }
	void SortNavigationTiles() { NativeCall<void>(this, "ARecastNavMesh.SortNavigationTiles"); }
	static bool TestHierarchicalPath(const FNavAgentProperties * AgentProperties, const FPathFindingQuery * Query, int * NumVisitedNodes) { return NativeCall<bool, const FNavAgentProperties *, const FPathFindingQuery *, int *>(nullptr, "ARecastNavMesh.TestHierarchicalPath", AgentProperties, Query, NumVisitedNodes); }
	static bool TestPath(const FNavAgentProperties * AgentProperties, const FPathFindingQuery * Query, int * NumVisitedNodes) { return NativeCall<bool, const FNavAgentProperties *, const FPathFindingQuery *, int *>(nullptr, "ARecastNavMesh.TestPath", AgentProperties, Query, NumVisitedNodes); }
	void TickMe(float DeltaTime) { NativeCall<void, float>(this, "ARecastNavMesh.TickMe", DeltaTime); }
	void UpdateCustomLink(const INavLinkCustomInterface * CustomLink) { NativeCall<void, const INavLinkCustomInterface *>(this, "ARecastNavMesh.UpdateCustomLink", CustomLink); }
	void UpdateNavTileData(char * OldTileData, FNavMeshTileData NewTileData) { NativeCall<void, char *, FNavMeshTileData>(this, "ARecastNavMesh.UpdateNavTileData", OldTileData, NewTileData); }
	void UpdateNavigationLinkArea(int UserId, TSubclassOf<UNavArea> AreaClass) { NativeCall<void, int, TSubclassOf<UNavArea>>(this, "ARecastNavMesh.UpdateNavigationLinkArea", UserId, AreaClass); }
	void UpdateNavmeshOffset(const FBox * NavBounds) { NativeCall<void, const FBox *>(this, "ARecastNavMesh.UpdateNavmeshOffset", NavBounds); }
};

