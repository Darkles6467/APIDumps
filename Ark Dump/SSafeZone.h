#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "FMargin.h"
#include "FOptionalSize.h"

struct SBox : SPanel
{
	char __padding[0xd8L];
	TAttribute<FOptionalSize>& WidthOverrideField() { return *GetNativePointerField<TAttribute<FOptionalSize>*>(this, "SBox.WidthOverride"); }
	TAttribute<FOptionalSize>& HeightOverrideField() { return *GetNativePointerField<TAttribute<FOptionalSize>*>(this, "SBox.HeightOverride"); }
	TAttribute<FOptionalSize>& MinDesiredWidthField() { return *GetNativePointerField<TAttribute<FOptionalSize>*>(this, "SBox.MinDesiredWidth"); }
	TAttribute<FOptionalSize>& MinDesiredHeightField() { return *GetNativePointerField<TAttribute<FOptionalSize>*>(this, "SBox.MinDesiredHeight"); }
	TAttribute<FOptionalSize>& MaxDesiredWidthField() { return *GetNativePointerField<TAttribute<FOptionalSize>*>(this, "SBox.MaxDesiredWidth"); }
	TAttribute<FOptionalSize>& MaxDesiredHeightField() { return *GetNativePointerField<TAttribute<FOptionalSize>*>(this, "SBox.MaxDesiredHeight"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SBox.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SBox.FArguments"); }
	void FBoxSlot() { NativeCall<void>(this, "SBox.FBoxSlot"); }
	void FBoxSlot() { NativeCall<void>(this, "SBox.FBoxSlot"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SBox.ComputeDesiredSize", result); }
	void Construct(const SBox::FArguments * InArgs) { NativeCall<void, const SBox::FArguments *>(this, "SBox.Construct", InArgs); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SBox.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SBox.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetContent(const TSharedRef<SWidget,0> * InContent) { NativeCall<void, const TSharedRef<SWidget,0> *>(this, "SBox.SetContent", InContent); }
	void SetHeightOverride(TAttribute<FOptionalSize> InHeightOverride) { NativeCall<void, TAttribute<FOptionalSize>>(this, "SBox.SetHeightOverride", InHeightOverride); }
	void SetMaxDesiredHeight(TAttribute<FOptionalSize> InMaxDesiredHeight) { NativeCall<void, TAttribute<FOptionalSize>>(this, "SBox.SetMaxDesiredHeight", InMaxDesiredHeight); }
	void SetMaxDesiredWidth(TAttribute<FOptionalSize> InMaxDesiredWidth) { NativeCall<void, TAttribute<FOptionalSize>>(this, "SBox.SetMaxDesiredWidth", InMaxDesiredWidth); }
	void SetMinDesiredHeight(TAttribute<FOptionalSize> InMinDesiredHeight) { NativeCall<void, TAttribute<FOptionalSize>>(this, "SBox.SetMinDesiredHeight", InMinDesiredHeight); }
	void SetMinDesiredWidth(TAttribute<FOptionalSize> InMinDesiredWidth) { NativeCall<void, TAttribute<FOptionalSize>>(this, "SBox.SetMinDesiredWidth", InMinDesiredWidth); }
	void SetVAlign(EVerticalAlignment VAlign) { NativeCall<void, EVerticalAlignment>(this, "SBox.SetVAlign", VAlign); }
	void SetWidthOverride(TAttribute<FOptionalSize> InWidthOverride) { NativeCall<void, TAttribute<FOptionalSize>>(this, "SBox.SetWidthOverride", InWidthOverride); }
};

struct SSafeZone : SBox
{
	char __padding[0x28L];
	TAttribute<FMargin>& PaddingField() { return *GetNativePointerField<TAttribute<FMargin>*>(this, "SSafeZone.Padding"); }
	bool& IsTitleSafeField() { return *GetNativePointerField<bool*>(this, "SSafeZone.IsTitleSafe"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SSafeZone.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SSafeZone.FArguments"); }
	SSafeZone::FArguments * FArguments(const TSharedRef<SWidget,0> InChild) { return NativeCall<SSafeZone::FArguments *, const TSharedRef<SWidget,0>>(this, "SSafeZone.FArguments", InChild); }
	void Construct(const SSafeZone::FArguments * InArgs) { NativeCall<void, const SSafeZone::FArguments *>(this, "SSafeZone.Construct", InArgs); }
	FMargin * GetSafeZonePadding(FMargin * result) { return NativeCall<FMargin *, FMargin *>(this, "SSafeZone.GetSafeZonePadding", result); }
	SSafeZone::FArguments * FArguments(EHorizontalAlignment InArg) { return NativeCall<SSafeZone::FArguments *, EHorizontalAlignment>(this, "SSafeZone.FArguments", InArg); }
	SSafeZone::FArguments * FArguments(bool InArg) { return NativeCall<SSafeZone::FArguments *, bool>(this, "SSafeZone.FArguments", InArg); }
	SSafeZone::FArguments * FArguments(const TAttribute<FMargin> * InAttribute) { return NativeCall<SSafeZone::FArguments *, const TAttribute<FMargin> *>(this, "SSafeZone.FArguments", InAttribute); }
	SSafeZone::FArguments * FArguments(EVerticalAlignment InArg) { return NativeCall<SSafeZone::FArguments *, EVerticalAlignment>(this, "SSafeZone.FArguments", InArg); }
};

