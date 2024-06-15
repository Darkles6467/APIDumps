#pragma once

#include "BaseDeclarations.h"
struct FApexClothBoneSphereData
{
	char __padding[0x14L];
	int& BoneIndexField() { return *GetNativePointerField<int*>(this, "FApexClothBoneSphereData.BoneIndex"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "FApexClothBoneSphereData.Radius"); }
	FVector& LocalPosField() { return *GetNativePointerField<FVector*>(this, "FApexClothBoneSphereData.LocalPos"); }
};

