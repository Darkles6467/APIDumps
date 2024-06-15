#pragma once

#include "BaseDeclarations.h"
struct FMaterialTileVertex
{
	char __padding[0x20L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FMaterialTileVertex.Position"); }
	FPackedNormal& TangentXField() { return *GetNativePointerField<FPackedNormal*>(this, "FMaterialTileVertex.TangentX"); }
	FPackedNormal& TangentZField() { return *GetNativePointerField<FPackedNormal*>(this, "FMaterialTileVertex.TangentZ"); }
	unsigned int& ColorField() { return *GetNativePointerField<unsigned int*>(this, "FMaterialTileVertex.Color"); }
	float& UField() { return *GetNativePointerField<float*>(this, "FMaterialTileVertex.U"); }
	float& VField() { return *GetNativePointerField<float*>(this, "FMaterialTileVertex.V"); }
};

