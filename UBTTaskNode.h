#pragma once

#include "BaseDeclarations.h"
#include "UBTNode.h"

struct UBTTaskNode : UBTNode
{
	char __padding[0x8L];

	// Functions

	void FinishLatentTask(UBehaviorTreeComponent * OwnerComp, EBTNodeResult::Type TaskResult) { NativeCall<void, UBehaviorTreeComponent *, EBTNodeResult::Type>(this, "UBTTaskNode.FinishLatentTask", OwnerComp, TaskResult); }
	void OnMessage(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, FName Message, int RequestID, bool bSuccess) { NativeCall<void, UBehaviorTreeComponent *, char *, FName, int, bool>(this, "UBTTaskNode.OnMessage", OwnerComp, NodeMemory, Message, RequestID, bSuccess); }
	void ReceivedMessage(UBrainComponent * BrainComp, const FAIMessage * Message) { NativeCall<void, UBrainComponent *, const FAIMessage *>(this, "UBTTaskNode.ReceivedMessage", BrainComp, Message); }
	void WaitForMessage(UBehaviorTreeComponent * OwnerComp, FName MessageType) { NativeCall<void, UBehaviorTreeComponent *, FName>(this, "UBTTaskNode.WaitForMessage", OwnerComp, MessageType); }
	void WrappedTickTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTTaskNode.WrappedTickTask", OwnerComp, NodeMemory, DeltaSeconds); }
};

