#pragma once

#include "BaseDeclarations.h"
struct FInstancedStaticMeshInstanceData
{
	char __padding[0x50L];
	FMatrix& TransformField() { return *GetNativePointerField<FMatrix*>(this, "FInstancedStaticMeshInstanceData.Transform"); }
	FVector2D& LightmapUVBiasField() { return *GetNativePointerField<FVector2D*>(this, "FInstancedStaticMeshInstanceData.LightmapUVBias"); }
	FVector2D& ShadowmapUVBiasField() { return *GetNativePointerField<FVector2D*>(this, "FInstancedStaticMeshInstanceData.ShadowmapUVBias"); }

	// Functions

};

