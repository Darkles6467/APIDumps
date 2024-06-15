#pragma once

#include "BaseDeclarations.h"
struct FMaterialSpriteVertex
{
	char __padding[0x20L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FMaterialSpriteVertex.Position"); }
	FPackedNormal& TangentXField() { return *GetNativePointerField<FPackedNormal*>(this, "FMaterialSpriteVertex.TangentX"); }
	FPackedNormal& TangentZField() { return *GetNativePointerField<FPackedNormal*>(this, "FMaterialSpriteVertex.TangentZ"); }
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FMaterialSpriteVertex.Color"); }
	FVector2D& TexCoordsField() { return *GetNativePointerField<FVector2D*>(this, "FMaterialSpriteVertex.TexCoords"); }
};

