#pragma once

#include "BaseDeclarations.h"
struct FBehaviorTreeDebuggerInstance
{
	char __padding[0x50L];
	UBehaviorTree * TreeAssetField() { return GetNativePointerField<UBehaviorTree *>(this, "FBehaviorTreeDebuggerInstance.TreeAsset"); }
	TArray<unsigned short>& ActivePathField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FBehaviorTreeDebuggerInstance.ActivePath"); }
	TArray<unsigned short>& AdditionalActiveNodesField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FBehaviorTreeDebuggerInstance.AdditionalActiveNodes"); }
	TArray<FBehaviorTreeDebuggerInstance::FNodeFlowData>& PathFromPreviousField() { return *GetNativePointerField<TArray<FBehaviorTreeDebuggerInstance::FNodeFlowData>*>(this, "FBehaviorTreeDebuggerInstance.PathFromPrevious"); }
	TArray<FString>& RuntimeDescField() { return *GetNativePointerField<TArray<FString>*>(this, "FBehaviorTreeDebuggerInstance.RuntimeDesc"); }
};

