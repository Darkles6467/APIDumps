#pragma once

#include "BaseDeclarations.h"
struct FModuleLocationVertSurfaceInstancePayload
{
	char __padding[0x40L];
	int& VertIndexField() { return *GetNativePointerField<int*>(this, "FModuleLocationVertSurfaceInstancePayload.VertIndex"); }
	int& NumValidAssociatedBoneIndicesField() { return *GetNativePointerField<int*>(this, "FModuleLocationVertSurfaceInstancePayload.NumValidAssociatedBoneIndices"); }
	TPreallocatedArrayProxy<int>& ValidAssociatedBoneIndicesField() { return *GetNativePointerField<TPreallocatedArrayProxy<int>*>(this, "FModuleLocationVertSurfaceInstancePayload.ValidAssociatedBoneIndices"); }
	TPreallocatedArrayProxy<FVector>& PrevFrameBonePositionsField() { return *GetNativePointerField<TPreallocatedArrayProxy<FVector>*>(this, "FModuleLocationVertSurfaceInstancePayload.PrevFrameBonePositions"); }
	TPreallocatedArrayProxy<FVector>& BoneVelocitiesField() { return *GetNativePointerField<TPreallocatedArrayProxy<FVector>*>(this, "FModuleLocationVertSurfaceInstancePayload.BoneVelocities"); }
};

