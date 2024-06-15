#pragma once

#include "BaseDeclarations.h"
#include "FIntRect.h"

struct FCanvas
{
	enum ECanvasAllowModes
	{
		Allow_Flush = 0x1,
		Allow_DeleteOnRender = 0x2,
	};

	enum EElementType
	{
		ET_Line = 0x0,
		ET_Triangle = 0x1,
		ET_MAX = 0x2,
	};

	char __padding[0x180L];
	float& AlphaModulateField() { return *GetNativePointerField<float*>(this, "FCanvas.AlphaModulate"); }
	TArray<int>& DepthSortKeyStackField() { return *GetNativePointerField<TArray<int>*>(this, "FCanvas.DepthSortKeyStack"); }
	TArray<FCanvas::FTransformEntry>& TransformStackField() { return *GetNativePointerField<TArray<FCanvas::FTransformEntry>*>(this, "FCanvas.TransformStack"); }
	FIntRect& ViewRectField() { return *GetNativePointerField<FIntRect*>(this, "FCanvas.ViewRect"); }
	FHitProxyConsumer * HitProxyConsumerField() { return GetNativePointerField<FHitProxyConsumer *>(this, "FCanvas.HitProxyConsumer"); }
	unsigned int& AllowedModesField() { return *GetNativePointerField<unsigned int*>(this, "FCanvas.AllowedModes"); }
	bool& bRenderTargetDirtyField() { return *GetNativePointerField<bool*>(this, "FCanvas.bRenderTargetDirty"); }
	float& CurrentRealTimeField() { return *GetNativePointerField<float*>(this, "FCanvas.CurrentRealTime"); }
	float& CurrentWorldTimeField() { return *GetNativePointerField<float*>(this, "FCanvas.CurrentWorldTime"); }
	float& CurrentDeltaWorldTimeField() { return *GetNativePointerField<float*>(this, "FCanvas.CurrentDeltaWorldTime"); }
	bool& bScaledToRenderTargetField() { return *GetNativePointerField<bool*>(this, "FCanvas.bScaledToRenderTarget"); }
	bool& bAllowsToSwitchVerticalAxisField() { return *GetNativePointerField<bool*>(this, "FCanvas.bAllowsToSwitchVerticalAxis"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FCanvas.FeatureLevel"); }
	EShaderPlatform& ShaderPlatformField() { return *GetNativePointerField<EShaderPlatform*>(this, "FCanvas.ShaderPlatform"); }
	bool& bStereoRenderingField() { return *GetNativePointerField<bool*>(this, "FCanvas.bStereoRendering"); }
	int& StereoDepthField() { return *GetNativePointerField<int*>(this, "FCanvas.StereoDepth"); }
	FieldArray<FMatrix, 2> CachedOrthoProjectionField() { return {this, "FCanvas.CachedOrthoProjection"}; }
	int& CachedRTWidthField() { return *GetNativePointerField<int*>(this, "FCanvas.CachedRTWidth"); }
	int& CachedRTHeightField() { return *GetNativePointerField<int*>(this, "FCanvas.CachedRTHeight"); }
	int& CachedDrawDepthField() { return *GetNativePointerField<int*>(this, "FCanvas.CachedDrawDepth"); }
	TArray<FCanvas::FCanvasSortElement>& SortedElementsField() { return *GetNativePointerField<TArray<FCanvas::FCanvasSortElement>*>(this, "FCanvas.SortedElements"); }
	int& LastElementIndexField() { return *GetNativePointerField<int*>(this, "FCanvas.LastElementIndex"); }

	// Functions

	void SetAllowedModes(unsigned int InAllowedModes) { NativeCall<void, unsigned int>(this, "FCanvas.SetAllowedModes", InAllowedModes); }
	static ESimpleElementBlendMode BlendToSimpleElementBlend(EBlendMode BlendMode) { return NativeCall<ESimpleElementBlendMode, EBlendMode>(nullptr, "FCanvas.BlendToSimpleElementBlend", BlendMode); }
	static FMatrix * CalcBaseTransform2D(FMatrix * result, unsigned int ViewSizeX, unsigned int ViewSizeY) { return NativeCall<FMatrix *, FMatrix *, unsigned int, unsigned int>(nullptr, "FCanvas.CalcBaseTransform2D", result, ViewSizeX, ViewSizeY); }
	void Clear(const FLinearColor * Color) { NativeCall<void, const FLinearColor *>(this, "FCanvas.Clear", Color); }
	void Construct() { NativeCall<void>(this, "FCanvas.Construct"); }
	void DrawItem(FCanvasItem * Item) { NativeCall<void, FCanvasItem *>(this, "FCanvas.DrawItem", Item); }
	void DrawItem(FCanvasItem * Item, const FVector2D * InPosition) { NativeCall<void, FCanvasItem *, const FVector2D *>(this, "FCanvas.DrawItem", Item, InPosition); }
	void DrawItem(FCanvasItem * Item, float X, float Y) { NativeCall<void, FCanvasItem *, float, float>(this, "FCanvas.DrawItem", Item, X, Y); }
	int DrawShadowedString(float StartX, float StartY, const wchar_t * Text, UFont * Font, const FLinearColor * Color, const FLinearColor * ShadowColor) { return NativeCall<int, float, float, const wchar_t *, UFont *, const FLinearColor *, const FLinearColor *>(this, "FCanvas.DrawShadowedString", StartX, StartY, Text, Font, Color, ShadowColor); }
	void DrawTile(float X, float Y, float SizeX, float SizeY, float U, float V, float SizeU, float SizeV, const FLinearColor * Color, const FTexture * Texture, bool AlphaBlend) { NativeCall<void, float, float, float, float, float, float, float, float, const FLinearColor *, const FTexture *, bool>(this, "FCanvas.DrawTile", X, Y, SizeX, SizeY, U, V, SizeU, SizeV, Color, Texture, AlphaBlend); }
	void Flush_GameThread(bool bForce) { NativeCall<void, bool>(this, "FCanvas.Flush_GameThread", bForce); }
	void Flush_RenderThread(FRHICommandListImmediate * RHICmdList, bool bForce, FIntRect ClippingRect) { NativeCall<void, FRHICommandListImmediate *, bool, FIntRect>(this, "FCanvas.Flush_RenderThread", RHICmdList, bForce, ClippingRect); }
	FBatchedElements * GetBatchedElements(FCanvas::EElementType InElementType, FBatchedElementParameters * InBatchedElementParameters, const FTexture * InTexture, ESimpleElementBlendMode InBlendMode, const FDepthFieldGlowInfo * GlowInfo) { return NativeCall<FBatchedElements *, FCanvas::EElementType, FBatchedElementParameters *, const FTexture *, ESimpleElementBlendMode, const FDepthFieldGlowInfo *>(this, "FCanvas.GetBatchedElements", InElementType, InBatchedElementParameters, InTexture, InBlendMode, GlowInfo); }
	bool GetOrthoProjectionMatrices(float InDrawDepth, FMatrix * OutOrthoProjection) { return NativeCall<bool, float, FMatrix *>(this, "FCanvas.GetOrthoProjectionMatrices", InDrawDepth, OutOrthoProjection); }
	FCanvas::FCanvasSortElement * GetSortElement(int DepthSortKey) { return NativeCall<FCanvas::FCanvasSortElement *, int>(this, "FCanvas.GetSortElement", DepthSortKey); }
	void PopTransform() { NativeCall<void>(this, "FCanvas.PopTransform"); }
	void PushAbsoluteTransform(const FMatrix * Transform) { NativeCall<void, const FMatrix *>(this, "FCanvas.PushAbsoluteTransform", Transform); }
	void PushRelativeTransform(const FMatrix * Transform) { NativeCall<void, const FMatrix *>(this, "FCanvas.PushRelativeTransform", Transform); }
	void SetBaseTransform(const FMatrix * Transform) { NativeCall<void, const FMatrix *>(this, "FCanvas.SetBaseTransform", Transform); }
	void SetRenderTargetRect(const FIntRect * InViewRect) { NativeCall<void, const FIntRect *>(this, "FCanvas.SetRenderTargetRect", InViewRect); }
};

