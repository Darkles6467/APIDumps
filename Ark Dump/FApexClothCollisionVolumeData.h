#pragma once

#include "BaseDeclarations.h"
struct FApexClothCollisionVolumeData
{
	char __padding[0x80L];
	int& BoneIndexField() { return *GetNativePointerField<int*>(this, "FApexClothCollisionVolumeData.BoneIndex"); }
	unsigned int& ConvexVerticesCountField() { return *GetNativePointerField<unsigned int*>(this, "FApexClothCollisionVolumeData.ConvexVerticesCount"); }
	unsigned int& ConvexVerticesStartField() { return *GetNativePointerField<unsigned int*>(this, "FApexClothCollisionVolumeData.ConvexVerticesStart"); }
	TArray<FVector>& BoneVerticesField() { return *GetNativePointerField<TArray<FVector>*>(this, "FApexClothCollisionVolumeData.BoneVertices"); }
	float& CapsuleRadiusField() { return *GetNativePointerField<float*>(this, "FApexClothCollisionVolumeData.CapsuleRadius"); }
	float& CapsuleHeightField() { return *GetNativePointerField<float*>(this, "FApexClothCollisionVolumeData.CapsuleHeight"); }
	FMatrix& LocalPoseField() { return *GetNativePointerField<FMatrix*>(this, "FApexClothCollisionVolumeData.LocalPose"); }
};

