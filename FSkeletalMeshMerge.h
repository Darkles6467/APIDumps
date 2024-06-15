#pragma once

#include "BaseDeclarations.h"
struct FSkeletalMeshMerge
{
	char __padding[0xb0L];
	int& StripTopLODsField() { return *GetNativePointerField<int*>(this, "FSkeletalMeshMerge.StripTopLODs"); }
	TArray<FSkeletalMeshMerge::FMergeMeshInfo>& SrcMeshInfoField() { return *GetNativePointerField<TArray<FSkeletalMeshMerge::FMergeMeshInfo>*>(this, "FSkeletalMeshMerge.SrcMeshInfo"); }
	FReferenceSkeleton& NewRefSkeletonField() { return *GetNativePointerField<FReferenceSkeleton*>(this, "FSkeletalMeshMerge.NewRefSkeleton"); }
	const TArray<FSkelMeshMergeSectionMapping> * ForceSectionMappingField() { return GetNativePointerField<const TArray<FSkelMeshMergeSectionMapping> *>(this, "FSkeletalMeshMerge.ForceSectionMapping"); }
	TArray<int>& MaterialIdsField() { return *GetNativePointerField<TArray<int>*>(this, "FSkeletalMeshMerge.MaterialIds"); }
};

