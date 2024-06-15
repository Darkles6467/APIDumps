#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPrepareClutterCS : FGlobalShader
{
	char __padding[0x18L];
	FRWShaderParameter& ClutterBufferInformationParameterField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FPrepareClutterCS.ClutterBufferInformationParameter"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPrepareClutterCS.Serialize", Ar); }
};

