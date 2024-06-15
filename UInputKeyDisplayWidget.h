#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FKey.h"

struct UInputKeyDisplayWidget : UWidget
{
	char __padding[0x2b8L];
	FTextBlockStyle& KeyTextStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "UInputKeyDisplayWidget.KeyTextStyle"); }
	FTextBlockStyle& SeparatorTextStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "UInputKeyDisplayWidget.SeparatorTextStyle"); }
	FVector2D& ButtonImageSizeField() { return *GetNativePointerField<FVector2D*>(this, "UInputKeyDisplayWidget.ButtonImageSize"); }
	FString& TextPrefixField() { return *GetNativePointerField<FString*>(this, "UInputKeyDisplayWidget.TextPrefix"); }
	FString& TextSuffixField() { return *GetNativePointerField<FString*>(this, "UInputKeyDisplayWidget.TextSuffix"); }
	TArray<FKey>& AssignedKeysField() { return *GetNativePointerField<TArray<FKey>*>(this, "UInputKeyDisplayWidget.AssignedKeys"); }
	TSharedPtr<STextBlock,0>& SlateTextPrefixField() { return *GetNativePointerField<TSharedPtr<STextBlock,0>*>(this, "UInputKeyDisplayWidget.SlateTextPrefix"); }
	TSharedPtr<STextBlock,0>& SlateTextSuffixField() { return *GetNativePointerField<TSharedPtr<STextBlock,0>*>(this, "UInputKeyDisplayWidget.SlateTextSuffix"); }
	TArray<TSharedPtr<STextBlock,0>>& SlatePlusSeparatorsField() { return *GetNativePointerField<TArray<TSharedPtr<STextBlock,0>>*>(this, "UInputKeyDisplayWidget.SlatePlusSeparators"); }
	TArray<TSharedPtr<STextBlock,0>>& SlateKeyboardKeyField() { return *GetNativePointerField<TArray<TSharedPtr<STextBlock,0>>*>(this, "UInputKeyDisplayWidget.SlateKeyboardKey"); }

	// Functions

	void ApplyTextStyle(const FTextBlockStyle * Style, STextBlock * Block) { NativeCall<void, const FTextBlockStyle *, STextBlock *>(this, "UInputKeyDisplayWidget.ApplyTextStyle", Style, Block); }
	void RefreshSlateWidgets() { NativeCall<void>(this, "UInputKeyDisplayWidget.RefreshSlateWidgets"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UInputKeyDisplayWidget.ReleaseSlateResources", bReleaseChildren); }
	bool SetAssignedKey(int idx, FKey key) { return NativeCall<bool, int, FKey>(this, "UInputKeyDisplayWidget.SetAssignedKey", idx, key); }
	void SynchronizeProperties() { NativeCall<void>(this, "UInputKeyDisplayWidget.SynchronizeProperties"); }
};

