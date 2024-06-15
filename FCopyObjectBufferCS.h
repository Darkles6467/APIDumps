#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCopyObjectBufferCS : FGlobalShader
{
	char __padding[0x38L];
	FRWShaderParameter& CopyObjectBoundsField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCopyObjectBufferCS.CopyObjectBounds"); }
	FRWShaderParameter& CopyObjectDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCopyObjectBufferCS.CopyObjectData"); }
	FDistanceFieldObjectBufferParameters& ObjectBufferParametersField() { return *GetNativePointerField<FDistanceFieldObjectBufferParameters*>(this, "FCopyObjectBufferCS.ObjectBufferParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FCopyObjectBufferCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCopyObjectBufferCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FDistanceFieldObjectBuffers * ObjectBuffersSource, FDistanceFieldObjectBuffers * ObjectBuffersDest, int NumObjectsValue) { NativeCall<void, FRHICommandList *, FDistanceFieldObjectBuffers *, FDistanceFieldObjectBuffers *, int>(this, "FCopyObjectBufferCS.SetParameters", RHICmdList, ObjectBuffersSource, ObjectBuffersDest, NumObjectsValue); }
	void UnsetParameters(FRHICommandList * RHICmdList, FDistanceFieldObjectBuffers * ObjectBuffersDest) { NativeCall<void, FRHICommandList *, FDistanceFieldObjectBuffers *>(this, "FCopyObjectBufferCS.UnsetParameters", RHICmdList, ObjectBuffersDest); }
};

