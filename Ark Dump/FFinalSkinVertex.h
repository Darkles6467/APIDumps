#pragma once

#include "BaseDeclarations.h"
struct FFinalSkinVertex
{
	char __padding[0x1cL];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FFinalSkinVertex.Position"); }
	FPackedNormal& TangentXField() { return *GetNativePointerField<FPackedNormal*>(this, "FFinalSkinVertex.TangentX"); }
	FPackedNormal& TangentZField() { return *GetNativePointerField<FPackedNormal*>(this, "FFinalSkinVertex.TangentZ"); }
	float& UField() { return *GetNativePointerField<float*>(this, "FFinalSkinVertex.U"); }
	float& VField() { return *GetNativePointerField<float*>(this, "FFinalSkinVertex.V"); }
};

