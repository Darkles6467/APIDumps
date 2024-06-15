#pragma once

#include "BaseDeclarations.h"
#include "UBTDecorator.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTDecorator_BlackboardBase : UBTDecorator
{
	char __padding[0x30L];
	FBlackboardKeySelector& BlackboardKeyField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_BlackboardBase.BlackboardKey"); }

	// Functions

	void InitializeFromAsset(UBehaviorTree * Asset) { NativeCall<void, UBehaviorTree *>(this, "UBTDecorator_BlackboardBase.InitializeFromAsset", Asset); }
	void OnBecomeRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_BlackboardBase.OnBecomeRelevant", OwnerComp, NodeMemory); }
	void OnBlackboardChange(const UBlackboardComponent * Blackboard, char ChangedKeyID) { NativeCall<void, const UBlackboardComponent *, char>(this, "UBTDecorator_BlackboardBase.OnBlackboardChange", Blackboard, ChangedKeyID); }
	void OnCeaseRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_BlackboardBase.OnCeaseRelevant", OwnerComp, NodeMemory); }
	void PostInitProperties() { NativeCall<void>(this, "UBTDecorator_BlackboardBase.PostInitProperties"); }
};

struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase
{
	char __padding[0x30L];
	int& IntValueField() { return *GetNativePointerField<int*>(this, "UBTDecorator_Blackboard.IntValue"); }
	float& FloatValueField() { return *GetNativePointerField<float*>(this, "UBTDecorator_Blackboard.FloatValue"); }
	FString& StringValueField() { return *GetNativePointerField<FString*>(this, "UBTDecorator_Blackboard.StringValue"); }
	FString& CachedDescriptionField() { return *GetNativePointerField<FString*>(this, "UBTDecorator_Blackboard.CachedDescription"); }
	char& OperationTypeField() { return *GetNativePointerField<char*>(this, "UBTDecorator_Blackboard.OperationType"); }
	TEnumAsByte<enum EBTBlackboardRestart::Type>& NotifyObserverField() { return *GetNativePointerField<TEnumAsByte<enum EBTBlackboardRestart::Type>*>(this, "UBTDecorator_Blackboard.NotifyObserver"); }

	// Functions

	bool CalculateRawConditionValue(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<bool, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_Blackboard.CalculateRawConditionValue", OwnerComp, NodeMemory); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTDecorator_Blackboard.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	bool EvaluateOnBlackboard(const UBlackboardComponent * BlackboardComp) { return NativeCall<bool, const UBlackboardComponent *>(this, "UBTDecorator_Blackboard.EvaluateOnBlackboard", BlackboardComp); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTDecorator_Blackboard.GetStaticDescription", result); }
	void OnBlackboardChange(const UBlackboardComponent * Blackboard, char ChangedKeyID) { NativeCall<void, const UBlackboardComponent *, char>(this, "UBTDecorator_Blackboard.OnBlackboardChange", Blackboard, ChangedKeyID); }
};

struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard
{

	// Functions

	void OnNodeDeactivation(FBehaviorTreeSearchData * SearchData, EBTNodeResult::Type NodeResult) { NativeCall<void, FBehaviorTreeSearchData *, EBTNodeResult::Type>(this, "UBTDecorator_ConditionalLoop.OnNodeDeactivation", SearchData, NodeResult); }
};

