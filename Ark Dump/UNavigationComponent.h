#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNavigationComponent : UActorComponent
{
	char __padding[0xc8L];
	FVector& NavigationQueryExtentField() { return *GetNativePointerField<FVector*>(this, "UNavigationComponent.NavigationQueryExtent"); }
	INavAgentInterface * MyNavAgentField() { return GetNativePointerField<INavAgentInterface *>(this, "UNavigationComponent.MyNavAgent"); }
	INavPathObserverInterface * MyPathObserverField() { return GetNativePointerField<INavPathObserverInterface *>(this, "UNavigationComponent.MyPathObserver"); }
	FVector& CurrentGoalField() { return *GetNativePointerField<FVector*>(this, "UNavigationComponent.CurrentGoal"); }
	FVector& OriginalGoalActorLocationField() { return *GetNativePointerField<FVector*>(this, "UNavigationComponent.OriginalGoalActorLocation"); }
	int& AsynPathQueryIDField() { return *GetNativePointerField<int*>(this, "UNavigationComponent.AsynPathQueryID"); }
	int& NavDataFlagsField() { return *GetNativePointerField<int*>(this, "UNavigationComponent.NavDataFlags"); }
	float& RepathDistanceSqField() { return *GetNativePointerField<float*>(this, "UNavigationComponent.RepathDistanceSq"); }
	UNavigationComponent::FDeferredRepath& RepathDataField() { return *GetNativePointerField<UNavigationComponent::FDeferredRepath*>(this, "UNavigationComponent.RepathData"); }

	// Functions

	bool AsyncGeneratePath(const FVector * FromLocation, const FVector * GoalLocation, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter) { return NativeCall<bool, const FVector *, const FVector *, TSharedPtr<FNavigationQueryFilter const ,0>>(this, "UNavigationComponent.AsyncGeneratePath", FromLocation, GoalLocation, QueryFilter); }
	bool AsyncGeneratePathTo(const FVector * GoalLocation, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter) { return NativeCall<bool, const FVector *, TSharedPtr<FNavigationQueryFilter const ,0>>(this, "UNavigationComponent.AsyncGeneratePathTo", GoalLocation, QueryFilter); }
	void AsyncGeneratePath_OnCompleteCallback(unsigned int QueryID, ENavigationQueryResult::Type Result, TSharedPtr<FNavigationPath,1> ResultPath) { NativeCall<void, unsigned int, ENavigationQueryResult::Type, TSharedPtr<FNavigationPath,1>>(this, "UNavigationComponent.AsyncGeneratePath_OnCompleteCallback", QueryID, Result, ResultPath); }
	void CacheNavQueryExtent() { NativeCall<void>(this, "UNavigationComponent.CacheNavQueryExtent"); }
	void DeferredResumePath() { NativeCall<void>(this, "UNavigationComponent.DeferredResumePath"); }
	bool FindPathToActor(AActor * NewGoalActor, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter, float RepathDistance) { return NativeCall<bool, AActor *, TSharedPtr<FNavigationQueryFilter const ,0>, float>(this, "UNavigationComponent.FindPathToActor", NewGoalActor, QueryFilter, RepathDistance); }
	bool FindPathToLocation(const FVector * DestLocation, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter) { return NativeCall<bool, const FVector *, TSharedPtr<FNavigationQueryFilter const ,0>>(this, "UNavigationComponent.FindPathToLocation", DestLocation, QueryFilter); }
	bool FindSimplePathToActor(AActor * NewGoalActor, float RepathDistance) { return NativeCall<bool, AActor *, float>(this, "UNavigationComponent.FindSimplePathToActor", NewGoalActor, RepathDistance); }
	bool FindSimplePathToLocation(const FVector * DestLocation) { return NativeCall<bool, const FVector *>(this, "UNavigationComponent.FindSimplePathToLocation", DestLocation); }
	bool GeneratePathTo(const FVector * GoalLocation, TSharedPtr<FNavigationQueryFilter const ,0> QueryFilter) { return NativeCall<bool, const FVector *, TSharedPtr<FNavigationQueryFilter const ,0>>(this, "UNavigationComponent.GeneratePathTo", GoalLocation, QueryFilter); }
	bool GenerateSimplePath(const FVector * Destination) { return NativeCall<bool, const FVector *>(this, "UNavigationComponent.GenerateSimplePath", Destination); }
	void InitializeComponent() { NativeCall<void>(this, "UNavigationComponent.InitializeComponent"); }
	void NotifyPathUpdate() { NativeCall<void>(this, "UNavigationComponent.NotifyPathUpdate"); }
	void OnNavAgentChanged() { NativeCall<void>(this, "UNavigationComponent.OnNavAgentChanged"); }
	void OnNavDataRegistered(ANavigationData * NavData) { NativeCall<void, ANavigationData *>(this, "UNavigationComponent.OnNavDataRegistered", NavData); }
	void OnPathEvent(FNavigationPath * InvalidatedPath, ENavPathEvent::Type Event) { NativeCall<void, FNavigationPath *, ENavPathEvent::Type>(this, "UNavigationComponent.OnPathEvent", InvalidatedPath, Event); }
	bool ProjectPointToNavigation(const FVector * Location, FVector * ProjectedLocation) { return NativeCall<bool, const FVector *, FVector *>(this, "UNavigationComponent.ProjectPointToNavigation", Location, ProjectedLocation); }
	bool RePathTo(const FVector * GoalLocation, TSharedPtr<FNavigationQueryFilter const ,0> InStoredQueryFilter) { return NativeCall<bool, const FVector *, TSharedPtr<FNavigationQueryFilter const ,0>>(this, "UNavigationComponent.RePathTo", GoalLocation, InStoredQueryFilter); }
	void ResetTransientData() { NativeCall<void>(this, "UNavigationComponent.ResetTransientData"); }
	bool ResumePath() { return NativeCall<bool>(this, "UNavigationComponent.ResumePath"); }
	void SetPath(const TSharedPtr<FNavigationPath,1> * ResultPath) { NativeCall<void, const TSharedPtr<FNavigationPath,1> *>(this, "UNavigationComponent.SetPath", ResultPath); }
	void UpdateCachedComponents() { NativeCall<void>(this, "UNavigationComponent.UpdateCachedComponents"); }
};

