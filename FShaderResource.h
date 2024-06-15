#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FShaderResource : FRenderResource
{
	char __padding[0x70L];
	TArray<unsigned char>& CodeField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FShaderResource.Code"); }
	FSHAHash& OutputHashField() { return *GetNativePointerField<FSHAHash*>(this, "FShaderResource.OutputHash"); }
	unsigned int& NumInstructionsField() { return *GetNativePointerField<unsigned int*>(this, "FShaderResource.NumInstructions"); }
	unsigned int& NumTextureSamplersField() { return *GetNativePointerField<unsigned int*>(this, "FShaderResource.NumTextureSamplers"); }
	unsigned int& NumRefsField() { return *GetNativePointerField<unsigned int*>(this, "FShaderResource.NumRefs"); }

	// Functions

	void FinishCleanup() { NativeCall<void>(this, "FShaderResource.FinishCleanup"); }
	void InitRHI() { NativeCall<void>(this, "FShaderResource.InitRHI"); }
	void InitializeVertexShaderRHI() { NativeCall<void>(this, "FShaderResource.InitializeVertexShaderRHI"); }
	void Register() { NativeCall<void>(this, "FShaderResource.Register"); }
	void Release() { NativeCall<void>(this, "FShaderResource.Release"); }
	void ReleaseRHI() { NativeCall<void>(this, "FShaderResource.ReleaseRHI"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FShaderResource.Serialize", Ar); }
};

