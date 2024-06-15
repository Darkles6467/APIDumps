#pragma once

#include "BaseDeclarations.h"
struct FNewTextureInfo
{
	char __padding[0x18L];
	TSharedPtr<FSlateTextureData,1>& TextureDataField() { return *GetNativePointerField<TSharedPtr<FSlateTextureData,1>*>(this, "FNewTextureInfo.TextureData"); }
	bool& bShouldAtlasField() { return *GetNativePointerField<bool*>(this, "FNewTextureInfo.bShouldAtlas"); }
	bool& bSrgbField() { return *GetNativePointerField<bool*>(this, "FNewTextureInfo.bSrgb"); }
};

