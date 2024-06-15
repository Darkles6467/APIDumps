#pragma once

#include "BaseDeclarations.h"
struct FMaterialTriangleVertex
{
	char __padding[0x20L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FMaterialTriangleVertex.Position"); }
	FPackedNormal& TangentXField() { return *GetNativePointerField<FPackedNormal*>(this, "FMaterialTriangleVertex.TangentX"); }
	FPackedNormal& TangentZField() { return *GetNativePointerField<FPackedNormal*>(this, "FMaterialTriangleVertex.TangentZ"); }
	unsigned int& ColorField() { return *GetNativePointerField<unsigned int*>(this, "FMaterialTriangleVertex.Color"); }
	float& UField() { return *GetNativePointerField<float*>(this, "FMaterialTriangleVertex.U"); }
	float& VField() { return *GetNativePointerField<float*>(this, "FMaterialTriangleVertex.V"); }

	// Functions

	void Initialize(float InX, float InY, float InU, float InV) { NativeCall<void, float, float, float, float>(this, "FMaterialTriangleVertex.Initialize", InX, InY, InU, InV); }
};

