#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FWindowStyle : FSlateWidgetStyle
{
	char __padding[0xda8L];
	FButtonStyle& MinimizeButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "FWindowStyle.MinimizeButtonStyle"); }
	FButtonStyle& MaximizeButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "FWindowStyle.MaximizeButtonStyle"); }
	FButtonStyle& RestoreButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "FWindowStyle.RestoreButtonStyle"); }
	FButtonStyle& CloseButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "FWindowStyle.CloseButtonStyle"); }
	FTextBlockStyle& TitleTextStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "FWindowStyle.TitleTextStyle"); }
	FSlateColor& OutlineColorField() { return *GetNativePointerField<FSlateColor*>(this, "FWindowStyle.OutlineColor"); }

	// Functions

	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FWindowStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FWindowStyle.GetTypeName", result); }
	FWindowStyle * SetActiveTitleBrush(const FSlateBrush * InActiveTitleBrush) { return NativeCall<FWindowStyle *, const FSlateBrush *>(this, "FWindowStyle.SetActiveTitleBrush", InActiveTitleBrush); }
	FWindowStyle * SetBackgroundBrush(const FSlateBrush * InBackgroundBrush) { return NativeCall<FWindowStyle *, const FSlateBrush *>(this, "FWindowStyle.SetBackgroundBrush", InBackgroundBrush); }
	FWindowStyle * SetBorderBrush(const FSlateBrush * InBorderBrush) { return NativeCall<FWindowStyle *, const FSlateBrush *>(this, "FWindowStyle.SetBorderBrush", InBorderBrush); }
	FWindowStyle * SetChildBackgroundBrush(const FSlateBrush * InChildBackgroundBrush) { return NativeCall<FWindowStyle *, const FSlateBrush *>(this, "FWindowStyle.SetChildBackgroundBrush", InChildBackgroundBrush); }
	FWindowStyle * SetCloseButtonStyle(const FButtonStyle * InCloseButtonStyle) { return NativeCall<FWindowStyle *, const FButtonStyle *>(this, "FWindowStyle.SetCloseButtonStyle", InCloseButtonStyle); }
	FWindowStyle * SetFlashTitleBrush(const FSlateBrush * InFlashTitleBrush) { return NativeCall<FWindowStyle *, const FSlateBrush *>(this, "FWindowStyle.SetFlashTitleBrush", InFlashTitleBrush); }
	FWindowStyle * SetInactiveTitleBrush(const FSlateBrush * InInactiveTitleBrush) { return NativeCall<FWindowStyle *, const FSlateBrush *>(this, "FWindowStyle.SetInactiveTitleBrush", InInactiveTitleBrush); }
	FWindowStyle * SetMaximizeButtonStyle(const FButtonStyle * InMaximizeButtonStyle) { return NativeCall<FWindowStyle *, const FButtonStyle *>(this, "FWindowStyle.SetMaximizeButtonStyle", InMaximizeButtonStyle); }
	FWindowStyle * SetOutlineBrush(const FSlateBrush * InOutlineBrush) { return NativeCall<FWindowStyle *, const FSlateBrush *>(this, "FWindowStyle.SetOutlineBrush", InOutlineBrush); }
	FWindowStyle * SetOutlineColor(const FSlateColor * InOutlineColor) { return NativeCall<FWindowStyle *, const FSlateColor *>(this, "FWindowStyle.SetOutlineColor", InOutlineColor); }
	FWindowStyle * SetRestoreButtonStyle(const FButtonStyle * InRestoreButtonStyle) { return NativeCall<FWindowStyle *, const FButtonStyle *>(this, "FWindowStyle.SetRestoreButtonStyle", InRestoreButtonStyle); }
	FWindowStyle * SetTitleTextStyle(const FTextBlockStyle * InTitleTextStyle) { return NativeCall<FWindowStyle *, const FTextBlockStyle *>(this, "FWindowStyle.SetTitleTextStyle", InTitleTextStyle); }
	FWindowStyle * operator=(const FWindowStyle * __that) { return NativeCall<FWindowStyle *, const FWindowStyle *>(this, "FWindowStyle.operator=", __that); }
};

