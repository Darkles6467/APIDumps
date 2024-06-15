#pragma once

#include "BaseDeclarations.h"
struct FStaticMeshFullVertex
{
	char __padding[0x8L];
	FPackedNormal& TangentXField() { return *GetNativePointerField<FPackedNormal*>(this, "FStaticMeshFullVertex.TangentX"); }
	FPackedNormal& TangentZField() { return *GetNativePointerField<FPackedNormal*>(this, "FStaticMeshFullVertex.TangentZ"); }
};

