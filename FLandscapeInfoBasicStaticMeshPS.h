#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FLandscapeInfoBasicStaticMeshPS : FMeshMaterialShader
{
	char __padding[0x28L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FLandscapeInfoBasicStaticMeshPS.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, FRHITexture * InPreviousInfoTexture, FRHITexture * InPreviousIDTexture) { NativeCall<void, FRHICommandList *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, FRHITexture *, FRHITexture *>(this, "FLandscapeInfoBasicStaticMeshPS.SetMesh", RHICmdList, VertexFactory, View, Proxy, BatchElement, InPreviousInfoTexture, InPreviousIDTexture); }
};

