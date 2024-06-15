#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FSampleTrianglesCS : FGlobalShader
{
	char __padding[0x38L];
	FSurfelBufferParameters& SurfelBufferParametersField() { return *GetNativePointerField<FSurfelBufferParameters*>(this, "FSampleTrianglesCS.SurfelBufferParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSampleTrianglesCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int SurfelStartIndexValue, int NumSurfelsToGenerateValue, int NumTrianglesValue, const FUniformMeshBuffers * UniformMeshBuffers) { NativeCall<void, FRHICommandList *, FSceneView *, int, int, int, const FUniformMeshBuffers *>(this, "FSampleTrianglesCS.SetParameters", RHICmdList, View, SurfelStartIndexValue, NumSurfelsToGenerateValue, NumTrianglesValue, UniformMeshBuffers); }
	void UnsetParameters(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FSampleTrianglesCS.UnsetParameters", RHICmdList); }
};

