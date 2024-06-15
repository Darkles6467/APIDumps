#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FUploadObjectsToBufferCS : FGlobalShader
{
	char __padding[0x38L];
	FDistanceFieldObjectBufferParameters& ObjectBufferParametersField() { return *GetNativePointerField<FDistanceFieldObjectBufferParameters*>(this, "FUploadObjectsToBufferCS.ObjectBufferParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FUploadObjectsToBufferCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FScene * Scene, unsigned int NumUploadOperationsValue, FRHIShaderResourceView * InUploadOperationIndices, FRHIShaderResourceView * InUploadOperationData) { NativeCall<void, FRHICommandList *, const FScene *, unsigned int, FRHIShaderResourceView *, FRHIShaderResourceView *>(this, "FUploadObjectsToBufferCS.SetParameters", RHICmdList, Scene, NumUploadOperationsValue, InUploadOperationIndices, InUploadOperationData); }
	void UnsetParameters(FRHICommandList * RHICmdList, const FScene * Scene) { NativeCall<void, FRHICommandList *, const FScene *>(this, "FUploadObjectsToBufferCS.UnsetParameters", RHICmdList, Scene); }
};

