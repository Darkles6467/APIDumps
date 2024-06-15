#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FHeightfieldSubsectionQuadVS : FGlobalShader
{
	char __padding[0x8L];
	FSubsectionHeightfieldDescriptionParameters& SubsectionHeightfieldParametersField() { return *GetNativePointerField<FSubsectionHeightfieldDescriptionParameters*>(this, "FHeightfieldSubsectionQuadVS.SubsectionHeightfieldParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FHeightfieldSubsectionQuadVS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View) { NativeCall<void, FRHICommandList *, FSceneView *>(this, "FHeightfieldSubsectionQuadVS.SetParameters", RHICmdList, View); }
};

