#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_TextEntry : UPrimalUI
{
	char __padding[0x98L];
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_TextEntry.CloseButtonName"); }
	FName& AcceptButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_TextEntry.AcceptButtonName"); }
	FName& TitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_TextEntry.TitleLabelName"); }
	FName& EditTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_TextEntry.EditTextBoxName"); }
	FName& CheckBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_TextEntry.CheckBoxName"); }
	FName& CheckBoxLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_TextEntry.CheckBoxLabelName"); }
	float& MaxOpenTimeField() { return *GetNativePointerField<float*>(this, "UUI_TextEntry.MaxOpenTime"); }
	UTextBlock * TitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TextEntry.TitleLabel"); }
	UMultiLineEditableTextBox * EditTextBoxMultiLineField() { return GetNativePointerField<UMultiLineEditableTextBox *>(this, "UUI_TextEntry.EditTextBoxMultiLine"); }
	UCheckBox * CheckBoxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_TextEntry.CheckBox"); }
	UTextBlock * CheckBoxLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TextEntry.CheckBoxLabel"); }
	unsigned int& ForID1Field() { return *GetNativePointerField<unsigned int*>(this, "UUI_TextEntry.ForID1"); }
	unsigned int& ForID2Field() { return *GetNativePointerField<unsigned int*>(this, "UUI_TextEntry.ForID2"); }
	bool& bNumericValueField() { return *GetNativePointerField<bool*>(this, "UUI_TextEntry.bNumericValue"); }
	bool& bLimitInputField() { return *GetNativePointerField<bool*>(this, "UUI_TextEntry.bLimitInput"); }
	int& LimitCountField() { return *GetNativePointerField<int*>(this, "UUI_TextEntry.LimitCount"); }
	bool& bCanCommitEmptyStringField() { return *GetNativePointerField<bool*>(this, "UUI_TextEntry.bCanCommitEmptyString"); }
	bool& bNumericAndCharField() { return *GetNativePointerField<bool*>(this, "UUI_TextEntry.bNumericAndChar"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_TextEntry.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_TextEntry.ClickedButton", clickedWidget); }
	void HighlightWidgetOnStart(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_TextEntry.HighlightWidgetOnStart", RestrictToPanel); }
	void InitForObjects(UObject * AssociatedObject1, UObject * AssociatedObject2, unsigned int ExtraID1, unsigned int ExtraID2) { NativeCall<void, UObject *, UObject *, unsigned int, unsigned int>(this, "UUI_TextEntry.InitForObjects", AssociatedObject1, AssociatedObject2, ExtraID1, ExtraID2); }
	void OnTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_TextEntry.OnTextChanged", Text); }
	void OnTextCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_TextEntry.OnTextCommitted", Text, CommitMethod); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_TextEntry.Tick_Implementation", MyGeometry, InDeltaTime); }
};

