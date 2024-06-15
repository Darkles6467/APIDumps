#pragma once

#include "BaseDeclarations.h"
#include "ICustomSlateElement.h"
#include "FSlateGradientStop.h"

struct FSlateDrawElement
{
	enum ERotationSpace
	{
		RelativeToElement = 0x0,
		RelativeToWorld = 0x1,
	};

	enum EElementType
	{
		ET_Box = 0x0,
		ET_DebugQuad = 0x1,
		ET_Text = 0x2,
		ET_Spline = 0x3,
		ET_Line = 0x4,
		ET_Gradient = 0x5,
		ET_Viewport = 0x6,
		ET_Border = 0x7,
		ET_Custom = 0x8,
	};

	char __padding[0x128L];
	FSlateDataPayload& DataPayloadField() { return *GetNativePointerField<FSlateDataPayload*>(this, "FSlateDrawElement.DataPayload"); }
	FTransform2D& RenderTransformField() { return *GetNativePointerField<FTransform2D*>(this, "FSlateDrawElement.RenderTransform"); }
	FSlateRect& ClippingRectField() { return *GetNativePointerField<FSlateRect*>(this, "FSlateDrawElement.ClippingRect"); }
	FVector2D& PositionField() { return *GetNativePointerField<FVector2D*>(this, "FSlateDrawElement.Position"); }
	FVector2D& LocalSizeField() { return *GetNativePointerField<FVector2D*>(this, "FSlateDrawElement.LocalSize"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "FSlateDrawElement.Scale"); }
	unsigned int& LayerField() { return *GetNativePointerField<unsigned int*>(this, "FSlateDrawElement.Layer"); }
	unsigned int& DrawEffectsField() { return *GetNativePointerField<unsigned int*>(this, "FSlateDrawElement.DrawEffects"); }
	FSlateDrawElement::EElementType& ElementTypeField() { return *GetNativePointerField<FSlateDrawElement::EElementType*>(this, "FSlateDrawElement.ElementType"); }
	bool& bDisableInternalClippingField() { return *GetNativePointerField<bool*>(this, "FSlateDrawElement.bDisableInternalClipping"); }
	TOptional<FShortRect>& ScissorRectField() { return *GetNativePointerField<TOptional<FShortRect>*>(this, "FSlateDrawElement.ScissorRect"); }

	// Functions

