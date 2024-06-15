#pragma once

#include "BaseDeclarations.h"
struct FFontData
{
	char __padding[0x10L];
	TIndirectArray<FTexture2DMipMap>& PreCookedTextureDataField() { return *GetNativePointerField<TIndirectArray<FTexture2DMipMap>*>(this, "FFontData.PreCookedTextureData"); }

	// Functions

};

