#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FDockTabStyle : FSlateWidgetStyle
{
	char __padding[0x5d0L];
	FButtonStyle& CloseButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "FDockTabStyle.CloseButtonStyle"); }
	FMargin& TabPaddingField() { return *GetNativePointerField<FMargin*>(this, "FDockTabStyle.TabPadding"); }
	float& OverlapWidthField() { return *GetNativePointerField<float*>(this, "FDockTabStyle.OverlapWidth"); }
	FSlateColor& FlashColorField() { return *GetNativePointerField<FSlateColor*>(this, "FDockTabStyle.FlashColor"); }

	// Functions

	static const FDockTabStyle * GetDefault() { return NativeCall<const FDockTabStyle *>(nullptr, "FDockTabStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FDockTabStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FDockTabStyle.GetTypeName", result); }
	FDockTabStyle * SetActiveBrush(const FSlateBrush * InActiveBrush) { return NativeCall<FDockTabStyle *, const FSlateBrush *>(this, "FDockTabStyle.SetActiveBrush", InActiveBrush); }
	FDockTabStyle * SetColorOverlayBrush(const FSlateBrush * InColorOverlayBrush) { return NativeCall<FDockTabStyle *, const FSlateBrush *>(this, "FDockTabStyle.SetColorOverlayBrush", InColorOverlayBrush); }
	FDockTabStyle * SetContentAreaBrush(const FSlateBrush * InContentAreaBrush) { return NativeCall<FDockTabStyle *, const FSlateBrush *>(this, "FDockTabStyle.SetContentAreaBrush", InContentAreaBrush); }
	FDockTabStyle * SetFlashColor(const FSlateColor * InFlashColor) { return NativeCall<FDockTabStyle *, const FSlateColor *>(this, "FDockTabStyle.SetFlashColor", InFlashColor); }
	FDockTabStyle * SetForegroundBrush(const FSlateBrush * InForegroundBrush) { return NativeCall<FDockTabStyle *, const FSlateBrush *>(this, "FDockTabStyle.SetForegroundBrush", InForegroundBrush); }
	FDockTabStyle * SetHoveredBrush(const FSlateBrush * InHoveredBrush) { return NativeCall<FDockTabStyle *, const FSlateBrush *>(this, "FDockTabStyle.SetHoveredBrush", InHoveredBrush); }
	FWindowStyle * SetCloseButtonStyle(const FButtonStyle * InMinimizeButtonStyle) { return NativeCall<FWindowStyle *, const FButtonStyle *>(this, "FDockTabStyle.SetCloseButtonStyle", InMinimizeButtonStyle); }
	FDockTabStyle * SetNormalBrush(const FSlateBrush * InNormalBrush) { return NativeCall<FDockTabStyle *, const FSlateBrush *>(this, "FDockTabStyle.SetNormalBrush", InNormalBrush); }
	FDockTabStyle * SetOverlapWidth(const float InOverlapWidth) { return NativeCall<FDockTabStyle *, const float>(this, "FDockTabStyle.SetOverlapWidth", InOverlapWidth); }
	FDockTabStyle * SetTabPadding(const FMargin * InTabPadding) { return NativeCall<FDockTabStyle *, const FMargin *>(this, "FDockTabStyle.SetTabPadding", InTabPadding); }
	FDockTabStyle * SetTabWellBrush(const FSlateBrush * InTabWellBrush) { return NativeCall<FDockTabStyle *, const FSlateBrush *>(this, "FDockTabStyle.SetTabWellBrush", InTabWellBrush); }
	FDockTabStyle * operator=(const FDockTabStyle * __that) { return NativeCall<FDockTabStyle *, const FDockTabStyle *>(this, "FDockTabStyle.operator=", __that); }
};

