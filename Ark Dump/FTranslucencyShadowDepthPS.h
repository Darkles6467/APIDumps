#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FTranslucencyShadowDepthPS : FMeshMaterialShader
{
	char __padding[0x20L];
	FTranslucencyShadowProjectionShaderParameters& TranslucencyProjectionParametersField() { return *GetNativePointerField<FTranslucencyShadowProjectionShaderParameters*>(this, "FTranslucencyShadowDepthPS.TranslucencyProjectionParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FTranslucencyShadowDepthPS.Serialize", Ar); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FTranslucencyShadowDepthPS.ShouldCache", Platform, Material, VertexFactoryType); }
};

