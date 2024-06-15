#pragma once

#include "BaseDeclarations.h"
struct SkyBoxLoader_eventK2_OnTextureIndicesLoaded_Parms
{
	char __padding[0x10L];
	TArray<int>& TextureIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "SkyBoxLoader_eventK2_OnTextureIndicesLoaded_Parms.TextureIndices"); }
};

