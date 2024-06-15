#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FInjectAmbientCubemapPS : FGlobalShader
{
	char __padding[0x18L];
	FCubemapShaderParameters& CubemapShaderParametersField() { return *GetNativePointerField<FCubemapShaderParameters*>(this, "FInjectAmbientCubemapPS.CubemapShaderParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FInjectAmbientCubemapPS.Serialize", Ar); }
};

