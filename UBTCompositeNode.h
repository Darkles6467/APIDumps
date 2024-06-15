#pragma once

#include "BaseDeclarations.h"
#include "UBTNode.h"

struct UBTCompositeNode : UBTNode
{
	char __padding[0x30L];
	TArray<FBTCompositeChild>& ChildrenField() { return *GetNativePointerField<TArray<FBTCompositeChild>*>(this, "UBTCompositeNode.Children"); }
	unsigned __int16& LastExecutionIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "UBTCompositeNode.LastExecutionIndex"); }

	// Functions

	void ConditionalNotifyChildExecution(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, const UBTNode * ChildNode, EBTNodeResult::Type * NodeResult) { NativeCall<void, UBehaviorTreeComponent *, char *, const UBTNode *, EBTNodeResult::Type *>(this, "UBTCompositeNode.ConditionalNotifyChildExecution", OwnerComp, NodeMemory, ChildNode, NodeResult); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTCompositeNode.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	bool DoDecoratorsAllowExecution(UBehaviorTreeComponent * OwnerComp, int InstanceIdx, int ChildIdx) { return NativeCall<bool, UBehaviorTreeComponent *, int, int>(this, "UBTCompositeNode.DoDecoratorsAllowExecution", OwnerComp, InstanceIdx, ChildIdx); }
	int FindChildToExecute(FBehaviorTreeSearchData * SearchData, EBTNodeResult::Type * LastResult) { return NativeCall<int, FBehaviorTreeSearchData *, EBTNodeResult::Type *>(this, "UBTCompositeNode.FindChildToExecute", SearchData, LastResult); }
	int GetMatchingChildIndex(int ActiveInstanceIdx, FBTNodeIndex * NodeIdx) { return NativeCall<int, int, FBTNodeIndex *>(this, "UBTCompositeNode.GetMatchingChildIndex", ActiveInstanceIdx, NodeIdx); }
	int GetNextChild(FBehaviorTreeSearchData * SearchData, int LastChildIdx, EBTNodeResult::Type LastResult) { return NativeCall<int, FBehaviorTreeSearchData *, int, EBTNodeResult::Type>(this, "UBTCompositeNode.GetNextChild", SearchData, LastChildIdx, LastResult); }
	void NotifyDecoratorsOnActivation(FBehaviorTreeSearchData * SearchData, int ChildIdx) { NativeCall<void, FBehaviorTreeSearchData *, int>(this, "UBTCompositeNode.NotifyDecoratorsOnActivation", SearchData, ChildIdx); }
	void NotifyDecoratorsOnDeactivation(FBehaviorTreeSearchData * SearchData, int ChildIdx, EBTNodeResult::Type * NodeResult) { NativeCall<void, FBehaviorTreeSearchData *, int, EBTNodeResult::Type *>(this, "UBTCompositeNode.NotifyDecoratorsOnDeactivation", SearchData, ChildIdx, NodeResult); }
	void NotifyDecoratorsOnFailedActivation(FBehaviorTreeSearchData * SearchData, int ChildIdx, EBTNodeResult::Type * NodeResult) { NativeCall<void, FBehaviorTreeSearchData *, int, EBTNodeResult::Type *>(this, "UBTCompositeNode.NotifyDecoratorsOnFailedActivation", SearchData, ChildIdx, NodeResult); }
	void OnChildActivation(FBehaviorTreeSearchData * SearchData, int ChildIndex) { NativeCall<void, FBehaviorTreeSearchData *, int>(this, "UBTCompositeNode.OnChildActivation", SearchData, ChildIndex); }
	void OnChildDeactivation(FBehaviorTreeSearchData * SearchData, const UBTNode * ChildNode, EBTNodeResult::Type * NodeResult) { NativeCall<void, FBehaviorTreeSearchData *, const UBTNode *, EBTNodeResult::Type *>(this, "UBTCompositeNode.OnChildDeactivation", SearchData, ChildNode, NodeResult); }
	void OnNodeActivation(FBehaviorTreeSearchData * SearchData) { NativeCall<void, FBehaviorTreeSearchData *>(this, "UBTCompositeNode.OnNodeActivation", SearchData); }
	void OnNodeDeactivation(FBehaviorTreeSearchData * SearchData, EBTNodeResult::Type * NodeResult) { NativeCall<void, FBehaviorTreeSearchData *, EBTNodeResult::Type *>(this, "UBTCompositeNode.OnNodeDeactivation", SearchData, NodeResult); }
};

