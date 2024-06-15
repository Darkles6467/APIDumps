#pragma once

#include "BaseDeclarations.h"
#include "UBTTask_BlackboardBase.h"
#include "UBTTaskNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FEnvQueryInstance.h"

struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase
{
	char __padding[0x18L];
	UEnvQuery * QueryTemplateField() { return GetNativePointerField<UEnvQuery *>(this, "UBTTask_RunEQSQuery.QueryTemplate"); }
	TArray<FEnvNamedValue>& QueryParamsField() { return *GetNativePointerField<TArray<FEnvNamedValue>*>(this, "UBTTask_RunEQSQuery.QueryParams"); }

	// Functions

	EBTNodeResult::Type AbortTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_RunEQSQuery.AbortTask", OwnerComp, NodeMemory); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTTask_RunEQSQuery.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_RunEQSQuery.ExecuteTask", OwnerComp, NodeMemory); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTTask_RunEQSQuery.GetStaticDescription", result); }
	void OnQueryFinished(TSharedPtr<FEnvQueryResult,0> Result) { NativeCall<void, TSharedPtr<FEnvQueryResult,0>>(this, "UBTTask_RunEQSQuery.OnQueryFinished", Result); }
};

