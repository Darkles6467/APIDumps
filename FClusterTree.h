#pragma once

#include "BaseDeclarations.h"
struct FClusterTree
{
	char __padding[0x38L];
	TArray<FClusterNode>& NodesField() { return *GetNativePointerField<TArray<FClusterNode>*>(this, "FClusterTree.Nodes"); }
	TArray<int>& SortedInstancesField() { return *GetNativePointerField<TArray<int>*>(this, "FClusterTree.SortedInstances"); }
	TArray<int>& InstanceReorderTableField() { return *GetNativePointerField<TArray<int>*>(this, "FClusterTree.InstanceReorderTable"); }
	int& OutOcclusionLayerNumField() { return *GetNativePointerField<int*>(this, "FClusterTree.OutOcclusionLayerNum"); }
};

