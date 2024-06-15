#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FShadowObjectCullVS : FGlobalShader
{
	char __padding[0x40L];
	FDistanceFieldCulledObjectBufferParameters& ObjectParametersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBufferParameters*>(this, "FShadowObjectCullVS.ObjectParameters"); }

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FShadowObjectCullVS.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FShadowObjectCullVS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FVector2D NumGroupsValue, const FMatrix * WorldToShadowMatrixValue, float ShadowRadius) { NativeCall<void, FRHICommandList *, FSceneView *, FVector2D, const FMatrix *, float>(this, "FShadowObjectCullVS.SetParameters", RHICmdList, View, NumGroupsValue, WorldToShadowMatrixValue, ShadowRadius); }
};

