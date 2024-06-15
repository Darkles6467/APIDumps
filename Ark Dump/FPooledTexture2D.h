#pragma once

#include "BaseDeclarations.h"
struct FPooledTexture2D
{
	char __padding[0x8L];
	TRefCountPtr<ID3D11Texture2D>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11Texture2D>*>(this, "FPooledTexture2D.Resource"); }
};

