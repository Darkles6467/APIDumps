#pragma once

#include "BaseDeclarations.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FLightHeightfieldsPS : FMaterialShader
{
	char __padding[0x40L];
	FHeightfieldDescriptionParameters& HeightfieldDescriptionParametersField() { return *GetNativePointerField<FHeightfieldDescriptionParameters*>(this, "FLightHeightfieldsPS.HeightfieldDescriptionParameters"); }
	FGlobalHeightfieldParameters& GlobalHeightfieldParametersField() { return *GetNativePointerField<FGlobalHeightfieldParameters*>(this, "FLightHeightfieldsPS.GlobalHeightfieldParameters"); }
	FLightFunctionSharedParameters& LightFunctionParametersField() { return *GetNativePointerField<FLightFunctionSharedParameters*>(this, "FLightHeightfieldsPS.LightFunctionParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FLightHeightfieldsPS.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FLightHeightfieldsPS.Serialize", Ar); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material) { return NativeCall<bool, EShaderPlatform, FMaterial *>(nullptr, "FLightHeightfieldsPS.ShouldCache", Platform, Material); }
};

