#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"
#include "FExpandedUniqueOctreeNodeBuilder.h"
#include "FBox.h"

struct FExpandedUniqueOctreeBuilder
{
	char __padding[0x50L];
	FBox& InstBoxField() { return *GetNativePointerField<FBox*>(this, "FExpandedUniqueOctreeBuilder.InstBox"); }
	int& MaxInstancesPerLeafField() { return *GetNativePointerField<int*>(this, "FExpandedUniqueOctreeBuilder.MaxInstancesPerLeaf"); }
	TArray<FMatrix>& TransformsField() { return *GetNativePointerField<TArray<FMatrix>*>(this, "FExpandedUniqueOctreeBuilder.Transforms"); }
	TArray<int>& InstanceReorderTableField() { return *GetNativePointerField<TArray<int>*>(this, "FExpandedUniqueOctreeBuilder.InstanceReorderTable"); }

	// Functions

	void Build() { NativeCall<void>(this, "FExpandedUniqueOctreeBuilder.Build"); }
	void BuildAsync(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FExpandedUniqueOctreeBuilder.BuildAsync", CurrentThread, MyCompletionGraphEvent); }
	FBox * GetAndPropogateRecursiveBounds(FBox * result, FExpandedUniqueOctreeNodeBuilder * CurrentNode) { return NativeCall<FBox *, FBox *, FExpandedUniqueOctreeNodeBuilder *>(this, "FExpandedUniqueOctreeBuilder.GetAndPropogateRecursiveBounds", result, CurrentNode); }
	void GroupLeaves(FExpandedUniqueOctreeNodeBuilder * CurrentNode, TArray<int> * InstanceReorderTable, int * Claimer) { NativeCall<void, FExpandedUniqueOctreeNodeBuilder *, TArray<int> *, int *>(this, "FExpandedUniqueOctreeBuilder.GroupLeaves", CurrentNode, InstanceReorderTable, Claimer); }
	void PopulateNodes(TArray<FExpandedUniqueOctreeNode> * OutNodes) { NativeCall<void, TArray<FExpandedUniqueOctreeNode> *>(this, "FExpandedUniqueOctreeBuilder.PopulateNodes", OutNodes); }
	bool RecursiveSubDivide(FExpandedUniqueOctreeNodeBuilder * InNode, TArray<int> * ParentCollidedBoxes, TArray<FBox> * InstanceBoxes, TBitArray<FDefaultBitArrayAllocator> * ClaimedBoxes, int Depth) { return NativeCall<bool, FExpandedUniqueOctreeNodeBuilder *, TArray<int> *, TArray<FBox> *, TBitArray<FDefaultBitArrayAllocator> *, int>(this, "FExpandedUniqueOctreeBuilder.RecursiveSubDivide", InNode, ParentCollidedBoxes, InstanceBoxes, ClaimedBoxes, Depth); }
};

