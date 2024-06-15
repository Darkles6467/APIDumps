#pragma once

#include "BaseDeclarations.h"
struct FRecastDebugPathfindingNode
{
	char __padding[0x38L];
	unsigned __int64& PolyRefField() { return *GetNativePointerField<unsigned __int64*>(this, "FRecastDebugPathfindingNode.PolyRef"); }
	unsigned __int64& ParentRefField() { return *GetNativePointerField<unsigned __int64*>(this, "FRecastDebugPathfindingNode.ParentRef"); }
	float& CostField() { return *GetNativePointerField<float*>(this, "FRecastDebugPathfindingNode.Cost"); }
	float& TotalCostField() { return *GetNativePointerField<float*>(this, "FRecastDebugPathfindingNode.TotalCost"); }
	FVector& NodePosField() { return *GetNativePointerField<FVector*>(this, "FRecastDebugPathfindingNode.NodePos"); }
	TArray<FVector>& VertsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FRecastDebugPathfindingNode.Verts"); }
};

