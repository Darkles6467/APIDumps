#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FCanvasIcon.h"
#include "FCanvasUVTri.h"
#include "FWrappedStringElement.h"

struct UCanvas : UObject
{
	enum ELastCharacterIndexFormat
	{
		LastWholeCharacterBeforeOffset = 0x0,
		CharacterAtOffset = 0x1,
		Unused = 0x2,
	};

	char __padding[0xd8L];
	float& OrgXField() { return *GetNativePointerField<float*>(this, "UCanvas.OrgX"); }
	float& OrgYField() { return *GetNativePointerField<float*>(this, "UCanvas.OrgY"); }
	float& ClipXField() { return *GetNativePointerField<float*>(this, "UCanvas.ClipX"); }
	float& ClipYField() { return *GetNativePointerField<float*>(this, "UCanvas.ClipY"); }
	FColor& DrawColorField() { return *GetNativePointerField<FColor*>(this, "UCanvas.DrawColor"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UCanvas.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "UCanvas.SizeY"); }
	UReporterGraph * ReporterGraphField() { return GetNativePointerField<UReporterGraph *>(this, "UCanvas.ReporterGraph"); }
	int& UnsafeSizeXField() { return *GetNativePointerField<int*>(this, "UCanvas.UnsafeSizeX"); }
	int& UnsafeSizeYField() { return *GetNativePointerField<int*>(this, "UCanvas.UnsafeSizeY"); }
	int& InitSizeXField() { return *GetNativePointerField<int*>(this, "UCanvas.InitSizeX"); }
	int& InitSizeYField() { return *GetNativePointerField<int*>(this, "UCanvas.InitSizeY"); }
	int& SafeZonePadXField() { return *GetNativePointerField<int*>(this, "UCanvas.SafeZonePadX"); }
	int& SafeZonePadYField() { return *GetNativePointerField<int*>(this, "UCanvas.SafeZonePadY"); }
	int& CachedDisplayWidthField() { return *GetNativePointerField<int*>(this, "UCanvas.CachedDisplayWidth"); }
	int& CachedDisplayHeightField() { return *GetNativePointerField<int*>(this, "UCanvas.CachedDisplayHeight"); }
	FCanvas * CanvasField() { return GetNativePointerField<FCanvas *>(this, "UCanvas.Canvas"); }
	FMatrix& ViewProjectionMatrixField() { return *GetNativePointerField<FMatrix*>(this, "UCanvas.ViewProjectionMatrix"); }
	FQuat& HmdOrientationField() { return *GetNativePointerField<FQuat*>(this, "UCanvas.HmdOrientation"); }

	// Functions

