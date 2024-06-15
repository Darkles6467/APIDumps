#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveAndInstance
{
	char __padding[0x20L];
	FVector4& BoundingSphereField() { return *GetNativePointerField<FVector4*>(this, "FPrimitiveAndInstance.BoundingSphere"); }
	FPrimitiveSceneInfo * PrimitiveField() { return GetNativePointerField<FPrimitiveSceneInfo *>(this, "FPrimitiveAndInstance.Primitive"); }
	int& InstanceIndexField() { return *GetNativePointerField<int*>(this, "FPrimitiveAndInstance.InstanceIndex"); }
};

