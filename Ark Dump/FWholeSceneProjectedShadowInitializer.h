#pragma once

#include "BaseDeclarations.h"
#include "FProjectedShadowInitializer.h"

struct FWholeSceneProjectedShadowInitializer : FProjectedShadowInitializer
{
	char __padding[0x190L];
	int& SplitIndexField() { return *GetNativePointerField<int*>(this, "FWholeSceneProjectedShadowInitializer.SplitIndex"); }
	FShadowCascadeSettings& CascadeSettingsField() { return *GetNativePointerField<FShadowCascadeSettings*>(this, "FWholeSceneProjectedShadowInitializer.CascadeSettings"); }
	bool& bOnePassPointLightShadowField() { return *GetNativePointerField<bool*>(this, "FWholeSceneProjectedShadowInitializer.bOnePassPointLightShadow"); }
	bool& bRayTracedDistanceFieldShadowField() { return *GetNativePointerField<bool*>(this, "FWholeSceneProjectedShadowInitializer.bRayTracedDistanceFieldShadow"); }
	bool& bShadowmapCachesDynamicGeometryField() { return *GetNativePointerField<bool*>(this, "FWholeSceneProjectedShadowInitializer.bShadowmapCachesDynamicGeometry"); }
	bool& bShadowmapDrawsDynamicGeometryField() { return *GetNativePointerField<bool*>(this, "FWholeSceneProjectedShadowInitializer.bShadowmapDrawsDynamicGeometry"); }
	bool& bOnlyCastShadowmapsWhenCachedField() { return *GetNativePointerField<bool*>(this, "FWholeSceneProjectedShadowInitializer.bOnlyCastShadowmapsWhenCached"); }
	bool& bShadowmapsWithRayTracedDFSField() { return *GetNativePointerField<bool*>(this, "FWholeSceneProjectedShadowInitializer.bShadowmapsWithRayTracedDFS"); }
	bool& bOrthoSpotlightField() { return *GetNativePointerField<bool*>(this, "FWholeSceneProjectedShadowInitializer.bOrthoSpotlight"); }
	float& LightPriorityField() { return *GetNativePointerField<float*>(this, "FWholeSceneProjectedShadowInitializer.LightPriority"); }
};

