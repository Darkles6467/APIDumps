#pragma once

#include "BaseDeclarations.h"
#include "UBTDecorator.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTDecorator_BlueprintBase : UBTDecorator
{
	char __padding[0x30L];
	TArray<FName>& ObservedKeyNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UBTDecorator_BlueprintBase.ObservedKeyNames"); }

	// Functions

	bool CalculateRawConditionValue(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<bool, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_BlueprintBase.CalculateRawConditionValue", OwnerComp, NodeMemory); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTDecorator_BlueprintBase.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	void FinishConditionCheck(bool bAllowExecution) { NativeCall<void, bool>(this, "UBTDecorator_BlueprintBase.FinishConditionCheck", bAllowExecution); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTDecorator_BlueprintBase.GetStaticDescription", result); }
	void InitializeProperties() { NativeCall<void>(this, "UBTDecorator_BlueprintBase.InitializeProperties"); }
	bool IsDecoratorExecutionActive() { return NativeCall<bool>(this, "UBTDecorator_BlueprintBase.IsDecoratorExecutionActive"); }
	void OnBecomeRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_BlueprintBase.OnBecomeRelevant", OwnerComp, NodeMemory); }
	void OnBlackboardChange(const UBlackboardComponent * Blackboard, char ChangedKeyID) { NativeCall<void, const UBlackboardComponent *, char>(this, "UBTDecorator_BlueprintBase.OnBlackboardChange", Blackboard, ChangedKeyID); }
	void OnCeaseRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_BlueprintBase.OnCeaseRelevant", OwnerComp, NodeMemory); }
	void OnInstanceDestroyed(UBehaviorTreeComponent * OwnerComp) { NativeCall<void, UBehaviorTreeComponent *>(this, "UBTDecorator_BlueprintBase.OnInstanceDestroyed", OwnerComp); }
	void OnNodeActivation(FBehaviorTreeSearchData * SearchData) { NativeCall<void, FBehaviorTreeSearchData *>(this, "UBTDecorator_BlueprintBase.OnNodeActivation", SearchData); }
	void OnNodeDeactivation(FBehaviorTreeSearchData * SearchData, EBTNodeResult::Type NodeResult) { NativeCall<void, FBehaviorTreeSearchData *, EBTNodeResult::Type>(this, "UBTDecorator_BlueprintBase.OnNodeDeactivation", SearchData, NodeResult); }
	void PostInitProperties() { NativeCall<void>(this, "UBTDecorator_BlueprintBase.PostInitProperties"); }
	void TickNode(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTDecorator_BlueprintBase.TickNode", OwnerComp, NodeMemory, DeltaSeconds); }
	void ReceiveConditionCheck(AActor * OwnerActor) { NativeCall<void, AActor *>(this, "UBTDecorator_BlueprintBase.ReceiveConditionCheck", OwnerActor); }
	void ReceiveExecutionFinish(AActor * OwnerActor, EBTNodeResult::Type NodeResult) { NativeCall<void, AActor *, EBTNodeResult::Type>(this, "UBTDecorator_BlueprintBase.ReceiveExecutionFinish", OwnerActor, NodeResult); }
	void ReceiveExecutionStart(AActor * OwnerActor) { NativeCall<void, AActor *>(this, "UBTDecorator_BlueprintBase.ReceiveExecutionStart", OwnerActor); }
	void ReceiveObserverActivated(AActor * OwnerActor) { NativeCall<void, AActor *>(this, "UBTDecorator_BlueprintBase.ReceiveObserverActivated", OwnerActor); }
	void ReceiveObserverDeactivated(AActor * OwnerActor) { NativeCall<void, AActor *>(this, "UBTDecorator_BlueprintBase.ReceiveObserverDeactivated", OwnerActor); }
	void ReceiveTick(AActor * OwnerActor, float DeltaSeconds) { NativeCall<void, AActor *, float>(this, "UBTDecorator_BlueprintBase.ReceiveTick", OwnerActor, DeltaSeconds); }
};

