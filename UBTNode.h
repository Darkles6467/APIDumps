#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UBTNode : UObject
{
	char __padding[0x28L];
	FString& NodeNameField() { return *GetNativePointerField<FString*>(this, "UBTNode.NodeName"); }
	UBehaviorTree * TreeAssetField() { return GetNativePointerField<UBehaviorTree *>(this, "UBTNode.TreeAsset"); }
	unsigned __int16& ExecutionIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "UBTNode.ExecutionIndex"); }
	unsigned __int16& MemoryOffsetField() { return *GetNativePointerField<unsigned __int16*>(this, "UBTNode.MemoryOffset"); }
	char& TreeDepthField() { return *GetNativePointerField<char*>(this, "UBTNode.TreeDepth"); }

	// Functions

	FString * GetNodeName(FString * result) { return NativeCall<FString *, FString *>(this, "UBTNode.GetNodeName", result); }
	FString * GetRuntimeDescription(FString * result, const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity) { return NativeCall<FString *, FString *, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type>(this, "UBTNode.GetRuntimeDescription", result, OwnerComp, NodeMemory, Verbosity); }
	unsigned __int16 GetSpecialMemorySize() { return NativeCall<unsigned __int16>(this, "UBTNode.GetSpecialMemorySize"); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTNode.GetStaticDescription", result); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UBTNode.GetWorld"); }
	void InitializeFromAsset(FContextSupplier * InSupplier) { NativeCall<void, FContextSupplier *>(this, "UBTNode.InitializeFromAsset", InSupplier); }
	void InitializeInSubtree(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, int * NextInstancedIndex, EBTMemoryInit::Type InitType) { NativeCall<void, UBehaviorTreeComponent *, char *, int *, EBTMemoryInit::Type>(this, "UBTNode.InitializeInSubtree", OwnerComp, NodeMemory, NextInstancedIndex, InitType); }
};

