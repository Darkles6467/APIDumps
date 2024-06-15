#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCullVPLsForViewCS : FGlobalShader
{
	char __padding[0x40L];
	FRWShaderParameter& CulledVPLParameterBufferField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCullVPLsForViewCS.CulledVPLParameterBuffer"); }
	FRWShaderParameter& CulledVPLDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCullVPLsForViewCS.CulledVPLData"); }
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FCullVPLsForViewCS.AOParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCullVPLsForViewCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FScene * Scene, FSceneView * View, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, FRHICommandList *, const FScene *, FSceneView *, const FDistanceFieldAOParameters *>(this, "FCullVPLsForViewCS.SetParameters", RHICmdList, Scene, View, Parameters); }
	void UnsetParameters(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FCullVPLsForViewCS.UnsetParameters", RHICmdList); }
};

