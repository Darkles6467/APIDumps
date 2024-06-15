#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FSetupVPLCullndirectArgumentsCS : FGlobalShader
{
	char __padding[0x10L];
	FRWShaderParameter& DispatchParametersField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FSetupVPLCullndirectArgumentsCS.DispatchParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSetupVPLCullndirectArgumentsCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View) { NativeCall<void, FRHICommandList *, FSceneView *>(this, "FSetupVPLCullndirectArgumentsCS.SetParameters", RHICmdList, View); }
};

