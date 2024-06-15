#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCopyVPLFluxBufferCS : FGlobalShader
{
	char __padding[0x28L];
	FRWShaderParameter& CopyVPLFluxField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCopyVPLFluxBufferCS.CopyVPLFlux"); }
	FSurfelBufferParameters& SurfelBufferParametersField() { return *GetNativePointerField<FSurfelBufferParameters*>(this, "FCopyVPLFluxBufferCS.SurfelBufferParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCopyVPLFluxBufferCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FSurfelBuffers * SurfelBuffersSource, const FInstancedSurfelBuffers * InstancedSurfelBuffersSource, FInstancedSurfelBuffers * InstancedSurfelBuffersDest, int NumSurfelsValue) { NativeCall<void, FRHICommandList *, const FSurfelBuffers *, const FInstancedSurfelBuffers *, FInstancedSurfelBuffers *, int>(this, "FCopyVPLFluxBufferCS.SetParameters", RHICmdList, SurfelBuffersSource, InstancedSurfelBuffersSource, InstancedSurfelBuffersDest, NumSurfelsValue); }
	void UnsetParameters(FRHICommandList * RHICmdList, FInstancedSurfelBuffers * InstancedSurfelBuffersDest) { NativeCall<void, FRHICommandList *, FInstancedSurfelBuffers *>(this, "FCopyVPLFluxBufferCS.UnsetParameters", RHICmdList, InstancedSurfelBuffersDest); }
};

