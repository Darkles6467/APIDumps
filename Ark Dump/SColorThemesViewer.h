#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SColorThemesViewer : SCompoundWidget
{
	char __padding[0xb8L];
	TSharedPtr<SListView<TSharedPtr<FColorTheme,0> >,0>& ColorThemeListField() { return *GetNativePointerField<TSharedPtr<SListView<TSharedPtr<FColorTheme,0> >,0>*>(this, "SColorThemesViewer.ColorThemeList"); }
	TSharedPtr<SErrorText,0>& ErrorTextField() { return *GetNativePointerField<TSharedPtr<SErrorText,0>*>(this, "SColorThemesViewer.ErrorText"); }
	SColorThemesViewer::FCurrentThemeChangedEvent& CurrentThemeChangedEventField() { return *GetNativePointerField<SColorThemesViewer::FCurrentThemeChangedEvent*>(this, "SColorThemesViewer.CurrentThemeChangedEvent"); }
	TAttribute<bool>& bUseAlphaField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SColorThemesViewer.bUseAlpha"); }
};

