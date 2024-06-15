#pragma once

#include "BaseDeclarations.h"
#include "UBTTaskNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTTask_RunBehavior : UBTTaskNode
{
	char __padding[0x18L];
	UBehaviorTree * BehaviorAssetField() { return GetNativePointerField<UBehaviorTree *>(this, "UBTTask_RunBehavior.BehaviorAsset"); }
	FString& ControllerPropertyField() { return *GetNativePointerField<FString*>(this, "UBTTask_RunBehavior.ControllerProperty"); }

	// Functions

	void CleanupMemory(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTMemoryClear::Type CleanupType) { NativeCall<void, UBehaviorTreeComponent *, char *, EBTMemoryClear::Type>(this, "UBTTask_RunBehavior.CleanupMemory", OwnerComp, NodeMemory, CleanupType); }
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_RunBehavior.ExecuteTask", OwnerComp, NodeMemory); }
	unsigned __int16 GetInstanceMemorySize() { return NativeCall<unsigned __int16>(this, "UBTTask_RunBehavior.GetInstanceMemorySize"); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTTask_RunBehavior.GetStaticDescription", result); }
	void InjectNodes(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, int * InstancedIndex) { NativeCall<void, UBehaviorTreeComponent *, char *, int *>(this, "UBTTask_RunBehavior.InjectNodes", OwnerComp, NodeMemory, InstancedIndex); }
};

