#pragma once

#include "BaseDeclarations.h"
#include "UButton.h"

struct UCustomCanvasWidget : UButton
{
	char __padding[0x50L];
	bool& bOverrideScreenCanvasProjectionField() { return *GetNativePointerField<bool*>(this, "UCustomCanvasWidget.bOverrideScreenCanvasProjection"); }
	bool& bIgnoreParentAlphaField() { return *GetNativePointerField<bool*>(this, "UCustomCanvasWidget.bIgnoreParentAlpha"); }
	TSharedPtr<SCustomCanvasWidget,0>& SlateCustomItemField() { return *GetNativePointerField<TSharedPtr<SCustomCanvasWidget,0>*>(this, "UCustomCanvasWidget.SlateCustomItem"); }
	FLinearColor& CurrentParentTintColorAndOpacityField() { return *GetNativePointerField<FLinearColor*>(this, "UCustomCanvasWidget.CurrentParentTintColorAndOpacity"); }
	FLinearColor& OriginalParentTintColorField() { return *GetNativePointerField<FLinearColor*>(this, "UCustomCanvasWidget.OriginalParentTintColor"); }

	// Functions

	void DrawBoxTile(FCanvas * fcanvas, const FSlateRect * rect, const FMargin * margin, FTexture * fillTexture, FTexture * borderTexture, const FLinearColor * tintFill, const FLinearColor * tintBorder, bool bUseMarginOnFillTextureUVs) { NativeCall<void, FCanvas *, const FSlateRect *, const FMargin *, FTexture *, FTexture *, const FLinearColor *, const FLinearColor *, bool>(this, "UCustomCanvasWidget.DrawBoxTile", fcanvas, rect, margin, fillTexture, borderTexture, tintFill, tintBorder, bUseMarginOnFillTextureUVs); }
	void DrawMaterial(UCanvas * ucanvas, UMaterialInterface * RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint, const FLinearColor * pOverrideTintColor) { NativeCall<void, UCanvas *, UMaterialInterface *, FVector2D, FVector2D, FVector2D, FVector2D, float, FVector2D, const FLinearColor *>(this, "UCustomCanvasWidget.DrawMaterial", ucanvas, RenderMaterial, ScreenPosition, ScreenSize, CoordinatePosition, CoordinateSize, Rotation, PivotPoint, pOverrideTintColor); }
	void DrawTileFromBrush(FCanvas * fcanvas, const FSlateBrush * brush, const FSlateRect * rect, bool bIgnoreBorder, bool bIgnoreFill) { NativeCall<void, FCanvas *, const FSlateBrush *, const FSlateRect *, bool, bool>(this, "UCustomCanvasWidget.DrawTileFromBrush", fcanvas, brush, rect, bIgnoreBorder, bIgnoreFill); }
	void DrawWidget(FCanvas * canvas, const FVector2D * scale, const FLinearColor * tintColor, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, const FVector2D *, const FLinearColor *, FIntRect *, bool>(this, "UCustomCanvasWidget.DrawWidget", canvas, scale, tintColor, ScissorRect, bParentEnabled); }
	FLinearColor * GetTintColor(FLinearColor * result, const FLinearColor * color) { return NativeCall<FLinearColor *, FLinearColor *, const FLinearColor *>(this, "UCustomCanvasWidget.GetTintColor", result, color); }
	int OnPaint(const FPaintArgs * Args, FPaintContext * Context, const FSlateRect * MyClippingRectRenderTransform) { return NativeCall<int, const FPaintArgs *, FPaintContext *, const FSlateRect *>(this, "UCustomCanvasWidget.OnPaint", Args, Context, MyClippingRectRenderTransform); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UCustomCanvasWidget.ReleaseSlateResources", bReleaseChildren); }
	FLinearColor * TintColor(FLinearColor * result, const FLinearColor * color, float AlphaFactor) { return NativeCall<FLinearColor *, FLinearColor *, const FLinearColor *, float>(this, "UCustomCanvasWidget.TintColor", result, color, AlphaFactor); }
	void NativeTick(const FGeometry * MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry *, float>(this, "UCustomCanvasWidget.NativeTick", MyGeometry, InDeltaTime); }
};

