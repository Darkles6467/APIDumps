#pragma once

#include "BaseDeclarations.h"
struct FExpandedUniqueOctreeNode
{
	char __padding[0x4cL];
	FBox& CurrentBoxField() { return *GetNativePointerField<FBox*>(this, "FExpandedUniqueOctreeNode.CurrentBox"); }
	FieldArray<int, 8> ChildrenField() { return {this, "FExpandedUniqueOctreeNode.Children"}; }
	char& bIsLeafField() { return *GetNativePointerField<char*>(this, "FExpandedUniqueOctreeNode.bIsLeaf"); }
	int& InstanceStartField() { return *GetNativePointerField<int*>(this, "FExpandedUniqueOctreeNode.InstanceStart"); }
	int& InstanceEndField() { return *GetNativePointerField<int*>(this, "FExpandedUniqueOctreeNode.InstanceEnd"); }
	int& OcclusionIndexField() { return *GetNativePointerField<int*>(this, "FExpandedUniqueOctreeNode.OcclusionIndex"); }

	// Functions

};

struct FExpandedUniqueOctreeNodeBuilder : FExpandedUniqueOctreeNode
{
	char __padding[0x64L];
	TArray<int>& CollidedBoxesField() { return *GetNativePointerField<TArray<int>*>(this, "FExpandedUniqueOctreeNodeBuilder.CollidedBoxes"); }
	TArray<int>& IndicesClaimedField() { return *GetNativePointerField<TArray<int>*>(this, "FExpandedUniqueOctreeNodeBuilder.IndicesClaimed"); }
};

