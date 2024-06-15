#pragma once

#include "BaseDeclarations.h"
#include "UBTTask_BlackboardBase.h"
#include "UBTTaskNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase
{
	char __padding[0x38L];
	float& PrecisionField() { return *GetNativePointerField<float*>(this, "UBTTask_RotateToFaceBBEntry.Precision"); }
	FBlackboardKeySelector& PrecisionKeyField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTTask_RotateToFaceBBEntry.PrecisionKey"); }
	float& PrecisionDotField() { return *GetNativePointerField<float*>(this, "UBTTask_RotateToFaceBBEntry.PrecisionDot"); }

	// Functions

	EBTNodeResult::Type AbortTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_RotateToFaceBBEntry.AbortTask", OwnerComp, NodeMemory); }
	void CleanUp(AAIController * AIController, char * NodeMemory) { NativeCall<void, AAIController *, char *>(this, "UBTTask_RotateToFaceBBEntry.CleanUp", AIController, NodeMemory); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTTask_RotateToFaceBBEntry.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_RotateToFaceBBEntry.ExecuteTask", OwnerComp, NodeMemory); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTTask_RotateToFaceBBEntry.GetStaticDescription", result); }
	void InitializeFromAsset(UBehaviorTree * Asset) { NativeCall<void, UBehaviorTree *>(this, "UBTTask_RotateToFaceBBEntry.InitializeFromAsset", Asset); }
	void PostInitProperties() { NativeCall<void>(this, "UBTTask_RotateToFaceBBEntry.PostInitProperties"); }
	void TickTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTTask_RotateToFaceBBEntry.TickTask", OwnerComp, NodeMemory, DeltaSeconds); }
};

