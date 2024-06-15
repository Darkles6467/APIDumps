#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryTest.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryTest_Pathfinding : UEnvQueryTest
{
	char __padding[0x38L];
	TEnumAsByte<enum EEnvTestPathfinding::Type>& TestModeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvTestPathfinding::Type>*>(this, "UEnvQueryTest_Pathfinding.TestMode"); }
	FEnvBoolParam& PathToItemField() { return *GetNativePointerField<FEnvBoolParam*>(this, "UEnvQueryTest_Pathfinding.PathToItem"); }
	FEnvBoolParam& DiscardUnreachableField() { return *GetNativePointerField<FEnvBoolParam*>(this, "UEnvQueryTest_Pathfinding.DiscardUnreachable"); }
	FEnvBoolParam& HierarchicalPathfindingField() { return *GetNativePointerField<FEnvBoolParam*>(this, "UEnvQueryTest_Pathfinding.HierarchicalPathfinding"); }

	// Functions

	float FindPathCostFrom(const FVector * ItemPos, const FVector * ContextPos, EPathFindingMode::Type Mode, ANavigationData * NavData, UNavigationSystem * NavSys, UObject * PathOwner) { return NativeCall<float, const FVector *, const FVector *, EPathFindingMode::Type, ANavigationData *, UNavigationSystem *, UObject *>(this, "UEnvQueryTest_Pathfinding.FindPathCostFrom", ItemPos, ContextPos, Mode, NavData, NavSys, PathOwner); }
	float FindPathCostTo(const FVector * ItemPos, const FVector * ContextPos, EPathFindingMode::Type Mode, ANavigationData * NavData, UNavigationSystem * NavSys, UObject * PathOwner) { return NativeCall<float, const FVector *, const FVector *, EPathFindingMode::Type, ANavigationData *, UNavigationSystem *, UObject *>(this, "UEnvQueryTest_Pathfinding.FindPathCostTo", ItemPos, ContextPos, Mode, NavData, NavSys, PathOwner); }
	float FindPathLengthFrom(const FVector * ItemPos, const FVector * ContextPos, EPathFindingMode::Type Mode, ANavigationData * NavData, UNavigationSystem * NavSys, UObject * PathOwner) { return NativeCall<float, const FVector *, const FVector *, EPathFindingMode::Type, ANavigationData *, UNavigationSystem *, UObject *>(this, "UEnvQueryTest_Pathfinding.FindPathLengthFrom", ItemPos, ContextPos, Mode, NavData, NavSys, PathOwner); }
	float FindPathLengthTo(const FVector * ItemPos, const FVector * ContextPos, EPathFindingMode::Type Mode, ANavigationData * NavData, UNavigationSystem * NavSys, UObject * PathOwner) { return NativeCall<float, const FVector *, const FVector *, EPathFindingMode::Type, ANavigationData *, UNavigationSystem *, UObject *>(this, "UEnvQueryTest_Pathfinding.FindPathLengthTo", ItemPos, ContextPos, Mode, NavData, NavSys, PathOwner); }
	FText * GetDescriptionDetails(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryTest_Pathfinding.GetDescriptionDetails", result); }
	FString * GetDescriptionTitle(FString * result) { return NativeCall<FString *, FString *>(this, "UEnvQueryTest_Pathfinding.GetDescriptionTitle", result); }
	void RunTest(FEnvQueryInstance * QueryInstance) { NativeCall<void, FEnvQueryInstance *>(this, "UEnvQueryTest_Pathfinding.RunTest", QueryInstance); }
	bool TestPathFrom(const FVector * ItemPos, const FVector * ContextPos, EPathFindingMode::Type Mode, ANavigationData * NavData, UNavigationSystem * NavSys, UObject * PathOwner) { return NativeCall<bool, const FVector *, const FVector *, EPathFindingMode::Type, ANavigationData *, UNavigationSystem *, UObject *>(this, "UEnvQueryTest_Pathfinding.TestPathFrom", ItemPos, ContextPos, Mode, NavData, NavSys, PathOwner); }
	bool TestPathTo(const FVector * ItemPos, const FVector * ContextPos, EPathFindingMode::Type Mode, ANavigationData * NavData, UNavigationSystem * NavSys, UObject * PathOwner) { return NativeCall<bool, const FVector *, const FVector *, EPathFindingMode::Type, ANavigationData *, UNavigationSystem *, UObject *>(this, "UEnvQueryTest_Pathfinding.TestPathTo", ItemPos, ContextPos, Mode, NavData, NavSys, PathOwner); }
};

