#pragma once

#include "BaseDeclarations.h"
#include "UContextMenuItem.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UContextMenuItem_Spinner : UContextMenuItem
{
	char __padding[0x38L];
	int& ValueField() { return *GetNativePointerField<int*>(this, "UContextMenuItem_Spinner.Value"); }
	int& MinValueField() { return *GetNativePointerField<int*>(this, "UContextMenuItem_Spinner.MinValue"); }
	int& MaxValueField() { return *GetNativePointerField<int*>(this, "UContextMenuItem_Spinner.MaxValue"); }

	// Functions

	void FOnSpinnerValueCommitedEvent(UContextMenuItem_Spinner * InParam1, int InParam2, ETextCommit::Type InParam3) { NativeCall<void, UContextMenuItem_Spinner *, int, ETextCommit::Type>(this, "UContextMenuItem_Spinner.FOnSpinnerValueCommitedEvent", InParam1, InParam2, InParam3); }
	int GetMaxValue() { return NativeCall<int>(this, "UContextMenuItem_Spinner.GetMaxValue"); }
	int GetMinValue() { return NativeCall<int>(this, "UContextMenuItem_Spinner.GetMinValue"); }
	int GetValue() { return NativeCall<int>(this, "UContextMenuItem_Spinner.GetValue"); }
	void HandleOnButtonDecreaseClicked() { NativeCall<void>(this, "UContextMenuItem_Spinner.HandleOnButtonDecreaseClicked"); }
	void HandleOnButtonIncreaseClicked() { NativeCall<void>(this, "UContextMenuItem_Spinner.HandleOnButtonIncreaseClicked"); }
	void HandleOnTextCommited(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UContextMenuItem_Spinner.HandleOnTextCommited", Text, CommitMethod); }
	void RefreshButtons() { NativeCall<void>(this, "UContextMenuItem_Spinner.RefreshButtons"); }
	void RefreshEditableText() { NativeCall<void>(this, "UContextMenuItem_Spinner.RefreshEditableText"); }
	void SetMaxValue(int NewValue) { NativeCall<void, int>(this, "UContextMenuItem_Spinner.SetMaxValue", NewValue); }
	void SetMinValue(int NewValue) { NativeCall<void, int>(this, "UContextMenuItem_Spinner.SetMinValue", NewValue); }
	void SetValue(int NewValue) { NativeCall<void, int>(this, "UContextMenuItem_Spinner.SetValue", NewValue); }
	bool TextToValue(const FText * Text, int * OutValue) { return NativeCall<bool, const FText *, int *>(this, "UContextMenuItem_Spinner.TextToValue", Text, OutValue); }
};

