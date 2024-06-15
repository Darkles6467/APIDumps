#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FObjectCullVS : FGlobalShader
{
	char __padding[0x50L];
	FDistanceFieldCulledObjectBufferParameters& ObjectParametersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBufferParameters*>(this, "FObjectCullVS.ObjectParameters"); }
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FObjectCullVS.AOParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FObjectCullVS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, FRHICommandList *, FSceneView *, const FDistanceFieldAOParameters *>(this, "FObjectCullVS.SetParameters", RHICmdList, View, Parameters); }
};

