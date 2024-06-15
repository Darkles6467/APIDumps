#pragma once

#include "BaseDeclarations.h"
#include "UBTService.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTService_BlueprintBase : UBTService
{
	char __padding[0x18L];

	// Functions

	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTService_BlueprintBase.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTService_BlueprintBase.GetStaticDescription", result); }
	bool IsServiceActive() { return NativeCall<bool>(this, "UBTService_BlueprintBase.IsServiceActive"); }
	void OnBecomeRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTService_BlueprintBase.OnBecomeRelevant", OwnerComp, NodeMemory); }
	void OnCeaseRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTService_BlueprintBase.OnCeaseRelevant", OwnerComp, NodeMemory); }
	void OnSearchStart(FBehaviorTreeSearchData * SearchData) { NativeCall<void, FBehaviorTreeSearchData *>(this, "UBTService_BlueprintBase.OnSearchStart", SearchData); }
	void PostInitProperties() { NativeCall<void>(this, "UBTService_BlueprintBase.PostInitProperties"); }
	void ResetInterval(UBehaviorTreeComponent * OwnerComp) { NativeCall<void, UBehaviorTreeComponent *>(this, "UBTService_BlueprintBase.ResetInterval", OwnerComp); }
	void TickNode(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTService_BlueprintBase.TickNode", OwnerComp, NodeMemory, DeltaSeconds); }
	void ReceiveActivation(AActor * OwnerActor) { NativeCall<void, AActor *>(this, "UBTService_BlueprintBase.ReceiveActivation", OwnerActor); }
	void ReceiveDeactivation(AActor * OwnerActor) { NativeCall<void, AActor *>(this, "UBTService_BlueprintBase.ReceiveDeactivation", OwnerActor); }
	void ReceiveSearchStart(AActor * OwnerActor) { NativeCall<void, AActor *>(this, "UBTService_BlueprintBase.ReceiveSearchStart", OwnerActor); }
};

