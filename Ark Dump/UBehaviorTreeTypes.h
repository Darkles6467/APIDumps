#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBehaviorTreeTypes : UObject
{

	// Functions

	static FString * DescribeFlowAbortMode(FString * result, EBTFlowAbortMode::Type AbortMode) { return NativeCall<FString *, FString *, EBTFlowAbortMode::Type>(nullptr, "UBehaviorTreeTypes.DescribeFlowAbortMode", result, AbortMode); }
	static FString * DescribeNodeHelper(FString * result, const UBTNode * Node) { return NativeCall<FString *, FString *, const UBTNode *>(nullptr, "UBehaviorTreeTypes.DescribeNodeHelper", result, Node); }
	static FString * DescribeNodeResult(FString * result, EBTNodeResult::Type NodeResult) { return NativeCall<FString *, FString *, EBTNodeResult::Type>(nullptr, "UBehaviorTreeTypes.DescribeNodeResult", result, NodeResult); }
	static FString * GetShortTypeName(FString * result, UObject * Ob) { return NativeCall<FString *, FString *, UObject *>(nullptr, "UBehaviorTreeTypes.GetShortTypeName", result, Ob); }
};

