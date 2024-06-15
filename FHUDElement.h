#pragma once

#include "BaseDeclarations.h"
struct FHUDElement
{
	char __padding[0x150L];
	TEnumAsByte<enum EHUDElementType::Type>& TypeField() { return *GetNativePointerField<TEnumAsByte<enum EHUDElementType::Type>*>(this, "FHUDElement.Type"); }
	FString& TitleField() { return *GetNativePointerField<FString*>(this, "FHUDElement.Title"); }
	TEnumAsByte<enum ETextJustify::Type>& TextAlignment_TitleField() { return *GetNativePointerField<TEnumAsByte<enum ETextJustify::Type>*>(this, "FHUDElement.TextAlignment_Title"); }
	FString& LabelField() { return *GetNativePointerField<FString*>(this, "FHUDElement.Label"); }
	TEnumAsByte<enum ETextJustify::Type>& TextAlignment_LabelField() { return *GetNativePointerField<TEnumAsByte<enum ETextJustify::Type>*>(this, "FHUDElement.TextAlignment_Label"); }
	TEnumAsByte<enum EHUDElementHorizontalAlignment::Type>& TextContainerHorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHUDElementHorizontalAlignment::Type>*>(this, "FHUDElement.TextContainerHorizontalAlignment"); }
	TEnumAsByte<enum EHUDElementVerticalAlignment::Type>& TextContainerVerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHUDElementVerticalAlignment::Type>*>(this, "FHUDElement.TextContainerVerticalAlignment"); }
	int& ZOrderField() { return *GetNativePointerField<int*>(this, "FHUDElement.ZOrder"); }
	float& ProgressField() { return *GetNativePointerField<float*>(this, "FHUDElement.Progress"); }
	FLinearColor& TextColorField() { return *GetNativePointerField<FLinearColor*>(this, "FHUDElement.TextColor"); }
	float& TextScaleField() { return *GetNativePointerField<float*>(this, "FHUDElement.TextScale"); }
	FMargin& TextPaddingField() { return *GetNativePointerField<FMargin*>(this, "FHUDElement.TextPadding"); }
	FLinearColor& BackgroundImageColorField() { return *GetNativePointerField<FLinearColor*>(this, "FHUDElement.BackgroundImageColor"); }
	FLinearColor& ProgressColorField() { return *GetNativePointerField<FLinearColor*>(this, "FHUDElement.ProgressColor"); }
	TEnumAsByte<enum EProgressBarFillType::Type>& ProgressBarFillTypeField() { return *GetNativePointerField<TEnumAsByte<enum EProgressBarFillType::Type>*>(this, "FHUDElement.ProgressBarFillType"); }
	TEnumAsByte<enum EHUDElementAnchorMode::Type>& AnchorModeField() { return *GetNativePointerField<TEnumAsByte<enum EHUDElementAnchorMode::Type>*>(this, "FHUDElement.AnchorMode"); }
	FAnchors& AnchorField() { return *GetNativePointerField<FAnchors*>(this, "FHUDElement.Anchor"); }
	FVector2D& LocationField() { return *GetNativePointerField<FVector2D*>(this, "FHUDElement.Location"); }
	FVector2D& LocationAtMinScaleField() { return *GetNativePointerField<FVector2D*>(this, "FHUDElement.LocationAtMinScale"); }
	FVector2D& LocationAtDefaultScaleField() { return *GetNativePointerField<FVector2D*>(this, "FHUDElement.LocationAtDefaultScale"); }
	FVector2D& LocationAtMaxScaleField() { return *GetNativePointerField<FVector2D*>(this, "FHUDElement.LocationAtMaxScale"); }
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FHUDElement.Size"); }
	FVector2D& ScaleField() { return *GetNativePointerField<FVector2D*>(this, "FHUDElement.Scale"); }
	FMargin& ProgressBarPaddingField() { return *GetNativePointerField<FMargin*>(this, "FHUDElement.ProgressBarPadding"); }
	FVector2D& ProgressBarScaleField() { return *GetNativePointerField<FVector2D*>(this, "FHUDElement.ProgressBarScale"); }
	FVector2D& IconSizeField() { return *GetNativePointerField<FVector2D*>(this, "FHUDElement.IconSize"); }
	FVector2D& IconScaleField() { return *GetNativePointerField<FVector2D*>(this, "FHUDElement.IconScale"); }
	FLinearColor& IconColorField() { return *GetNativePointerField<FLinearColor*>(this, "FHUDElement.IconColor"); }
	FMargin& IconPaddingField() { return *GetNativePointerField<FMargin*>(this, "FHUDElement.IconPadding"); }
	float& IconRotationField() { return *GetNativePointerField<float*>(this, "FHUDElement.IconRotation"); }
	FMargin& ProgressBarFillImageMarginField() { return *GetNativePointerField<FMargin*>(this, "FHUDElement.ProgressBarFillImageMargin"); }
	FMargin& ProgressBarBackgroundImageMarginField() { return *GetNativePointerField<FMargin*>(this, "FHUDElement.ProgressBarBackgroundImageMargin"); }

	// Functions

	FHUDElement * operator=(const FHUDElement * __that) { return NativeCall<FHUDElement *, const FHUDElement *>(this, "FHUDElement.operator=", __that); }
};

