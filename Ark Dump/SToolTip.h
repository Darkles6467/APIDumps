#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SToolTip : SCompoundWidget
{
	char __padding[0x118L];
	TAttribute<FText>& TextContentField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SToolTip.TextContent"); }
	TAttribute<FSlateFontInfo>& FontField() { return *GetNativePointerField<TAttribute<FSlateFontInfo>*>(this, "SToolTip.Font"); }
	TAttribute<FSlateColor>& ColorAndOpacityField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "SToolTip.ColorAndOpacity"); }
	TAttribute<FMargin>& TextMarginField() { return *GetNativePointerField<TAttribute<FMargin>*>(this, "SToolTip.TextMargin"); }
	TAttribute<bool>& bIsInteractiveField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SToolTip.bIsInteractive"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SToolTip.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SToolTip.FArguments"); }
	SToolTip::FArguments * FArguments(const TSharedRef<SWidget,0> InChild) { return NativeCall<SToolTip::FArguments *, const TSharedRef<SWidget,0>>(this, "SToolTip.FArguments", InChild); }
	SToolTip::FArguments * FArguments(SDockTab * InUserObject, __int128 InFunc) { return NativeCall<SToolTip::FArguments *, SDockTab *, __int128>(this, "SToolTip.FArguments", InUserObject, InFunc); }
	void Construct(const SToolTip::FArguments * InArgs) { NativeCall<void, const SToolTip::FArguments *>(this, "SToolTip.Construct", InArgs); }
	static float GetToolTipWrapWidth() { return NativeCall<float>(nullptr, "SToolTip.GetToolTipWrapWidth"); }
	bool IsEmpty() { return NativeCall<bool>(this, "SToolTip.IsEmpty"); }
	void SetContentWidget(const TSharedRef<SWidget,0> * InContentWidget) { NativeCall<void, const TSharedRef<SWidget,0> *>(this, "SToolTip.SetContentWidget", InContentWidget); }
};

