#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FClearClutter : FGlobalShader
{
	char __padding[0x8L];
	FRWShaderParameter& ClutterBufferInformationParameterField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FClearClutter.ClutterBufferInformationParameter"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FClearClutter.Serialize", Ar); }
};

