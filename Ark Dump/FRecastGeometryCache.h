#pragma once

#include "BaseDeclarations.h"
struct FRecastGeometryCache
{
	char __padding[0x20L];
	FRecastGeometryCache::FHeader& HeaderField() { return *GetNativePointerField<FRecastGeometryCache::FHeader*>(this, "FRecastGeometryCache.Header"); }
	float * VertsField() { return GetNativePointerField<float *>(this, "FRecastGeometryCache.Verts"); }
	int * IndicesField() { return GetNativePointerField<int *>(this, "FRecastGeometryCache.Indices"); }
};

