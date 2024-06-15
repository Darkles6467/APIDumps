#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FObjectCullPS : FGlobalShader
{
	char __padding[0x38L];
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FObjectCullPS.AOParameters"); }
	FRWShaderParameter& TileHeadDataUnpackedField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FObjectCullPS.TileHeadDataUnpacked"); }
	FRWShaderParameter& TileArrayDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FObjectCullPS.TileArrayData"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FObjectCullPS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FObjectCullPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FVector2D NumGroupsValue, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, FRHICommandList *, FSceneView *, FVector2D, const FDistanceFieldAOParameters *>(this, "FObjectCullPS.SetParameters", RHICmdList, View, NumGroupsValue, Parameters); }
};

