#pragma once

#include "BaseDeclarations.h"
struct FVertexAnimDelta
{
	char __padding[0x20L];
	FVector& PositionDeltaField() { return *GetNativePointerField<FVector*>(this, "FVertexAnimDelta.PositionDelta"); }
	FPackedNormal& TangentZDelta_DEPRECATEDField() { return *GetNativePointerField<FPackedNormal*>(this, "FVertexAnimDelta.TangentZDelta_DEPRECATED"); }
	FVector& TangentZDeltaField() { return *GetNativePointerField<FVector*>(this, "FVertexAnimDelta.TangentZDelta"); }
	unsigned int& SourceIdxField() { return *GetNativePointerField<unsigned int*>(this, "FVertexAnimDelta.SourceIdx"); }
};

