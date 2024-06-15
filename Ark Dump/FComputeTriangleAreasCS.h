#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FComputeTriangleAreasCS : FGlobalShader
{
	char __padding[0x18L];
	FRWShaderParameter& TriangleAreasField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FComputeTriangleAreasCS.TriangleAreas"); }

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int NumTrianglesValue, const FUniformMeshBuffers * UniformMeshBuffers) { NativeCall<void, FRHICommandList *, FSceneView *, int, const FUniformMeshBuffers *>(this, "FComputeTriangleAreasCS.SetParameters", RHICmdList, View, NumTrianglesValue, UniformMeshBuffers); }
	void UnsetParameters(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FComputeTriangleAreasCS.UnsetParameters", RHICmdList); }
};

