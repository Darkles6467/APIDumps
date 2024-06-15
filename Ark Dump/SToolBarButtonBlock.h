#pragma once

#include "BaseDeclarations.h"
#include "SMultiBlockBaseWidget.h"
#include "IMultiBlockBaseWidget.h"

struct SToolBarButtonBlock : SMultiBlockBaseWidget
{
	char __padding[0x28L];
	TAttribute<EVisibility>& LabelVisibilityField() { return *GetNativePointerField<TAttribute<EVisibility>*>(this, "SToolBarButtonBlock.LabelVisibility"); }
	bool& bIsFocusableField() { return *GetNativePointerField<bool*>(this, "SToolBarButtonBlock.bIsFocusable"); }
	bool& bForceSmallIconsField() { return *GetNativePointerField<bool*>(this, "SToolBarButtonBlock.bForceSmallIcons"); }
	FName& TutorialHighlightNameField() { return *GetNativePointerField<FName*>(this, "SToolBarButtonBlock.TutorialHighlightName"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SToolBarButtonBlock.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SToolBarButtonBlock.FArguments"); }
	void BuildMultiBlockWidget(const ISlateStyle * StyleSet, const FName * StyleName) { NativeCall<void, const ISlateStyle *, const FName *>(this, "SToolBarButtonBlock.BuildMultiBlockWidget", StyleSet, StyleName); }
	void Construct(const SToolBarButtonBlock::FArguments * InArgs) { NativeCall<void, const SToolBarButtonBlock::FArguments *>(this, "SToolBarButtonBlock.Construct", InArgs); }
	EVisibility * GetBlockVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SToolBarButtonBlock.GetBlockVisibility", result); }
	EVisibility * GetIconVisibility(EVisibility * result, bool bIsASmallIcon) { return NativeCall<EVisibility *, EVisibility *, bool>(this, "SToolBarButtonBlock.GetIconVisibility", result, bIsASmallIcon); }
	bool IsEnabled() { return NativeCall<bool>(this, "SToolBarButtonBlock.IsEnabled"); }
	void OnCheckStateChanged(const ESlateCheckBoxState::Type NewCheckedState) { NativeCall<void, const ESlateCheckBoxState::Type>(this, "SToolBarButtonBlock.OnCheckStateChanged", NewCheckedState); }
	FReply * OnClicked(FReply * result) { return NativeCall<FReply *, FReply *>(this, "SToolBarButtonBlock.OnClicked", result); }
	ESlateCheckBoxState::Type OnIsChecked() { return NativeCall<ESlateCheckBoxState::Type>(this, "SToolBarButtonBlock.OnIsChecked"); }
};

