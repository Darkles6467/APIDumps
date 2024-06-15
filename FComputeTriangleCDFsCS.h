#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FComputeTriangleCDFsCS : FGlobalShader
{
	char __padding[0x18L];
	FRWShaderParameter& TriangleCDFsField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FComputeTriangleCDFsCS.TriangleCDFs"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FComputeTriangleCDFsCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int NumTrianglesValue, const FUniformMeshBuffers * UniformMeshBuffers) { NativeCall<void, FRHICommandList *, FSceneView *, int, const FUniformMeshBuffers *>(this, "FComputeTriangleCDFsCS.SetParameters", RHICmdList, View, NumTrianglesValue, UniformMeshBuffers); }
	void UnsetParameters(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FComputeTriangleCDFsCS.UnsetParameters", RHICmdList); }
};

