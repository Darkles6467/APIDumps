#pragma once

#include "BaseDeclarations.h"
struct FSamplerPair
{
	char __padding[0x8L];
	unsigned int& TextureField() { return *GetNativePointerField<unsigned int*>(this, "FSamplerPair.Texture"); }
	unsigned int& SamplerField() { return *GetNativePointerField<unsigned int*>(this, "FSamplerPair.Sampler"); }
};

