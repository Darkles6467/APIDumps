#pragma once

#include "BaseDeclarations.h"
struct FModelVertex
{
	char __padding[0x24L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FModelVertex.Position"); }
	FPackedNormal& TangentXField() { return *GetNativePointerField<FPackedNormal*>(this, "FModelVertex.TangentX"); }
	FPackedNormal& TangentZField() { return *GetNativePointerField<FPackedNormal*>(this, "FModelVertex.TangentZ"); }
	FVector2D& TexCoordField() { return *GetNativePointerField<FVector2D*>(this, "FModelVertex.TexCoord"); }
	FVector2D& ShadowTexCoordField() { return *GetNativePointerField<FVector2D*>(this, "FModelVertex.ShadowTexCoord"); }
};

