#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FShadowObjectCullPS : FGlobalShader
{
	char __padding[0x48L];
	FDistanceFieldCulledObjectBufferParameters& ObjectParametersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBufferParameters*>(this, "FShadowObjectCullPS.ObjectParameters"); }
	FRWShaderParameter& ShadowTileHeadDataUnpackedField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FShadowObjectCullPS.ShadowTileHeadDataUnpacked"); }
	FRWShaderParameter& ShadowTileArrayDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FShadowObjectCullPS.ShadowTileArrayData"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FShadowObjectCullPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FVector2D NumGroupsValue) { NativeCall<void, FRHICommandList *, FSceneView *, FVector2D>(this, "FShadowObjectCullPS.SetParameters", RHICmdList, View, NumGroupsValue); }
};

