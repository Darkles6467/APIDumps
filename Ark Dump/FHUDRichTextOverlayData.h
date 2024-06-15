#pragma once

#include "BaseDeclarations.h"
struct FHUDRichTextOverlayData
{
	char __padding[0x60L];
	FString& DisplayTextField() { return *GetNativePointerField<FString*>(this, "FHUDRichTextOverlayData.DisplayText"); }
	FLinearColor& DefaultTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "FHUDRichTextOverlayData.DefaultTextColor"); }
	FVector2D& PositionField() { return *GetNativePointerField<FVector2D*>(this, "FHUDRichTextOverlayData.Position"); }
	TEnumAsByte<enum ETextJustify::Type>& TextAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum ETextJustify::Type>*>(this, "FHUDRichTextOverlayData.TextAlignment"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalScreenAnchorField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "FHUDRichTextOverlayData.HorizontalScreenAnchor"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalScreenAnchorField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "FHUDRichTextOverlayData.VerticalScreenAnchor"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalWidgetAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "FHUDRichTextOverlayData.HorizontalWidgetAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalWidgetAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "FHUDRichTextOverlayData.VerticalWidgetAlignment"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "FHUDRichTextOverlayData.Scale"); }
	FVector2D& AutoSizeOverrideField() { return *GetNativePointerField<FVector2D*>(this, "FHUDRichTextOverlayData.AutoSizeOverride"); }
	FGuid& IDField() { return *GetNativePointerField<FGuid*>(this, "FHUDRichTextOverlayData.ID"); }

	// Functions

	FHUDRichTextOverlayData * operator=(const FHUDRichTextOverlayData * __that) { return NativeCall<FHUDRichTextOverlayData *, const FHUDRichTextOverlayData *>(this, "FHUDRichTextOverlayData.operator=", __that); }
	void SetHUDRichTextOverlayDisplayText(FString InString) { NativeCall<void, FString>(this, "FHUDRichTextOverlayData.SetHUDRichTextOverlayDisplayText", InString); }
	void SetHUDRichTextOverlayHorizontalScreenAnchor(TEnumAsByte<enum EHorizontalAlignment> InAlignH) { NativeCall<void, TEnumAsByte<enum EHorizontalAlignment>>(this, "FHUDRichTextOverlayData.SetHUDRichTextOverlayHorizontalScreenAnchor", InAlignH); }
	void SetHUDRichTextOverlayInstigator(AActor * InInstigator) { NativeCall<void, AActor *>(this, "FHUDRichTextOverlayData.SetHUDRichTextOverlayInstigator", InInstigator); }
	void SetHUDRichTextOverlayPosition(FVector2D InPosition) { NativeCall<void, FVector2D>(this, "FHUDRichTextOverlayData.SetHUDRichTextOverlayPosition", InPosition); }
	void SetHUDRichTextOverlayScale(float InScale) { NativeCall<void, float>(this, "FHUDRichTextOverlayData.SetHUDRichTextOverlayScale", InScale); }
	void SetHUDRichTextOverlayVerticalWidgetAlignment(TEnumAsByte<enum EVerticalAlignment> InAlignV) { NativeCall<void, TEnumAsByte<enum EVerticalAlignment>>(this, "FHUDRichTextOverlayData.SetHUDRichTextOverlayVerticalWidgetAlignment", InAlignV); }
	void SetHUDRichTextOverlayUseAutoWrap(bool InAutoWrap) { NativeCall<void, bool>(this, "FHUDRichTextOverlayData.SetHUDRichTextOverlayUseAutoWrap", InAutoWrap); }
};

