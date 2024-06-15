#pragma once

#include "BaseDeclarations.h"
struct FVert
{
	char __padding[0x18L];
	int& pVertexField() { return *GetNativePointerField<int*>(this, "FVert.pVertex"); }
	int& iSideField() { return *GetNativePointerField<int*>(this, "FVert.iSide"); }
	FVector2D& ShadowTexCoordField() { return *GetNativePointerField<FVector2D*>(this, "FVert.ShadowTexCoord"); }
	FVector2D& BackfaceShadowTexCoordField() { return *GetNativePointerField<FVector2D*>(this, "FVert.BackfaceShadowTexCoord"); }
};

