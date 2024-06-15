#pragma once

#include "BaseDeclarations.h"
struct FPaintingCacheElement
{
	char __padding[0x18L];
	UPaintingTexture * PaintingTextureField() { return GetNativePointerField<UPaintingTexture *>(this, "FPaintingCacheElement.PaintingTexture"); }
	long double& LastAccessTimeField() { return *GetNativePointerField<long double*>(this, "FPaintingCacheElement.LastAccessTime"); }
	int& UniquePaintingIdField() { return *GetNativePointerField<int*>(this, "FPaintingCacheElement.UniquePaintingId"); }

	// Functions

};

