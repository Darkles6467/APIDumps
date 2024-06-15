#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FTranslucencyShadowDepthVS : FMeshMaterialShader
{
	char __padding[0x18L];
	FShadowDepthShaderParameters& ShadowParametersField() { return *GetNativePointerField<FShadowDepthShaderParameters*>(this, "FTranslucencyShadowDepthVS.ShadowParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FTranslucencyShadowDepthVS.Serialize", Ar); }
};

