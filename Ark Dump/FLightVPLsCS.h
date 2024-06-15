#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FLightVPLsCS : FGlobalShader
{
	char __padding[0xa8L];
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FLightVPLsCS.AOParameters"); }
	FDistanceFieldCulledObjectBufferParameters& ObjectParametersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBufferParameters*>(this, "FLightVPLsCS.ObjectParameters"); }
	FSurfelBufferParameters& SurfelParametersField() { return *GetNativePointerField<FSurfelBufferParameters*>(this, "FLightVPLsCS.SurfelParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FLightVPLsCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FLightSceneProxy * LightSceneProxy, const FMatrix * WorldToShadowMatrixValue, const FDistanceFieldAOParameters * Parameters, FLightTileIntersectionResources * TileIntersectionResources) { NativeCall<void, FRHICommandList *, FSceneView *, FLightSceneProxy *, const FMatrix *, const FDistanceFieldAOParameters *, FLightTileIntersectionResources *>(this, "FLightVPLsCS.SetParameters", RHICmdList, View, LightSceneProxy, WorldToShadowMatrixValue, Parameters, TileIntersectionResources); }
	void UnsetParameters(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FLightVPLsCS.UnsetParameters", RHICmdList); }
	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FLightVPLsCS.GetTypeSize"); }
};

