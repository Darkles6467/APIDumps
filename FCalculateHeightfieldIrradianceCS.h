#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCalculateHeightfieldIrradianceCS : FGlobalShader
{
	char __padding[0x80L];
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FCalculateHeightfieldIrradianceCS.AOParameters"); }
	FHeightfieldDescriptionParameters& HeightfieldDescriptionParametersField() { return *GetNativePointerField<FHeightfieldDescriptionParameters*>(this, "FCalculateHeightfieldIrradianceCS.HeightfieldDescriptionParameters"); }
	FGlobalHeightfieldParameters& GlobalHeightfieldParametersField() { return *GetNativePointerField<FGlobalHeightfieldParameters*>(this, "FCalculateHeightfieldIrradianceCS.GlobalHeightfieldParameters"); }
	FRWShaderParameter& HeightfieldIrradianceField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCalculateHeightfieldIrradianceCS.HeightfieldIrradiance"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCalculateHeightfieldIrradianceCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int DepthLevel, int NumHeightfieldsValue, const FTemporaryIrradianceCacheResources * TemporaryIrradianceCacheResources, const FDistanceFieldAOParameters * Parameters, const FHeightfieldLightingAtlas * Atlas) { NativeCall<void, FRHICommandList *, FSceneView *, int, int, const FTemporaryIrradianceCacheResources *, const FDistanceFieldAOParameters *, const FHeightfieldLightingAtlas *>(this, "FCalculateHeightfieldIrradianceCS.SetParameters", RHICmdList, View, DepthLevel, NumHeightfieldsValue, TemporaryIrradianceCacheResources, Parameters, Atlas); }
};

