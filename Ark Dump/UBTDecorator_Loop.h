#pragma once

#include "BaseDeclarations.h"
#include "UBTDecorator.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTDecorator_Loop : UBTDecorator
{
	char __padding[0x8L];
	int& NumLoopsField() { return *GetNativePointerField<int*>(this, "UBTDecorator_Loop.NumLoops"); }
	bool& bInfiniteLoopField() { return *GetNativePointerField<bool*>(this, "UBTDecorator_Loop.bInfiniteLoop"); }

	// Functions

	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTDecorator_Loop.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTDecorator_Loop.GetStaticDescription", result); }
	void OnNodeActivation(FBehaviorTreeSearchData * SearchData) { NativeCall<void, FBehaviorTreeSearchData *>(this, "UBTDecorator_Loop.OnNodeActivation", SearchData); }
};

