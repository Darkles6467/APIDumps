#pragma once

#include "BaseDeclarations.h"
struct FAtlasedTextureSlot
{
	char __padding[0x28L];
	FAtlasedTextureSlot * LeftField() { return GetNativePointerField<FAtlasedTextureSlot *>(this, "FAtlasedTextureSlot.Left"); }
	FAtlasedTextureSlot * RightField() { return GetNativePointerField<FAtlasedTextureSlot *>(this, "FAtlasedTextureSlot.Right"); }
	unsigned int& XField() { return *GetNativePointerField<unsigned int*>(this, "FAtlasedTextureSlot.X"); }
	unsigned int& YField() { return *GetNativePointerField<unsigned int*>(this, "FAtlasedTextureSlot.Y"); }
	unsigned int& WidthField() { return *GetNativePointerField<unsigned int*>(this, "FAtlasedTextureSlot.Width"); }
	unsigned int& HeightField() { return *GetNativePointerField<unsigned int*>(this, "FAtlasedTextureSlot.Height"); }
	char& PaddingField() { return *GetNativePointerField<char*>(this, "FAtlasedTextureSlot.Padding"); }
};

