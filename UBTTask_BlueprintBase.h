#pragma once

#include "BaseDeclarations.h"
#include "UBTTaskNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTTask_BlueprintBase : UBTTaskNode
{
	char __padding[0x20L];
	TEnumAsByte<enum EBTNodeResult::Type>& CurrentCallResultField() { return *GetNativePointerField<TEnumAsByte<enum EBTNodeResult::Type>*>(this, "UBTTask_BlueprintBase.CurrentCallResult"); }

	// Functions

	EBTNodeResult::Type AbortTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_BlueprintBase.AbortTask", OwnerComp, NodeMemory); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTTask_BlueprintBase.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_BlueprintBase.ExecuteTask", OwnerComp, NodeMemory); }
	void FinishAbort() { NativeCall<void>(this, "UBTTask_BlueprintBase.FinishAbort"); }
	void FinishExecute(bool bSuccess) { NativeCall<void, bool>(this, "UBTTask_BlueprintBase.FinishExecute", bSuccess); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTTask_BlueprintBase.GetStaticDescription", result); }
	bool IsTaskExecuting() { return NativeCall<bool>(this, "UBTTask_BlueprintBase.IsTaskExecuting"); }
	void PostInitProperties() { NativeCall<void>(this, "UBTTask_BlueprintBase.PostInitProperties"); }
	void SetFinishOnMessage(FName MessageName) { NativeCall<void, FName>(this, "UBTTask_BlueprintBase.SetFinishOnMessage", MessageName); }
	void SetFinishOnMessageWithId(FName MessageName, int RequestID) { NativeCall<void, FName, int>(this, "UBTTask_BlueprintBase.SetFinishOnMessageWithId", MessageName, RequestID); }
	void TickTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTTask_BlueprintBase.TickTask", OwnerComp, NodeMemory, DeltaSeconds); }
	void ReceiveAbort(AActor * OwnerActor) { NativeCall<void, AActor *>(this, "UBTTask_BlueprintBase.ReceiveAbort", OwnerActor); }
	void ReceiveExecute(AActor * OwnerActor) { NativeCall<void, AActor *>(this, "UBTTask_BlueprintBase.ReceiveExecute", OwnerActor); }
};

