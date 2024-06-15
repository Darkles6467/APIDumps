#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCopySurfelBufferCS : FGlobalShader
{
	char __padding[0x30L];
	FRWShaderParameter& CopyInterpolatedVertexDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCopySurfelBufferCS.CopyInterpolatedVertexData"); }
	FRWShaderParameter& CopySurfelDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCopySurfelBufferCS.CopySurfelData"); }
	FSurfelBufferParameters& SurfelBufferParametersField() { return *GetNativePointerField<FSurfelBufferParameters*>(this, "FCopySurfelBufferCS.SurfelBufferParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCopySurfelBufferCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FSurfelBuffers * SurfelBuffersSource, const FInstancedSurfelBuffers * InstancedSurfelBuffersSource, FSurfelBuffers * SurfelBuffersDest, int NumSurfelsValue) { NativeCall<void, FRHICommandList *, const FSurfelBuffers *, const FInstancedSurfelBuffers *, FSurfelBuffers *, int>(this, "FCopySurfelBufferCS.SetParameters", RHICmdList, SurfelBuffersSource, InstancedSurfelBuffersSource, SurfelBuffersDest, NumSurfelsValue); }
	void UnsetParameters(FRHICommandList * RHICmdList, FSurfelBuffers * SurfelBuffersDest) { NativeCall<void, FRHICommandList *, FSurfelBuffers *>(this, "FCopySurfelBufferCS.UnsetParameters", RHICmdList, SurfelBuffersDest); }
};

