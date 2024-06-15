#pragma once

#include "BaseDeclarations.h"
struct FSkyLightReflectionParameters
{
	char __padding[0x16L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FSkyLightReflectionParameters.Bind", ParameterMap); }
	void GetSkyParametersFromScene(const FScene * Scene, FSceneView * View, bool bApplySkyLight, FTexture ** OutSkyLightTextureResource, FTexture ** OutSkyLightTextureResource1, float * OutApplySkyLightMask, float * OutSkyMipCount, bool * bOutSkyLightIsDynamic) { NativeCall<void, const FScene *, FSceneView *, bool, FTexture **, FTexture **, float *, float *, bool *>(this, "FSkyLightReflectionParameters.GetSkyParametersFromScene", Scene, View, bApplySkyLight, OutSkyLightTextureResource, OutSkyLightTextureResource1, OutApplySkyLightMask, OutSkyMipCount, bOutSkyLightIsDynamic); }
};

