#pragma once

#include "BaseDeclarations.h"
struct FCylinderNavAreaData
{
	char __padding[0x14L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "FCylinderNavAreaData.Origin"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "FCylinderNavAreaData.Radius"); }
	float& HeightField() { return *GetNativePointerField<float*>(this, "FCylinderNavAreaData.Height"); }
};

