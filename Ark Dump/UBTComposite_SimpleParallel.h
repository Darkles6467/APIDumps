#pragma once

#include "BaseDeclarations.h"
#include "UBTCompositeNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTComposite_SimpleParallel : UBTCompositeNode
{
	char __padding[0x8L];
	TEnumAsByte<enum EBTParallelMode::Type>& FinishModeField() { return *GetNativePointerField<TEnumAsByte<enum EBTParallelMode::Type>*>(this, "UBTComposite_SimpleParallel.FinishMode"); }

	// Functions

	bool CanPushSubtree(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, int ChildIdx) { return NativeCall<bool, UBehaviorTreeComponent *, char *, int>(this, "UBTComposite_SimpleParallel.CanPushSubtree", OwnerComp, NodeMemory, ChildIdx); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTComposite_SimpleParallel.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	int GetNextChildHandler(FBehaviorTreeSearchData * SearchData, int PrevChild, EBTNodeResult::Type LastResult) { return NativeCall<int, FBehaviorTreeSearchData *, int, EBTNodeResult::Type>(this, "UBTComposite_SimpleParallel.GetNextChildHandler", SearchData, PrevChild, LastResult); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTComposite_SimpleParallel.GetStaticDescription", result); }
	void NotifyChildExecution(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, int ChildIdx, EBTNodeResult::Type * NodeResult) { NativeCall<void, UBehaviorTreeComponent *, char *, int, EBTNodeResult::Type *>(this, "UBTComposite_SimpleParallel.NotifyChildExecution", OwnerComp, NodeMemory, ChildIdx, NodeResult); }
	void NotifyNodeDeactivation(FBehaviorTreeSearchData * SearchData, EBTNodeResult::Type * NodeResult) { NativeCall<void, FBehaviorTreeSearchData *, EBTNodeResult::Type *>(this, "UBTComposite_SimpleParallel.NotifyNodeDeactivation", SearchData, NodeResult); }
};

