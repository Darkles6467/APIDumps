#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FTrackGPUProgressCS : FGlobalShader
{
	char __padding[0x10L];
	FRWShaderParameter& DebugBufferField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FTrackGPUProgressCS.DebugBuffer"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FTrackGPUProgressCS.Serialize", Ar); }
	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FTrackGPUProgressCS.GetTypeSize"); }
};

