#pragma once

#include "BaseDeclarations.h"
#include "UBTTask_BlackboardBase.h"
#include "UBTTaskNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTTask_MoveDirectlyToward : UBTTask_BlackboardBase
{
	char __padding[0x30L];
	float& AcceptableRadiusField() { return *GetNativePointerField<float*>(this, "UBTTask_MoveDirectlyToward.AcceptableRadius"); }
	FBlackboardKeySelector& AcceptableRadiusKeyField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTTask_MoveDirectlyToward.AcceptableRadiusKey"); }

	// Functions

	EBTNodeResult::Type AbortTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_MoveDirectlyToward.AbortTask", OwnerComp, NodeMemory); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTTask_MoveDirectlyToward.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_MoveDirectlyToward.ExecuteTask", OwnerComp, NodeMemory); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTTask_MoveDirectlyToward.GetStaticDescription", result); }
	void TickTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTTask_MoveDirectlyToward.TickTask", OwnerComp, NodeMemory, DeltaSeconds); }
};

