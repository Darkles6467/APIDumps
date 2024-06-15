#pragma once

#include "BaseDeclarations.h"
#include "UBTTaskNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTTask_Wait : UBTTaskNode
{
	char __padding[0x8L];
	float& WaitTimeField() { return *GetNativePointerField<float*>(this, "UBTTask_Wait.WaitTime"); }

	// Functions

	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTTask_Wait.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_Wait.ExecuteTask", OwnerComp, NodeMemory); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTTask_Wait.GetStaticDescription", result); }
	void TickTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTTask_Wait.TickTask", OwnerComp, NodeMemory, DeltaSeconds); }
};

