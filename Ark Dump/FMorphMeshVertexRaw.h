#pragma once

#include "BaseDeclarations.h"
struct FMorphMeshVertexRaw
{
	char __padding[0x30L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FMorphMeshVertexRaw.Position"); }
	FVector& TanXField() { return *GetNativePointerField<FVector*>(this, "FMorphMeshVertexRaw.TanX"); }
	FVector& TanYField() { return *GetNativePointerField<FVector*>(this, "FMorphMeshVertexRaw.TanY"); }
	FVector& TanZField() { return *GetNativePointerField<FVector*>(this, "FMorphMeshVertexRaw.TanZ"); }
};

