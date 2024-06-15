#pragma once

#include "BaseDeclarations.h"
struct FParticleTemplateRenderStats
{
	char __padding[0x14L];
	float& MaxRenderTimeField() { return *GetNativePointerField<float*>(this, "FParticleTemplateRenderStats.MaxRenderTime"); }
	int& NumDrawsField() { return *GetNativePointerField<int*>(this, "FParticleTemplateRenderStats.NumDraws"); }
	int& NumEmittersField() { return *GetNativePointerField<int*>(this, "FParticleTemplateRenderStats.NumEmitters"); }
	int& NumComponentsField() { return *GetNativePointerField<int*>(this, "FParticleTemplateRenderStats.NumComponents"); }
	int& NumDrawDynamicElementsField() { return *GetNativePointerField<int*>(this, "FParticleTemplateRenderStats.NumDrawDynamicElements"); }
};

