#pragma once

#include "BaseDeclarations.h"
#include "SMultiBlockBaseWidget.h"
#include "IMultiBlockBaseWidget.h"

struct SMenuEntryBlock : SMultiBlockBaseWidget
{
	char __padding[0x40L];
	float& TimeToSubMenuOpenField() { return *GetNativePointerField<float*>(this, "SMenuEntryBlock.TimeToSubMenuOpen"); }
	SMenuEntryBlock::<unnamed_type_SubMenuRequestState>& SubMenuRequestStateField() { return *GetNativePointerField<SMenuEntryBlock::<unnamed_type_SubMenuRequestState>*>(this, "SMenuEntryBlock.SubMenuRequestState"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SMenuEntryBlock.FArguments"); }
	void FMenuEntryBuildParams() { NativeCall<void>(this, "SMenuEntryBlock.FMenuEntryBuildParams"); }
	void BuildMultiBlockWidget(const ISlateStyle * StyleSet, const FName * StyleName) { NativeCall<void, const ISlateStyle *, const FName *>(this, "SMenuEntryBlock.BuildMultiBlockWidget", StyleSet, StyleName); }
	void Construct(const SMenuEntryBlock::FArguments * InArgs) { NativeCall<void, const SMenuEntryBlock::FArguments *>(this, "SMenuEntryBlock.Construct", InArgs); }
	FText * GetFilteredToolTipText(FText * result, TAttribute<FText> ToolTipText) { return NativeCall<FText *, FText *, TAttribute<FText>>(this, "SMenuEntryBlock.GetFilteredToolTipText", result, ToolTipText); }
	EVisibility * GetVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SMenuEntryBlock.GetVisibility", result); }
	FSlateColor * InvertOnHover(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SMenuEntryBlock.InvertOnHover", result); }
	ESlateCheckBoxState::Type IsChecked() { return NativeCall<ESlateCheckBoxState::Type>(this, "SMenuEntryBlock.IsChecked"); }
	bool IsEnabled() { return NativeCall<bool>(this, "SMenuEntryBlock.IsEnabled"); }
	void OnCheckStateChanged(const ESlateCheckBoxState::Type NewCheckedState) { NativeCall<void, const ESlateCheckBoxState::Type>(this, "SMenuEntryBlock.OnCheckStateChanged", NewCheckedState); }
	void OnClicked(bool bCheckBoxClicked) { NativeCall<void, bool>(this, "SMenuEntryBlock.OnClicked", bCheckBoxClicked); }
	FReply * OnKeyDown(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * KeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SMenuEntryBlock.OnKeyDown", result, MyGeometry, KeyboardEvent); }
	FReply * OnMenuItemButtonClicked(FReply * result) { return NativeCall<FReply *, FReply *>(this, "SMenuEntryBlock.OnMenuItemButtonClicked", result); }
	void OnMouseEnter(const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { NativeCall<void, const FGeometry *, const FPointerEvent *>(this, "SMenuEntryBlock.OnMouseEnter", MyGeometry, MouseEvent); }
	void OnMouseLeave(const FPointerEvent * MouseEvent) { NativeCall<void, const FPointerEvent *>(this, "SMenuEntryBlock.OnMouseLeave", MouseEvent); }
	bool ShouldSubMenuAppearHovered() { return NativeCall<bool>(this, "SMenuEntryBlock.ShouldSubMenuAppearHovered"); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SMenuEntryBlock.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
	FSlateColor * TintOnHover(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SMenuEntryBlock.TintOnHover", result); }
	void UpdateSubMenuState() { NativeCall<void>(this, "SMenuEntryBlock.UpdateSubMenuState"); }
};

