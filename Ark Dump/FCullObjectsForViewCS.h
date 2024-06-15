#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCullObjectsForViewCS : FGlobalShader
{
	char __padding[0x70L];
	FDistanceFieldObjectBufferParameters& ObjectBufferParametersField() { return *GetNativePointerField<FDistanceFieldObjectBufferParameters*>(this, "FCullObjectsForViewCS.ObjectBufferParameters"); }
	FRWShaderParameter& ObjectIndirectArgumentsField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCullObjectsForViewCS.ObjectIndirectArguments"); }
	FRWShaderParameter& CulledObjectBoundsField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCullObjectsForViewCS.CulledObjectBounds"); }
	FRWShaderParameter& CulledObjectDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCullObjectsForViewCS.CulledObjectData"); }
	FRWShaderParameter& CulledObjectBoxBoundsField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCullObjectsForViewCS.CulledObjectBoxBounds"); }
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FCullObjectsForViewCS.AOParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCullObjectsForViewCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FScene * Scene, FSceneView * View, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, FRHICommandList *, const FScene *, FSceneView *, const FDistanceFieldAOParameters *>(this, "FCullObjectsForViewCS.SetParameters", RHICmdList, Scene, View, Parameters); }
	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FCullObjectsForViewCS.GetTypeSize"); }
};

