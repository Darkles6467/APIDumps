#pragma once

#include "BaseDeclarations.h"
#include "UBTService_BlackboardBase.h"
#include "UBTService.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTService_DefaultFocus : UBTService_BlackboardBase
{

	// Functions

	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTService_DefaultFocus.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTService_DefaultFocus.GetStaticDescription", result); }
	void OnBecomeRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTService_DefaultFocus.OnBecomeRelevant", OwnerComp, NodeMemory); }
	void OnCeaseRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTService_DefaultFocus.OnCeaseRelevant", OwnerComp, NodeMemory); }
};

