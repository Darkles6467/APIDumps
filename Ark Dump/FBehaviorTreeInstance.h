#pragma once

#include "BaseDeclarations.h"
struct FBehaviorTreeInstance
{
	char __padding[0x48L];
	TArray<FBehaviorTreeParallelTask>& ParallelTasksField() { return *GetNativePointerField<TArray<FBehaviorTreeParallelTask>*>(this, "FBehaviorTreeInstance.ParallelTasks"); }
	TArray<unsigned char>& InstanceMemoryField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FBehaviorTreeInstance.InstanceMemory"); }
	char& InstanceIdIndexField() { return *GetNativePointerField<char*>(this, "FBehaviorTreeInstance.InstanceIdIndex"); }
	TEnumAsByte<enum EBTActiveNode::Type>& ActiveNodeTypeField() { return *GetNativePointerField<TEnumAsByte<enum EBTActiveNode::Type>*>(this, "FBehaviorTreeInstance.ActiveNodeType"); }

	// Functions

	FBehaviorTreeInstance * operator=(const FBehaviorTreeInstance * __that) { return NativeCall<FBehaviorTreeInstance *, const FBehaviorTreeInstance *>(this, "FBehaviorTreeInstance.operator=", __that); }
	void Cleanup(UBehaviorTreeComponent * OwnerComp, EBTMemoryClear::Type CleanupType) { NativeCall<void, UBehaviorTreeComponent *, EBTMemoryClear::Type>(this, "FBehaviorTreeInstance.Cleanup", OwnerComp, CleanupType); }
	void CleanupNodes(UBehaviorTreeComponent * OwnerComp, UBTCompositeNode * Node, EBTMemoryClear::Type CleanupType) { NativeCall<void, UBehaviorTreeComponent *, UBTCompositeNode *, EBTMemoryClear::Type>(this, "FBehaviorTreeInstance.CleanupNodes", OwnerComp, Node, CleanupType); }
	void Initialize(UBehaviorTreeComponent * OwnerComp, UBTCompositeNode * Node, int * InstancedIndex, EBTMemoryInit::Type InitType) { NativeCall<void, UBehaviorTreeComponent *, UBTCompositeNode *, int *, EBTMemoryInit::Type>(this, "FBehaviorTreeInstance.Initialize", OwnerComp, Node, InstancedIndex, InitType); }
	void InjectNodes(UBehaviorTreeComponent * OwnerComp, UBTCompositeNode * Node, int * InstancedIndex) { NativeCall<void, UBehaviorTreeComponent *, UBTCompositeNode *, int *>(this, "FBehaviorTreeInstance.InjectNodes", OwnerComp, Node, InstancedIndex); }
};

