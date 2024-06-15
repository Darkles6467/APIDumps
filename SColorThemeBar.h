#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SColorThemeBar : SCompoundWidget
{
	char __padding[0x68L];
	TSharedPtr<STextBlock,0>& ThemeNameTextField() { return *GetNativePointerField<TSharedPtr<STextBlock,0>*>(this, "SColorThemeBar.ThemeNameText"); }
	TWeakPtr<FColorTheme,0>& ColorThemeField() { return *GetNativePointerField<TWeakPtr<FColorTheme,0>*>(this, "SColorThemeBar.ColorTheme"); }
	TAttribute<bool>& bUseSRGBField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SColorThemeBar.bUseSRGB"); }
	TAttribute<bool>& bUseAlphaField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SColorThemeBar.bUseAlpha"); }
};

