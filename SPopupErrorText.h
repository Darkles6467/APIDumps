#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SWindow.h"

struct SMenuAnchor : SPanel
{
	enum EMethod
	{
		CreateNewWindow = 0x0,
		UseCurrentWindow = 0x1,
	};

	char __padding[0x78L];
	TWeakPtr<SWindow,0>& PopupWindowPtrField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "SMenuAnchor.PopupWindowPtr"); }
	TAttribute<enum EMenuPlacement>& PlacementField() { return *GetNativePointerField<TAttribute<enum EMenuPlacement>*>(this, "SMenuAnchor.Placement"); }
	FVector2D& PaddingField() { return *GetNativePointerField<FVector2D*>(this, "SMenuAnchor.Padding"); }
	bool& bDismissedThisTickField() { return *GetNativePointerField<bool*>(this, "SMenuAnchor.bDismissedThisTick"); }
	bool& IgnoreClicksOutsideField() { return *GetNativePointerField<bool*>(this, "SMenuAnchor.IgnoreClicksOutside"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SMenuAnchor.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SMenuAnchor.FArguments"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SMenuAnchor.ComputeDesiredSize", result); }
	FGeometry * ComputeMenuPlacement(FGeometry * result, const FGeometry * AllottedGeometry, const FVector2D * PopupDesiredSize, EMenuPlacement PlacementMode) { return NativeCall<FGeometry *, FGeometry *, const FGeometry *, const FVector2D *, EMenuPlacement>(this, "SMenuAnchor.ComputeMenuPlacement", result, AllottedGeometry, PopupDesiredSize, PlacementMode); }
	void Construct(const SMenuAnchor::FArguments * InArgs) { NativeCall<void, const SMenuAnchor::FArguments *>(this, "SMenuAnchor.Construct", InArgs); }
	bool GetIgnoreClicksOutside() { return NativeCall<bool>(this, "SMenuAnchor.GetIgnoreClicksOutside"); }
	FVector2D * GetMenuPosition(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SMenuAnchor.GetMenuPosition", result); }
	bool IsOpen() { return NativeCall<bool>(this, "SMenuAnchor.IsOpen"); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SMenuAnchor.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	void OnClickedOutsidePopup() { NativeCall<void>(this, "SMenuAnchor.OnClickedOutsidePopup"); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SMenuAnchor.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void RequestClosePopupWindow(const TSharedRef<SWindow,0> * PopupWindow) { NativeCall<void, const TSharedRef<SWindow,0> *>(this, "SMenuAnchor.RequestClosePopupWindow", PopupWindow); }
	void SetContent(TSharedRef<SWidget,0> InContent) { NativeCall<void, TSharedRef<SWidget,0>>(this, "SMenuAnchor.SetContent", InContent); }
	void SetIgnoreClicksOutside(bool Ignore) { NativeCall<void, bool>(this, "SMenuAnchor.SetIgnoreClicksOutside", Ignore); }
	void SetIsOpen(bool InIsOpen, const bool bFocusMenu) { NativeCall<void, bool, const bool>(this, "SMenuAnchor.SetIsOpen", InIsOpen, bFocusMenu); }
	void SetPadding(const FVector2D * pad) { NativeCall<void, const FVector2D *>(this, "SMenuAnchor.SetPadding", pad); }
	bool ShouldOpenDueToClick() { return NativeCall<bool>(this, "SMenuAnchor.ShouldOpenDueToClick"); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SMenuAnchor.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
};

struct SComboButton : SMenuAnchor
{
	char __padding[0x58L];
	FMargin& MenuBorderPaddingField() { return *GetNativePointerField<FMargin*>(this, "SComboButton.MenuBorderPadding"); }
	bool& bIsFocusableField() { return *GetNativePointerField<bool*>(this, "SComboButton.bIsFocusable"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SComboButton.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SComboButton.FArguments"); }
	void Construct(const SComboButton::FArguments * InArgs) { NativeCall<void, const SComboButton::FArguments *>(this, "SComboButton.Construct", InArgs); }
	FReply * OnButtonClicked(FReply * result) { return NativeCall<FReply *, FReply *>(this, "SComboButton.OnButtonClicked", result); }
	void SetMenuContent(const TSharedRef<SWidget,0> * InContent) { NativeCall<void, const TSharedRef<SWidget,0> *>(this, "SComboButton.SetMenuContent", InContent); }
	void SetMenuContentWidgetToFocus(TWeakPtr<SWidget,0> InWidgetToFocusPtr) { NativeCall<void, TWeakPtr<SWidget,0>>(this, "SComboButton.SetMenuContentWidgetToFocus", InWidgetToFocusPtr); }
};

struct SPopupErrorText : SComboButton
{
	char __padding[0x28L];
	TSharedPtr<SErrorText,0>& HasErrorSymbolField() { return *GetNativePointerField<TSharedPtr<SErrorText,0>*>(this, "SPopupErrorText.HasErrorSymbol"); }
	TSharedPtr<SErrorText,0>& ErrorTextField() { return *GetNativePointerField<TSharedPtr<SErrorText,0>*>(this, "SPopupErrorText.ErrorText"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SPopupErrorText.FArguments"); }
	void Construct(const SPopupErrorText::FArguments * InArgs) { NativeCall<void, const SPopupErrorText::FArguments *>(this, "SPopupErrorText.Construct", InArgs); }
	bool HasError() { return NativeCall<bool>(this, "SPopupErrorText.HasError"); }
	void SetError(const FString * InErrorText) { NativeCall<void, const FString *>(this, "SPopupErrorText.SetError", InErrorText); }
	void SetError(const FText * InErrorText) { NativeCall<void, const FText *>(this, "SPopupErrorText.SetError", InErrorText); }
};

