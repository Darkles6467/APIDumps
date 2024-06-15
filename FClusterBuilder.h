#pragma once

#include "BaseDeclarations.h"
struct FClusterBuilder
{
	char __padding[0x90L];
	int& NumField() { return *GetNativePointerField<int*>(this, "FClusterBuilder.Num"); }
	FBox& InstBoxField() { return *GetNativePointerField<FBox*>(this, "FClusterBuilder.InstBox"); }
	int& BranchingFactorField() { return *GetNativePointerField<int*>(this, "FClusterBuilder.BranchingFactor"); }
	int& InternalNodeBranchingFactorField() { return *GetNativePointerField<int*>(this, "FClusterBuilder.InternalNodeBranchingFactor"); }
	int& OcclusionLayerTargetField() { return *GetNativePointerField<int*>(this, "FClusterBuilder.OcclusionLayerTarget"); }
	int& MaxInstancesPerLeafField() { return *GetNativePointerField<int*>(this, "FClusterBuilder.MaxInstancesPerLeaf"); }
	int& NumRootsField() { return *GetNativePointerField<int*>(this, "FClusterBuilder.NumRoots"); }
	TArray<int>& SortIndexField() { return *GetNativePointerField<TArray<int>*>(this, "FClusterBuilder.SortIndex"); }
	TArray<FVector>& SortPointsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FClusterBuilder.SortPoints"); }
	TArray<FMatrix>& TransformsField() { return *GetNativePointerField<TArray<FMatrix>*>(this, "FClusterBuilder.Transforms"); }
	TArray<FClusterBuilder::FRunPair>& ClustersField() { return *GetNativePointerField<TArray<FClusterBuilder::FRunPair>*>(this, "FClusterBuilder.Clusters"); }
	TArray<FClusterBuilder::FSortPair>& SortPairsField() { return *GetNativePointerField<TArray<FClusterBuilder::FSortPair>*>(this, "FClusterBuilder.SortPairs"); }
	FClusterTree * ResultField() { return GetNativePointerField<FClusterTree *>(this, "FClusterBuilder.Result"); }

	// Functions

	void Build() { NativeCall<void>(this, "FClusterBuilder.Build"); }
	void Split(int InNum) { NativeCall<void, int>(this, "FClusterBuilder.Split", InNum); }
	void Split(int Start, int End) { NativeCall<void, int, int>(this, "FClusterBuilder.Split", Start, End); }
};

