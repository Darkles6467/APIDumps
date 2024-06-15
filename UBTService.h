#pragma once

#include "BaseDeclarations.h"
#include "UBTAuxiliaryNode.h"

struct UBTService : UBTAuxiliaryNode
{
	char __padding[0x10L];
	float& IntervalField() { return *GetNativePointerField<float*>(this, "UBTService.Interval"); }
	float& RandomDeviationField() { return *GetNativePointerField<float*>(this, "UBTService.RandomDeviation"); }

	// Functions

	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTService.GetStaticDescription", result); }
	void OnSearchStart(FBehaviorTreeSearchData * SearchData) { NativeCall<void, FBehaviorTreeSearchData *>(this, "UBTService.OnSearchStart", SearchData); }
	void TickNode(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTService.TickNode", OwnerComp, NodeMemory, DeltaSeconds); }
};

