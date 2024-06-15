#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBehaviorTreeManager : UObject
{
	char __padding[0x28L];
	int& MaxDebuggerStepsField() { return *GetNativePointerField<int*>(this, "UBehaviorTreeManager.MaxDebuggerSteps"); }
	TArray<FBehaviorTreeTemplateInfo>& LoadedTemplatesField() { return *GetNativePointerField<TArray<FBehaviorTreeTemplateInfo>*>(this, "UBehaviorTreeManager.LoadedTemplates"); }
	TArray<UBehaviorTreeComponent *>& ActiveComponentsField() { return *GetNativePointerField<TArray<UBehaviorTreeComponent *>*>(this, "UBehaviorTreeManager.ActiveComponents"); }

	// Functions

	void FinishDestroy() { NativeCall<void>(this, "UBehaviorTreeManager.FinishDestroy"); }
	static void InitializeMemoryHelper(const TArray<UBTDecorator *> * Nodes, TArray<unsigned short> * MemoryOffsets, int * MemorySize) { NativeCall<void, const TArray<UBTDecorator *> *, TArray<unsigned short> *, int *>(nullptr, "UBehaviorTreeManager.InitializeMemoryHelper", Nodes, MemoryOffsets, MemorySize); }
	bool LoadTree(UBehaviorTree * Asset, UBTCompositeNode ** Root, unsigned __int16 * InstanceMemorySize, FString * Category) { return NativeCall<bool, UBehaviorTree *, UBTCompositeNode **, unsigned __int16 *, FString *>(this, "UBehaviorTreeManager.LoadTree", Asset, Root, InstanceMemorySize, Category); }
};