	void Init(unsigned int InLayer, const FPaintGeometry * PaintGeometry, const FSlateRect * InClippingRect, char InDrawEffects) { NativeCall<void, unsigned int, const FPaintGeometry *, const FSlateRect *, char>(this, "FSlateDrawElement.Init", InLayer, PaintGeometry, InClippingRect, InDrawEffects); }
	static void MakeBox(FSlateWindowElementList * ElementList, unsigned int InLayer, const FPaintGeometry * PaintGeometry, const FSlateBrush * InBrush, const FSlateRect * InClippingRect, char InDrawEffects, const FLinearColor * InTint) { NativeCall<void, FSlateWindowElementList *, unsigned int, const FPaintGeometry *, const FSlateBrush *, const FSlateRect *, char, const FLinearColor *>(nullptr, "FSlateDrawElement.MakeBox", ElementList, InLayer, PaintGeometry, InBrush, InClippingRect, InDrawEffects, InTint); }
	static void MakeCustom(FSlateWindowElementList * ElementList, unsigned int InLayer, const FTransform2D * InRenderTransform, const FPaintGeometry * InPaintGeometry, const FSlateRect * InClippingRect, TSharedPtr<ICustomSlateElement,1> CustomDrawer) { NativeCall<void, FSlateWindowElementList *, unsigned int, const FTransform2D *, const FPaintGeometry *, const FSlateRect *, TSharedPtr<ICustomSlateElement,1>>(nullptr, "FSlateDrawElement.MakeCustom", ElementList, InLayer, InRenderTransform, InPaintGeometry, InClippingRect, CustomDrawer); }
	static void MakeCustom(FSlateWindowElementList * ElementList, unsigned int InLayer, TSharedPtr<ICustomSlateElement,1> CustomDrawer) { NativeCall<void, FSlateWindowElementList *, unsigned int, TSharedPtr<ICustomSlateElement,1>>(nullptr, "FSlateDrawElement.MakeCustom", ElementList, InLayer, CustomDrawer); }
	static void MakeGradient(FSlateWindowElementList * ElementList, unsigned int InLayer, const FPaintGeometry * PaintGeometry, TArray<FSlateGradientStop> InGradientStops, EOrientation InGradientType, const FSlateRect * InClippingRect, char InDrawEffects, bool bGammaCorrect) { NativeCall<void, FSlateWindowElementList *, unsigned int, const FPaintGeometry *, TArray<FSlateGradientStop>, EOrientation, const FSlateRect *, char, bool>(nullptr, "FSlateDrawElement.MakeGradient", ElementList, InLayer, PaintGeometry, InGradientStops, InGradientType, InClippingRect, InDrawEffects, bGammaCorrect); }
	static void MakeLines(FSlateWindowElementList * ElementList, unsigned int InLayer, const FPaintGeometry * PaintGeometry, const TArray<FVector2D> * Points, const FSlateRect InClippingRect, char InDrawEffects, const FLinearColor * InTint, bool bAntialias) { NativeCall<void, FSlateWindowElementList *, unsigned int, const FPaintGeometry *, const TArray<FVector2D> *, const FSlateRect, char, const FLinearColor *, bool>(nullptr, "FSlateDrawElement.MakeLines", ElementList, InLayer, PaintGeometry, Points, InClippingRect, InDrawEffects, InTint, bAntialias); }
	static void MakeText(FSlateWindowElementList * ElementList, unsigned int InLayer, const FPaintGeometry * PaintGeometry, const FString * InText, const FSlateFontInfo * InFontInfo, const FSlateRect * InClippingRect, char InDrawEffects, const FLinearColor * InTint, bool bDisableInternalClipping) { NativeCall<void, FSlateWindowElementList *, unsigned int, const FPaintGeometry *, const FString *, const FSlateFontInfo *, const FSlateRect *, char, const FLinearColor *, bool>(nullptr, "FSlateDrawElement.MakeText", ElementList, InLayer, PaintGeometry, InText, InFontInfo, InClippingRect, InDrawEffects, InTint, bDisableInternalClipping); }
	static void MakeText(FSlateWindowElementList * ElementList, unsigned int InLayer, const FPaintGeometry * PaintGeometry, const FString * InText, const int StartIndex, const int EndIndex, const FSlateFontInfo * InFontInfo, const FSlateRect * InClippingRect, char InDrawEffects, const FLinearColor * InTint, bool bDisableInternalClipping) { NativeCall<void, FSlateWindowElementList *, unsigned int, const FPaintGeometry *, const FString *, const int, const int, const FSlateFontInfo *, const FSlateRect *, char, const FLinearColor *, bool>(nullptr, "FSlateDrawElement.MakeText", ElementList, InLayer, PaintGeometry, InText, StartIndex, EndIndex, InFontInfo, InClippingRect, InDrawEffects, InTint, bDisableInternalClipping); }
	static void MakeViewport(FSlateWindowElementList * ElementList, unsigned int InLayer, const FPaintGeometry * PaintGeometry, TSharedPtr<ISlateViewport const ,0> Viewport, const FSlateRect * InClippingRect, bool bGammaCorrect, bool bAllowBlending, char InDrawEffects, const FLinearColor * InTint) { NativeCall<void, FSlateWindowElementList *, unsigned int, const FPaintGeometry *, TSharedPtr<ISlateViewport const ,0>, const FSlateRect *, bool, bool, char, const FLinearColor *>(nullptr, "FSlateDrawElement.MakeViewport", ElementList, InLayer, PaintGeometry, Viewport, InClippingRect, bGammaCorrect, bAllowBlending, InDrawEffects, InTint); }
};

