#pragma once

#include "BaseDeclarations.h"
#include "FSkeletalMeshObject.h"
#include "FDeferredCleanupInterface.h"

struct FSkeletalMeshObjectCPUSkin : FSkeletalMeshObject
{
	char __padding[0x48L];
	int& CachedVertexLODField() { return *GetNativePointerField<int*>(this, "FSkeletalMeshObjectCPUSkin.CachedVertexLOD"); }
	TArray<FFinalSkinVertex>& CachedFinalVerticesField() { return *GetNativePointerField<TArray<FFinalSkinVertex>*>(this, "FSkeletalMeshObjectCPUSkin.CachedFinalVertices"); }
	TArray<int>& BonesOfInterestField() { return *GetNativePointerField<TArray<int>*>(this, "FSkeletalMeshObjectCPUSkin.BonesOfInterest"); }
	bool& bRenderBoneWeightField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshObjectCPUSkin.bRenderBoneWeight"); }
};

