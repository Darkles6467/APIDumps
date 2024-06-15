#pragma once

#include "BaseDeclarations.h"
#include "UBTDecorator.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTDecorator_Cooldown : UBTDecorator
{
	char __padding[0x30L];
	float& CoolDownTimeField() { return *GetNativePointerField<float*>(this, "UBTDecorator_Cooldown.CoolDownTime"); }
	FBlackboardKeySelector& CoolDownTimeKeyField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_Cooldown.CoolDownTimeKey"); }

	// Functions

	bool CalculateRawConditionValue(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<bool, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_Cooldown.CalculateRawConditionValue", OwnerComp, NodeMemory); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTDecorator_Cooldown.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTDecorator_Cooldown.GetStaticDescription", result); }
	void InitializeMemory(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTMemoryInit::Type InitType) { NativeCall<void, UBehaviorTreeComponent *, char *, EBTMemoryInit::Type>(this, "UBTDecorator_Cooldown.InitializeMemory", OwnerComp, NodeMemory, InitType); }
	void OnNodeDeactivation(FBehaviorTreeSearchData * SearchData, EBTNodeResult::Type NodeResult) { NativeCall<void, FBehaviorTreeSearchData *, EBTNodeResult::Type>(this, "UBTDecorator_Cooldown.OnNodeDeactivation", SearchData, NodeResult); }
	void PostLoad() { NativeCall<void>(this, "UBTDecorator_Cooldown.PostLoad"); }
	void TickNode(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTDecorator_Cooldown.TickNode", OwnerComp, NodeMemory, DeltaSeconds); }
};

