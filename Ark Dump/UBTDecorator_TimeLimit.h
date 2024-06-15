#pragma once

#include "BaseDeclarations.h"
#include "UBTDecorator.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTDecorator_TimeLimit : UBTDecorator
{
	char __padding[0x30L];
	float& TimeLimitField() { return *GetNativePointerField<float*>(this, "UBTDecorator_TimeLimit.TimeLimit"); }
	FBlackboardKeySelector& TimeLimitKeyField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_TimeLimit.TimeLimitKey"); }

	// Functions

	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTDecorator_TimeLimit.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTDecorator_TimeLimit.GetStaticDescription", result); }
	void OnBecomeRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_TimeLimit.OnBecomeRelevant", OwnerComp, NodeMemory); }
	void TickNode(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTDecorator_TimeLimit.TickNode", OwnerComp, NodeMemory, DeltaSeconds); }
};

