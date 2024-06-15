#pragma once

#include "BaseDeclarations.h"
struct FMeshTraceResult
{
	char __padding[0x14L];
	FVector& HitPointField() { return *GetNativePointerField<FVector*>(this, "FMeshTraceResult.HitPoint"); }
	FVector2D& UVField() { return *GetNativePointerField<FVector2D*>(this, "FMeshTraceResult.UV"); }
};

