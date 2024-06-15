#pragma once

#include "BaseDeclarations.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SErrorText : SBorder
{
	char __padding[0x80L];
	TAttribute<FSlateFontInfo>& FontField() { return *GetNativePointerField<TAttribute<FSlateFontInfo>*>(this, "SErrorText.Font"); }
	TAttribute<EVisibility>& CustomVisibilityField() { return *GetNativePointerField<TAttribute<EVisibility>*>(this, "SErrorText.CustomVisibility"); }
	TSharedPtr<STextBlock,0>& TextBlockField() { return *GetNativePointerField<TSharedPtr<STextBlock,0>*>(this, "SErrorText.TextBlock"); }
	FCurveSequence& ExpandAnimationField() { return *GetNativePointerField<FCurveSequence*>(this, "SErrorText.ExpandAnimation"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SErrorText.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SErrorText.FArguments"); }
	void Construct(const SErrorText::FArguments * InArgs) { NativeCall<void, const SErrorText::FArguments *>(this, "SErrorText.Construct", InArgs); }
	FVector2D * GetDesiredSizeScale(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SErrorText.GetDesiredSizeScale", result); }
	bool HasError() { return NativeCall<bool>(this, "SErrorText.HasError"); }
	EVisibility * MyVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SErrorText.MyVisibility", result); }
	void SetError(const FString * InErrorText) { NativeCall<void, const FString *>(this, "SErrorText.SetError", InErrorText); }
};

