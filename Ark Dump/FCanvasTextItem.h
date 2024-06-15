#pragma once

#include "BaseDeclarations.h"
#include "FCanvasItem.h"

struct FCanvasTextItem : FCanvasItem
{
	char __padding[0x160L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "FCanvasTextItem.Text"); }
	UFont * FontField() { return GetNativePointerField<UFont *>(this, "FCanvasTextItem.Font"); }
	float& HorizSpacingAdjustField() { return *GetNativePointerField<float*>(this, "FCanvasTextItem.HorizSpacingAdjust"); }
	float * ForcedViewportHeightField() { return GetNativePointerField<float *>(this, "FCanvasTextItem.ForcedViewportHeight"); }
	float& DepthField() { return *GetNativePointerField<float*>(this, "FCanvasTextItem.Depth"); }
	FFontRenderInfo& FontRenderInfoField() { return *GetNativePointerField<FFontRenderInfo*>(this, "FCanvasTextItem.FontRenderInfo"); }
	FLinearColor& ShadowColorField() { return *GetNativePointerField<FLinearColor*>(this, "FCanvasTextItem.ShadowColor"); }
	FVector2D& ShadowOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasTextItem.ShadowOffset"); }
	FVector2D& DrawnSizeField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasTextItem.DrawnSize"); }
	bool& bCentreXField() { return *GetNativePointerField<bool*>(this, "FCanvasTextItem.bCentreX"); }
	bool& bCentreYField() { return *GetNativePointerField<bool*>(this, "FCanvasTextItem.bCentreY"); }
	bool& bOutlinedField() { return *GetNativePointerField<bool*>(this, "FCanvasTextItem.bOutlined"); }
	FLinearColor& OutlineColorField() { return *GetNativePointerField<FLinearColor*>(this, "FCanvasTextItem.OutlineColor"); }
	bool& bDontCorrectStereoscopicField() { return *GetNativePointerField<bool*>(this, "FCanvasTextItem.bDontCorrectStereoscopic"); }
	FVector2D& ScaleField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasTextItem.Scale"); }
	FCanvasTileItem& TileItemField() { return *GetNativePointerField<FCanvasTileItem*>(this, "FCanvasTextItem.TileItem"); }
	int& TextLenField() { return *GetNativePointerField<int*>(this, "FCanvasTextItem.TextLen"); }
	FBatchedElements * BatchedElementsField() { return GetNativePointerField<FBatchedElements *>(this, "FCanvasTextItem.BatchedElements"); }
	int& PageIndexField() { return *GetNativePointerField<int*>(this, "FCanvasTextItem.PageIndex"); }
	float& FontScaleField() { return *GetNativePointerField<float*>(this, "FCanvasTextItem.FontScale"); }
	float& XScaleField() { return *GetNativePointerField<float*>(this, "FCanvasTextItem.XScale"); }
	float& YScaleField() { return *GetNativePointerField<float*>(this, "FCanvasTextItem.YScale"); }
	float& CharIncrementField() { return *GetNativePointerField<float*>(this, "FCanvasTextItem.CharIncrement"); }

	// Functions

	void EnableShadow(const FLinearColor * InColor, const FVector2D * InOffset) { NativeCall<void, const FLinearColor *, const FVector2D *>(this, "FCanvasTextItem.EnableShadow", InColor, InOffset); }
	void Draw(FCanvas * InCanvas) { NativeCall<void, FCanvas *>(this, "FCanvasTextItem.Draw", InCanvas); }
	void DrawStringInternal_OfflineCache(FCanvas * InCanvas, const FVector2D * DrawPos, const FLinearColor * InColour) { NativeCall<void, FCanvas *, const FVector2D *, const FLinearColor *>(this, "FCanvasTextItem.DrawStringInternal_OfflineCache", InCanvas, DrawPos, InColour); }
	void DrawStringInternal_RuntimeCache(FCanvas * InCanvas, const FVector2D * DrawPos, const FLinearColor * InColor) { NativeCall<void, FCanvas *, const FVector2D *, const FLinearColor *>(this, "FCanvasTextItem.DrawStringInternal_RuntimeCache", InCanvas, DrawPos, InColor); }
};

