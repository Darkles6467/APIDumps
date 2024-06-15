#pragma once

#include "BaseDeclarations.h"
struct FVisualizeTextureData
{
	char __padding[0x40L];
	const FSceneRenderTargetItem * RenderTargetItemField() { return GetNativePointerField<const FSceneRenderTargetItem *>(this, "FVisualizeTextureData.RenderTargetItem"); }
	const FPooledRenderTargetDesc * DescField() { return GetNativePointerField<const FPooledRenderTargetDesc *>(this, "FVisualizeTextureData.Desc"); }
	float& RGBMulField() { return *GetNativePointerField<float*>(this, "FVisualizeTextureData.RGBMul"); }
	float& AMulField() { return *GetNativePointerField<float*>(this, "FVisualizeTextureData.AMul"); }
	FVector2D& Tex00Field() { return *GetNativePointerField<FVector2D*>(this, "FVisualizeTextureData.Tex00"); }
	FVector2D& Tex11Field() { return *GetNativePointerField<FVector2D*>(this, "FVisualizeTextureData.Tex11"); }
	bool& bSaturateInsteadOfFracField() { return *GetNativePointerField<bool*>(this, "FVisualizeTextureData.bSaturateInsteadOfFrac"); }
	int& InputValueMappingField() { return *GetNativePointerField<int*>(this, "FVisualizeTextureData.InputValueMapping"); }
	int& ArrayIndexField() { return *GetNativePointerField<int*>(this, "FVisualizeTextureData.ArrayIndex"); }
	int& CustomMipField() { return *GetNativePointerField<int*>(this, "FVisualizeTextureData.CustomMip"); }
};

