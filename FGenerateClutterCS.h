#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FGenerateClutterCS : FGlobalShader
{
	char __padding[0x78L];
	FRWShaderParameter& ClutterBufferOutPositionsParameterField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FGenerateClutterCS.ClutterBufferOutPositionsParameter"); }
	FRWShaderParameter& ClutterBufferInformationParameterField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FGenerateClutterCS.ClutterBufferInformationParameter"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FGenerateClutterCS.Serialize", Ar); }
};