	void ApplySafeZoneTransform() { NativeCall<void>(this, "UCanvas.ApplySafeZoneTransform"); }
	float BPDrawTextCentered(UFont * InFont, const FString * InText, float X, float Y, float XScale, float YScale, bool bDoCenterX, bool bDoCenterY) { return NativeCall<float, UFont *, const FString *, float, float, float, float, bool, bool>(this, "UCanvas.BPDrawTextCentered", InFont, InText, X, Y, XScale, YScale, bDoCenterX, bDoCenterY); }
	float BPDrawTextWrapped(UFont * InFont, const FString * InText, float X, float Y, float XWidth, float YWidth, float XScale, float YScale, bool bDoCenterX, bool bDoCenterY, const FVector2D * SpacingAdjust) { return NativeCall<float, UFont *, const FString *, float, float, float, float, float, float, bool, bool, const FVector2D *>(this, "UCanvas.BPDrawTextWrapped", InFont, InText, X, Y, XWidth, YWidth, XScale, YScale, bDoCenterX, bDoCenterY, SpacingAdjust); }
	static void CanvasStringSize(FTextSizingParameters * Parameters, const wchar_t * pText) { NativeCall<void, FTextSizingParameters *, const wchar_t *>(nullptr, "UCanvas.CanvasStringSize", Parameters, pText); }
	FFontRenderInfo * CreateFontRenderInfo(FFontRenderInfo * result, bool bClipText, bool bEnableShadow, FLinearColor GlowColor, FVector2D GlowOuterRadius, FVector2D GlowInnerRadius) { return NativeCall<FFontRenderInfo *, FFontRenderInfo *, bool, bool, FLinearColor, FVector2D, FVector2D>(this, "UCanvas.CreateFontRenderInfo", result, bClipText, bEnableShadow, GlowColor, GlowOuterRadius, GlowInnerRadius); }
	void Deproject(FVector2D ScreenPos, FVector * WorldOrigin, FVector * WorldDirection) { NativeCall<void, FVector2D, FVector *, FVector *>(this, "UCanvas.Deproject", ScreenPos, WorldOrigin, WorldDirection); }
	void DrawDebugGraph(const FString * Title, float ValueX, float ValueY, float UL_X, float UL_Y, float W, float H, FVector2D RangeX, FVector2D RangeY) { NativeCall<void, const FString *, float, float, float, float, float, float, FVector2D, FVector2D>(this, "UCanvas.DrawDebugGraph", Title, ValueX, ValueY, UL_X, UL_Y, W, H, RangeX, RangeY); }
	void DrawIcon(FCanvasIcon Icon, float X, float Y, float Scale) { NativeCall<void, FCanvasIcon, float, float, float>(this, "UCanvas.DrawIcon", Icon, X, Y, Scale); }
	void DrawItem(FCanvasItem * Item) { NativeCall<void, FCanvasItem *>(this, "UCanvas.DrawItem", Item); }
	void DrawItem(FCanvasItem * Item, const FVector2D * InPosition) { NativeCall<void, FCanvasItem *, const FVector2D *>(this, "UCanvas.DrawItem", Item, InPosition); }
	void DrawItem(FCanvasItem * Item, float X, float Y) { NativeCall<void, FCanvasItem *, float, float>(this, "UCanvas.DrawItem", Item, X, Y); }
	float DrawText(UFont * InFont, const FString * InText, float X, float Y, float XScale, float YScale, const FFontRenderInfo * RenderInfo) { return NativeCall<float, UFont *, const FString *, float, float, float, float, const FFontRenderInfo *>(this, "UCanvas.DrawText", InFont, InText, X, Y, XScale, YScale, RenderInfo); }
	float DrawText(UFont * InFont, const FText * InText, float X, float Y, float XScale, float YScale, const FFontRenderInfo * RenderInfo, bool bDoCenterX, bool bDoCenterY, bool bDoWrapReal, float XWidth, float YWidth, FVector2D * SpacingAdjust, int * OutXL) { return NativeCall<float, UFont *, const FText *, float, float, float, float, const FFontRenderInfo *, bool, bool, bool, float, float, FVector2D *, int *>(this, "UCanvas.DrawText", InFont, InText, X, Y, XScale, YScale, RenderInfo, bDoCenterX, bDoCenterY, bDoWrapReal, XWidth, YWidth, SpacingAdjust, OutXL); }
	float DrawTextCentered(UFont * InFont, const FString * InText, float X, float Y, float XScale, float YScale, bool bDoCenterX, bool bDoCenterY, const FFontRenderInfo * RenderInfo) { return NativeCall<float, UFont *, const FString *, float, float, float, float, bool, bool, const FFontRenderInfo *>(this, "UCanvas.DrawTextCentered", InFont, InText, X, Y, XScale, YScale, bDoCenterX, bDoCenterY, RenderInfo); }
	float DrawTextWrapped(UFont * InFont, const FString * InText, float X, float Y, float XWidth, float YWidth, float XScale, float YScale, bool bDoCenterX, bool bDoCenterY, const FVector2D * SpacingAdjust, const FFontRenderInfo * RenderInfo, int * OutXL) { return NativeCall<float, UFont *, const FString *, float, float, float, float, float, float, bool, bool, const FVector2D *, const FFontRenderInfo *, int *>(this, "UCanvas.DrawTextWrapped", InFont, InText, X, Y, XWidth, YWidth, XScale, YScale, bDoCenterX, bDoCenterY, SpacingAdjust, RenderInfo, OutXL); }
	void DrawTile(UTexture * Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, EBlendMode BlendMode) { NativeCall<void, UTexture *, float, float, float, float, float, float, float, float, EBlendMode>(this, "UCanvas.DrawTile", Tex, X, Y, XL, YL, U, V, UL, VL, BlendMode); }
	void Init(int InSizeX, int InSizeY, FSceneView * InSceneView) { NativeCall<void, int, int, FSceneView *>(this, "UCanvas.Init", InSizeX, InSizeY, InSceneView); }
	bool IsPositionInFrontOfViewport(FVector Location) { return NativeCall<bool, FVector>(this, "UCanvas.IsPositionInFrontOfViewport", Location); }
	void K2_Deproject(FVector2D ScreenPosition, FVector * WorldOrigin, FVector * WorldDirection) { NativeCall<void, FVector2D, FVector *, FVector *>(this, "UCanvas.K2_Deproject", ScreenPosition, WorldOrigin, WorldDirection); }
	void K2_DrawBorder(UTexture * BorderTexture, UTexture * BackgroundTexture, UTexture * LeftBorderTexture, UTexture * RightBorderTexture, UTexture * TopBorderTexture, UTexture * BottomBorderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, FVector2D BorderScale, FVector2D BackgroundScale, float Rotation, FVector2D PivotPoint, FVector2D CornerSize) { NativeCall<void, UTexture *, UTexture *, UTexture *, UTexture *, UTexture *, UTexture *, FVector2D, FVector2D, FVector2D, FVector2D, FLinearColor, FVector2D, FVector2D, float, FVector2D, FVector2D>(this, "UCanvas.K2_DrawBorder", BorderTexture, BackgroundTexture, LeftBorderTexture, RightBorderTexture, TopBorderTexture, BottomBorderTexture, ScreenPosition, ScreenSize, CoordinatePosition, CoordinateSize, RenderColor, BorderScale, BackgroundScale, Rotation, PivotPoint, CornerSize); }
	void K2_DrawBox(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness) { NativeCall<void, FVector2D, FVector2D, float>(this, "UCanvas.K2_DrawBox", ScreenPosition, ScreenSize, Thickness); }
	void K2_DrawBoxEx(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness, FLinearColor RenderColor, EBlendMode BlendingMode) { NativeCall<void, FVector2D, FVector2D, float, FLinearColor, EBlendMode>(this, "UCanvas.K2_DrawBoxEx", ScreenPosition, ScreenSize, Thickness, RenderColor, BlendingMode); }
	void K2_DrawLine(FVector2D ScreenPositionA, FVector2D ScreenPositionB, float Thickness, FLinearColor RenderColor) { NativeCall<void, FVector2D, FVector2D, float, FLinearColor>(this, "UCanvas.K2_DrawLine", ScreenPositionA, ScreenPositionB, Thickness, RenderColor); }
	void K2_DrawMaterial(UMaterialInterface * RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint) { NativeCall<void, UMaterialInterface *, FVector2D, FVector2D, FVector2D, FVector2D, float, FVector2D>(this, "UCanvas.K2_DrawMaterial", RenderMaterial, ScreenPosition, ScreenSize, CoordinatePosition, CoordinateSize, Rotation, PivotPoint); }
	void K2_DrawPolygon(UTexture * RenderTexture, FVector2D ScreenPosition, FVector2D Radius, int NumberOfSides, FLinearColor RenderColor) { NativeCall<void, UTexture *, FVector2D, FVector2D, int, FLinearColor>(this, "UCanvas.K2_DrawPolygon", RenderTexture, ScreenPosition, Radius, NumberOfSides, RenderColor); }
	void K2_DrawText(UFont * RenderFont, const FString * RenderText, FVector2D ScreenPosition, FLinearColor RenderColor, float Kerning, FLinearColor ShadowColor, FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, FLinearColor OutlineColor) { NativeCall<void, UFont *, const FString *, FVector2D, FLinearColor, float, FLinearColor, FVector2D, bool, bool, bool, FLinearColor>(this, "UCanvas.K2_DrawText", RenderFont, RenderText, ScreenPosition, RenderColor, Kerning, ShadowColor, ShadowOffset, bCentreX, bCentreY, bOutlined, OutlineColor); }
	void K2_DrawTexture(UTexture * RenderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, EBlendMode BlendMode, float Rotation, FVector2D PivotPoint) { NativeCall<void, UTexture *, FVector2D, FVector2D, FVector2D, FVector2D, FLinearColor, EBlendMode, float, FVector2D>(this, "UCanvas.K2_DrawTexture", RenderTexture, ScreenPosition, ScreenSize, CoordinatePosition, CoordinateSize, RenderColor, BlendMode, Rotation, PivotPoint); }
	void K2_DrawTriangle(UTexture * RenderTexture, TArray<FCanvasUVTri> Triangles) { NativeCall<void, UTexture *, TArray<FCanvasUVTri>>(this, "UCanvas.K2_DrawTriangle", RenderTexture, Triangles); }
	FVector * K2_Project(FVector * result, FVector WorldLocation) { return NativeCall<FVector *, FVector *, FVector>(this, "UCanvas.K2_Project", result, WorldLocation); }
	FVector2D * K2_StrLen(FVector2D * result, UFont * RenderFont, const FString * RenderText) { return NativeCall<FVector2D *, FVector2D *, UFont *, const FString *>(this, "UCanvas.K2_StrLen", result, RenderFont, RenderText); }
	FVector2D * K2_TextSize(FVector2D * result, UFont * RenderFont, const FString * RenderText, FVector2D Scale) { return NativeCall<FVector2D *, FVector2D *, UFont *, const FString *, FVector2D>(this, "UCanvas.K2_TextSize", result, RenderFont, RenderText, Scale); }
	static FCanvasIcon * MakeIcon(FCanvasIcon * result, UTexture * Texture, float U, float V, float UL, float VL) { return NativeCall<FCanvasIcon *, FCanvasIcon *, UTexture *, float, float, float, float>(nullptr, "UCanvas.MakeIcon", result, Texture, U, V, UL, VL); }
	static void MeasureStringInternal(FTextSizingParameters * Parameters, const wchar_t *const pText, const int TextLength, const int StopAfterHorizontalOffset, const UCanvas::ELastCharacterIndexFormat CharIndexFormat, int * OutLastCharacterIndex) { NativeCall<void, FTextSizingParameters *, const wchar_t *const, const int, const int, const UCanvas::ELastCharacterIndexFormat, int *>(nullptr, "UCanvas.MeasureStringInternal", Parameters, pText, TextLength, StopAfterHorizontalOffset, CharIndexFormat, OutLastCharacterIndex); }
	void PopSafeZoneTransform() { NativeCall<void>(this, "UCanvas.PopSafeZoneTransform"); }
	FVector * Project(FVector * result, FVector Location) { return NativeCall<FVector *, FVector *, FVector>(this, "UCanvas.Project", result, Location); }
	void Reset(bool bKeepOrigin) { NativeCall<void, bool>(this, "UCanvas.Reset", bKeepOrigin); }
	void SetDrawColor(const FColor * C) { NativeCall<void, const FColor *>(this, "UCanvas.SetDrawColor", C); }
	void SetDrawColor(char R, char G, char B, char A) { NativeCall<void, char, char, char, char>(this, "UCanvas.SetDrawColor", R, G, B, A); }
	void SetLinearDrawColor(FLinearColor InColor, float OpacityOverride) { NativeCall<void, FLinearColor, float>(this, "UCanvas.SetLinearDrawColor", InColor, OpacityOverride); }
	void SetView(FSceneView * InView) { NativeCall<void, FSceneView *>(this, "UCanvas.SetView", InView); }
	void StrLen(UFont * InFont, const FString * InText, float * XL, float * YL) { NativeCall<void, UFont *, const FString *, float *, float *>(this, "UCanvas.StrLen", InFont, InText, XL, YL); }
	void TextSize(UFont * InFont, const FString * InText, float * XL, float * YL, float ScaleX, float ScaleY) { NativeCall<void, UFont *, const FString *, float *, float *, float, float>(this, "UCanvas.TextSize", InFont, InText, XL, YL, ScaleX, ScaleY); }
	void Update() { NativeCall<void>(this, "UCanvas.Update"); }
	void UpdateSafeZoneData() { NativeCall<void>(this, "UCanvas.UpdateSafeZoneData"); }
	static void WrapString(FTextSizingParameters * Parameters, const float InCurX, const wchar_t *const pText, TArray<FWrappedStringElement> * out_Lines, TArray<TPair<int,int>> *const OutWrappedLineData) { NativeCall<void, FTextSizingParameters *, const float, const wchar_t *const, TArray<FWrappedStringElement> *, TArray<TPair<int,int>> *const>(nullptr, "UCanvas.WrapString", Parameters, InCurX, pText, out_Lines, OutWrappedLineData); }
	int WrappedPrint(bool Draw, float X, float Y, int * out_XL, int * out_YL, UFont * Font, float ScaleX, float ScaleY, bool bCenterTextX, bool bCenterTextY, const wchar_t * Text, const FFontRenderInfo * RenderInfo) { return NativeCall<int, bool, float, float, int *, int *, UFont *, float, float, bool, bool, const wchar_t *, const FFontRenderInfo *>(this, "UCanvas.WrappedPrint", Draw, X, Y, out_XL, out_YL, Font, ScaleX, ScaleY, bCenterTextX, bCenterTextY, Text, RenderInfo); }
	int WrappedPrintReal(bool Draw, float X, float Y, float XWidth, float YWidth, int * out_XL, int * out_YL, UFont * Font, float ScaleX, float ScaleY, bool bCenterTextX, bool bCenterTextY, const wchar_t * Text, const FFontRenderInfo * RenderInfo, FVector2D * SpacingAdjust) { return NativeCall<int, bool, float, float, float, float, int *, int *, UFont *, float, float, bool, bool, const wchar_t *, const FFontRenderInfo *, FVector2D *>(this, "UCanvas.WrappedPrintReal", Draw, X, Y, XWidth, YWidth, out_XL, out_YL, Font, ScaleX, ScaleY, bCenterTextX, bCenterTextY, Text, RenderInfo, SpacingAdjust); }
};

