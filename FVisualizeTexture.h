#pragma once

#include "BaseDeclarations.h"
struct FVisualizeTexture
{
	char __padding[0xc8L];
	int& ModeField() { return *GetNativePointerField<int*>(this, "FVisualizeTexture.Mode"); }
	float& RGBMulField() { return *GetNativePointerField<float*>(this, "FVisualizeTexture.RGBMul"); }
	float& AMulField() { return *GetNativePointerField<float*>(this, "FVisualizeTexture.AMul"); }
	int& UVInputMappingField() { return *GetNativePointerField<int*>(this, "FVisualizeTexture.UVInputMapping"); }
	int& FlagsField() { return *GetNativePointerField<int*>(this, "FVisualizeTexture.Flags"); }
	int& CustomMipField() { return *GetNativePointerField<int*>(this, "FVisualizeTexture.CustomMip"); }
	int& ArrayIndexField() { return *GetNativePointerField<int*>(this, "FVisualizeTexture.ArrayIndex"); }
	bool& bSaveBitmapField() { return *GetNativePointerField<bool*>(this, "FVisualizeTexture.bSaveBitmap"); }
	bool& bOutputStencilField() { return *GetNativePointerField<bool*>(this, "FVisualizeTexture.bOutputStencil"); }
	bool& bFullListField() { return *GetNativePointerField<bool*>(this, "FVisualizeTexture.bFullList"); }
	int& SortOrderField() { return *GetNativePointerField<int*>(this, "FVisualizeTexture.SortOrder"); }
	FString& ObservedDebugNameField() { return *GetNativePointerField<FString*>(this, "FVisualizeTexture.ObservedDebugName"); }
	unsigned int& ObservedDebugNameReusedCurrentField() { return *GetNativePointerField<unsigned int*>(this, "FVisualizeTexture.ObservedDebugNameReusedCurrent"); }
	unsigned int& ObservedDebugNameReusedGoalField() { return *GetNativePointerField<unsigned int*>(this, "FVisualizeTexture.ObservedDebugNameReusedGoal"); }
	FPooledRenderTargetDesc& VisualizeTextureDescField() { return *GetNativePointerField<FPooledRenderTargetDesc*>(this, "FVisualizeTexture.VisualizeTextureDesc"); }
	FIntRect& ViewRectField() { return *GetNativePointerField<FIntRect*>(this, "FVisualizeTexture.ViewRect"); }
	FIntRect& AspectRatioConstrainedViewRectField() { return *GetNativePointerField<FIntRect*>(this, "FVisualizeTexture.AspectRatioConstrainedViewRect"); }
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "FVisualizeTexture.bEnabled"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FVisualizeTexture.FeatureLevel"); }

	// Functions

	void OnStartFrame(FSceneView * View) { NativeCall<void, FSceneView *>(this, "FVisualizeTexture.OnStartFrame", View); }
	void QueryInfo(FQueryVisualizeTexureInfo * Out) { NativeCall<void, FQueryVisualizeTexureInfo *>(this, "FVisualizeTexture.QueryInfo", Out); }
};

