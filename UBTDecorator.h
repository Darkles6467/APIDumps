#pragma once

#include "BaseDeclarations.h"
#include "UBTAuxiliaryNode.h"

struct UBTDecorator : UBTAuxiliaryNode
{
	char __padding[0x8L];
	TEnumAsByte<enum EBTFlowAbortMode::Type>& FlowAbortModeField() { return *GetNativePointerField<TEnumAsByte<enum EBTFlowAbortMode::Type>*>(this, "UBTDecorator.FlowAbortMode"); }
	char& ChildIndexField() { return *GetNativePointerField<char*>(this, "UBTDecorator.ChildIndex"); }

	// Functions

	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTDecorator.GetStaticDescription", result); }
	bool WrappedCanExecute(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<bool, UBehaviorTreeComponent *, char *>(this, "UBTDecorator.WrappedCanExecute", OwnerComp, NodeMemory); }
};

