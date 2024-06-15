#pragma once

#include "BaseDeclarations.h"
#include "UBTTask_BlackboardBase.h"
#include "UBTTaskNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTTask_MoveTo : UBTTask_BlackboardBase
{
	char __padding[0x18L];
	float& AcceptableRadiusField() { return *GetNativePointerField<float*>(this, "UBTTask_MoveTo.AcceptableRadius"); }

	// Functions

	EBTNodeResult::Type AbortTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_MoveTo.AbortTask", OwnerComp, NodeMemory); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTTask_MoveTo.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_MoveTo.ExecuteTask", OwnerComp, NodeMemory); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTTask_MoveTo.GetStaticDescription", result); }
	void OnMessage(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, FName Message, int SenderID, bool bSuccess) { NativeCall<void, UBehaviorTreeComponent *, char *, FName, int, bool>(this, "UBTTask_MoveTo.OnMessage", OwnerComp, NodeMemory, Message, SenderID, bSuccess); }
	EBTNodeResult::Type PerformMoveTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_MoveTo.PerformMoveTask", OwnerComp, NodeMemory); }
	void TickTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTTask_MoveTo.TickTask", OwnerComp, NodeMemory, DeltaSeconds); }
	int GetInstanceMemorySize() { return NativeCall<int>(this, "UBTTask_MoveTo.GetInstanceMemorySize"); }
};

