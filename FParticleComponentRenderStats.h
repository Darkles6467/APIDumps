#pragma once

#include "BaseDeclarations.h"
struct FParticleComponentRenderStats
{
	char __padding[0x8L];
	float& MaxRenderTimeField() { return *GetNativePointerField<float*>(this, "FParticleComponentRenderStats.MaxRenderTime"); }
	int& NumDrawsField() { return *GetNativePointerField<int*>(this, "FParticleComponentRenderStats.NumDraws"); }
};

