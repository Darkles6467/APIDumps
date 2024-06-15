#pragma once

#include "BaseDeclarations.h"
struct FCreateTexture2DParameters
{
	char __padding[0xcL];
	bool& bUseAlphaField() { return *GetNativePointerField<bool*>(this, "FCreateTexture2DParameters.bUseAlpha"); }
	TextureCompressionSettings& CompressionSettingsField() { return *GetNativePointerField<TextureCompressionSettings*>(this, "FCreateTexture2DParameters.CompressionSettings"); }
	bool& bDeferCompressionField() { return *GetNativePointerField<bool*>(this, "FCreateTexture2DParameters.bDeferCompression"); }
	bool& bSRGBField() { return *GetNativePointerField<bool*>(this, "FCreateTexture2DParameters.bSRGB"); }
};

