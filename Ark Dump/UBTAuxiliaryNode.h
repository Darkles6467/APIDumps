#pragma once

#include "BaseDeclarations.h"
#include "UBTNode.h"

struct UBTAuxiliaryNode : UBTNode
{
	char __padding[0x8L];

	// Functions

	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTAuxiliaryNode.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	unsigned __int16 GetSpecialMemorySize() { return NativeCall<unsigned __int16>(this, "UBTAuxiliaryNode.GetSpecialMemorySize"); }
	void SetNextTickTime(char * NodeMemory, float RemainingTime) { NativeCall<void, char *, float>(this, "UBTAuxiliaryNode.SetNextTickTime", NodeMemory, RemainingTime); }
	void WrappedTickNode(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTAuxiliaryNode.WrappedTickNode", OwnerComp, NodeMemory, DeltaSeconds); }
};

