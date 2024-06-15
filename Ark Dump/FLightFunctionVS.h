#pragma once

#include "BaseDeclarations.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FLightFunctionVS : FMaterialShader
{
	char __padding[0x18L];
	FStencilingGeometryShaderParameters& StencilingGeometryParametersField() { return *GetNativePointerField<FStencilingGeometryShaderParameters*>(this, "FLightFunctionVS.StencilingGeometryParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FLightFunctionVS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, const FLightSceneInfo * LightSceneInfo, bool bLightAttenuationCleared) { NativeCall<void, FRHICommandList *, FSceneView *, const FLightSceneInfo *, bool>(this, "FLightFunctionVS.SetParameters", RHICmdList, View, LightSceneInfo, bLightAttenuationCleared); }
};

