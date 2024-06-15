#pragma once

#include "BaseDeclarations.h"
struct FTranslucentLightInjectionData
{
	char __padding[0x20L];
	const FLightSceneInfo * LightSceneInfoField() { return GetNativePointerField<const FLightSceneInfo *>(this, "FTranslucentLightInjectionData.LightSceneInfo"); }
	const FProjectedShadowInfo * ProjectedShadowInfoField() { return GetNativePointerField<const FProjectedShadowInfo *>(this, "FTranslucentLightInjectionData.ProjectedShadowInfo"); }
	bool& bApplyLightFunctionField() { return *GetNativePointerField<bool*>(this, "FTranslucentLightInjectionData.bApplyLightFunction"); }
};

