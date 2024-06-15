#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SCheckBox : SCompoundWidget
{
	char __padding[0xe0L];
	const FCheckBoxStyle * StyleField() { return GetNativePointerField<const FCheckBoxStyle *>(this, "SCheckBox.Style"); }
	bool& bIsPressedField() { return *GetNativePointerField<bool*>(this, "SCheckBox.bIsPressed"); }
	TAttribute<enum ESlateCheckBoxState::Type>& IsCheckboxCheckedField() { return *GetNativePointerField<TAttribute<enum ESlateCheckBoxState::Type>*>(this, "SCheckBox.IsCheckboxChecked"); }
	EButtonClickMethod::Type& ClickMethodField() { return *GetNativePointerField<EButtonClickMethod::Type*>(this, "SCheckBox.ClickMethod"); }
	bool& bIsFocusableField() { return *GetNativePointerField<bool*>(this, "SCheckBox.bIsFocusable"); }
	FSlateSound& HoveredSoundField() { return *GetNativePointerField<FSlateSound*>(this, "SCheckBox.HoveredSound"); }
	FSlateSound& CheckedSoundField() { return *GetNativePointerField<FSlateSound*>(this, "SCheckBox.CheckedSound"); }
	FSlateSound& UncheckedSoundField() { return *GetNativePointerField<FSlateSound*>(this, "SCheckBox.UncheckedSound"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SCheckBox.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SCheckBox.FArguments"); }
	SCheckBox::FArguments * FArguments(const TSharedRef<SWidget,0> InChild) { return NativeCall<SCheckBox::FArguments *, const TSharedRef<SWidget,0>>(this, "SCheckBox.FArguments", InChild); }
	SCheckBox::FArguments * FArguments(SToolBarButtonBlock * InUserObject, __int128 InFunc) { return NativeCall<SCheckBox::FArguments *, SToolBarButtonBlock *, __int128>(this, "SCheckBox.FArguments", InUserObject, InFunc); }
	void Construct(const SCheckBox::FArguments * InArgs) { NativeCall<void, const SCheckBox::FArguments *>(this, "SCheckBox.Construct", InArgs); }
	ESlateCheckBoxState::Type GetCheckedState() { return NativeCall<ESlateCheckBoxState::Type>(this, "SCheckBox.GetCheckedState"); }
	FReply * OnKeyUp(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SCheckBox.OnKeyUp", result, MyGeometry, InKeyboardEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SCheckBox.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SCheckBox.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	void OnMouseEnter(const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { NativeCall<void, const FGeometry *, const FPointerEvent *>(this, "SCheckBox.OnMouseEnter", MyGeometry, MouseEvent); }
	void OnMouseLeave(const FPointerEvent * MouseEvent) { NativeCall<void, const FPointerEvent *>(this, "SCheckBox.OnMouseLeave", MouseEvent); }
	void SetContent(const TSharedRef<SWidget,0> * InContent) { NativeCall<void, const TSharedRef<SWidget,0> *>(this, "SCheckBox.SetContent", InContent); }
	void SetIsChecked(TAttribute<enum ESlateCheckBoxState::Type> InIsChecked) { NativeCall<void, TAttribute<enum ESlateCheckBoxState::Type>>(this, "SCheckBox.SetIsChecked", InIsChecked); }
	bool SupportsKeyboardFocus() { return NativeCall<bool>(this, "SCheckBox.SupportsKeyboardFocus"); }
	void ToggleCheckedState() { NativeCall<void>(this, "SCheckBox.ToggleCheckedState"); }
};

