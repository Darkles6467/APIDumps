#pragma once

#include "BaseDeclarations.h"
struct FVisibleLightViewInfo
{
	char __padding[0x48L];
	TBitArray<SceneRenderingBitArrayAllocator>& ProjectedShadowVisibilityMapField() { return *GetNativePointerField<TBitArray<SceneRenderingBitArrayAllocator>*>(this, "FVisibleLightViewInfo.ProjectedShadowVisibilityMap"); }
};

