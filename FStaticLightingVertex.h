#pragma once

#include "BaseDeclarations.h"
struct FStaticLightingVertex
{
	char __padding[0x70L];
	FVector& WorldPositionField() { return *GetNativePointerField<FVector*>(this, "FStaticLightingVertex.WorldPosition"); }
	FVector& WorldTangentXField() { return *GetNativePointerField<FVector*>(this, "FStaticLightingVertex.WorldTangentX"); }
	FVector& WorldTangentYField() { return *GetNativePointerField<FVector*>(this, "FStaticLightingVertex.WorldTangentY"); }
	FVector& WorldTangentZField() { return *GetNativePointerField<FVector*>(this, "FStaticLightingVertex.WorldTangentZ"); }
	FieldArray<FVector2D[8], 28> TextureCoordinatesField() { return {this, "FStaticLightingVertex.TextureCoordinates"}; }
};

