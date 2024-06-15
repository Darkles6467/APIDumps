#pragma once

#include "BaseDeclarations.h"
#include "SBorder.h"
#include "FMargin.h"

struct SButton : SBorder
{
	char __padding[0xd0L];
	bool& bForceHandleMouseDownField() { return *GetNativePointerField<bool*>(this, "SButton.bForceHandleMouseDown"); }
	EButtonClickMethod::Type& ClickMethodField() { return *GetNativePointerField<EButtonClickMethod::Type*>(this, "SButton.ClickMethod"); }
	TAttribute<FMargin>& ContentPaddingField() { return *GetNativePointerField<TAttribute<FMargin>*>(this, "SButton.ContentPadding"); }
	FMargin& BorderPaddingField() { return *GetNativePointerField<FMargin*>(this, "SButton.BorderPadding"); }
	FMargin& PressedBorderPaddingField() { return *GetNativePointerField<FMargin*>(this, "SButton.PressedBorderPadding"); }
	bool& bIsPressedField() { return *GetNativePointerField<bool*>(this, "SButton.bIsPressed"); }
	bool& bIsSecondaryPressedField() { return *GetNativePointerField<bool*>(this, "SButton.bIsSecondaryPressed"); }
	const FButtonStyle * StyleField() { return GetNativePointerField<const FButtonStyle *>(this, "SButton.Style"); }
	bool& bEnableCustomDisabledStyleField() { return *GetNativePointerField<bool*>(this, "SButton.bEnableCustomDisabledStyle"); }
	EButtonTouchMethod::Type& TouchMethodField() { return *GetNativePointerField<EButtonTouchMethod::Type*>(this, "SButton.TouchMethod"); }
	bool& bIsFocusableField() { return *GetNativePointerField<bool*>(this, "SButton.bIsFocusable"); }
	FSlateSound& HoveredSoundField() { return *GetNativePointerField<FSlateSound*>(this, "SButton.HoveredSound"); }
	FSlateSound& PressedSoundField() { return *GetNativePointerField<FSlateSound*>(this, "SButton.PressedSound"); }

	// Functions

	bool IsPressed() { return NativeCall<bool>(this, "SButton.IsPressed"); }
	void FArguments() { NativeCall<void>(this, "SButton.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SButton.FArguments"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SButton.ComputeDesiredSize", result); }
	void Construct(const SButton::FArguments * InArgs) { NativeCall<void, const SButton::FArguments *>(this, "SButton.Construct", InArgs); }
	FMargin * GetCombinedPadding(FMargin * result) { return NativeCall<FMargin *, FMargin *>(this, "SButton.GetCombinedPadding", result); }
	FReply * OnMouseButtonDoubleClick(FReply * result, const FGeometry * InMyGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SButton.OnMouseButtonDoubleClick", result, InMyGeometry, InMouseEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SButton.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SButton.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	void OnMouseEnter(const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { NativeCall<void, const FGeometry *, const FPointerEvent *>(this, "SButton.OnMouseEnter", MyGeometry, MouseEvent); }
	void OnMouseLeave(const FPointerEvent * MouseEvent) { NativeCall<void, const FPointerEvent *>(this, "SButton.OnMouseLeave", MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SButton.OnMouseMove", result, MyGeometry, MouseEvent); }
	void SetButtonStyle(const FButtonStyle * ButtonStyle) { NativeCall<void, const FButtonStyle *>(this, "SButton.SetButtonStyle", ButtonStyle); }
	void SetContentPadding(const TAttribute<FMargin> * InContentPadding) { NativeCall<void, const TAttribute<FMargin> *>(this, "SButton.SetContentPadding", InContentPadding); }
	bool SupportsKeyboardFocus() { return NativeCall<bool>(this, "SButton.SupportsKeyboardFocus"); }
};

